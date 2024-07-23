module.exports = grammar({
  name: 'vb6',

  // Define conflitos de gramática para o Tree-sitter resolver ambiguidade
  conflicts: $ => [
    [$.source_file, $._definition]
  ],

  rules: {
    // Regra principal que define o arquivo-fonte VB6
    source_file: $ => seq(
      optional($.header), // Opcionalmente, inclui um cabeçalho
      repeat(choice($.variable_definition, $._definition, $.comment)) // Repete definições de variáveis, definições ou comentários
    ),

    // Define a estrutura do cabeçalho
    header: $ => repeat1(choice(
      $.version_statement,
      $.attribute_statement,
      $.begin_block,
      $.implements_statement,
      $.option_statement
    )),

    // Define uma declaração de versão
    version_statement: $ => seq('VERSION', $.number, 'CLASS'),

    // Define uma declaração de atributo
    attribute_statement: $ => seq('Attribute', $.identifier, '=', $.attribute_value),

    // Valor de atributo pode ser string, booleano ou número
    attribute_value: $ => choice($.string, $.boolean, $.number),

    // Bloco BEGIN
    begin_block: $ => seq(
      'BEGIN',
      repeat($.setting_statement), // Repete declarações de configuração
      'END'
    ),

    // Declaração de configuração dentro de um bloco BEGIN
    setting_statement: $ => seq(
      field('name', $.identifier),
      '=',
      field('value', $.number),
      optional($.comment) // Comentário opcional
    ),

    // Declaração de implementação
    implements_statement: $ => seq('Implements', $.identifier),

    // Declaração de opção
    option_statement: $ => seq('Option', choice('Explicit', 'Base', 'Compare')),

    // Definições de métodos e propriedades
    _definition: $ => choice(
      $.sub_definition,
      $.function_definition,
      $.property_definition,
      $.comment
    ),

    // Declaração de variável
    variable_definition: $ => seq(
      choice('Public', 'Private', 'Dim', 'Static', 'Global', 'Const'), // Modificadores de acesso
      field('name', $.identifier),
      'As',
      field('type', $.type)
    ),


    // Definição completa de sub
    sub_definition: $ => seq(
      optional(choice('Public', 'Private')), // Modificadores de acesso opcionais
      'Sub',
      field('name', $.identifier),
      $.formal_parameters, // Parâmetros do sub
      field('block', $.block), // Corpo do método
      $.end_sub
    ),

    // Definição completa de função
    function_definition: $ => seq(
      optional(choice('Public', 'Private')), // Modificadores de acesso opcionais
      'Function',
      field('name', $.identifier),
      $.formal_parameters, // Parâmetros da função
      optional(seq(
        'As',
        field('return_type', $.type) // Tipo de retorno da função
      )),
      field('block', $.block), // Corpo da função
      $.end_function
    ),

    // Definição de propriedade
    property_definition: $ => seq(
      optional(choice('Public', 'Private')), // Modificadores de acesso opcionais
      'Property',
      choice('Get', 'Let', 'Set'), // Tipo de propriedade
      field('name', $.identifier),
      $.formal_parameters, // Parâmetros da propriedade
      field('block', $.block), // Corpo da propriedade
      $.end_property
    ),

    // Declaração de finalização de sub
    end_sub: $ => seq('End', 'Sub'),

    // Declaração de finalização de função
    end_function: $ => seq('End', 'Function'),

    // Declaração de finalização de propriedade
    end_property: $ => seq('End', 'Property'),

    // Corpo do método
    block: $ => repeat1($._method_body_element),

    // Elementos dentro do corpo do método
    _method_body_element: $ => choice(
      $.identifier,
      $.variable_declaration,
      $.assignment,
      $.function_call,
      $.call_statement,
      $.comment
    ),

    // Declaração de variável
    variable_declaration: $ => seq(
      'Dim',
      field('name', $.identifier),
      'As',
      field('type', $.type)
    ),

    // Lista de parâmetros
    formal_parameters: $ => seq(
      '(',
      optional(commaSep($.parameter)),
      ')'
    ),

    // Definição de parâmetro
    parameter: $ => seq(
      field('name', $.identifier),
      optional(seq(
        'As',
        field('type', $.type)
      ))
    ),

    // Identificador para variáveis, funções, etc.
    identifier: $ => /[a-zA-Z_][a-zA-Z0-9_]*[$%&@#!]?/,

    // Identificador qualificado para acessar membros
    qualified_identifier: $ => seq(
      $.identifier,
      repeat(seq('.', $.identifier))
    ),

    // Tipos básicos
    type: $ => choice(
      'Integer',
      'Long',
      'Single',
      'Double',
      'String',
      'Boolean',
      'Variant',
      'Object',
      'Date'
    ),

    // Chamada de função
    function_call: $ => prec.left(seq(
      field('name', $.qualified_identifier),
      '(',
      optional($.argument_list),
      ')'
    )),

    // Lista de argumentos
    argument_list: $ => seq(
      '(',
      commaSep(choice($.identifier, $.string, $.boolean, $.number)),
      ')'
    ),

    // Declaração de chamada (sem parênteses)
    call_statement: $ => prec(3, seq(
      field('name', $.identifier),
      field('arguments', $.argument_list_no_parens),
      optional(';')
    )),

    // Lista de argumentos (sem parênteses)
    argument_list_no_parens: $ => commaSep(choice($.identifier, $.string, $.boolean, $.number)),

    // Expressão
    _expression: $ => choice(
      $.literal,
      prec(1, $.identifier),
      prec(2, $.concatenation), // Definindo precedência mais alta para concatenação
      prec(3, $.function_call),
      prec(3, $.call_statement)
    ),

    // Concatenação de strings
    concatenation: $ => prec.left(seq(
      $._expression,
      '&',
      $._expression
    )),

    // Valores literais
    literal: $ => choice(
      $.string,
      $.number,
      $.boolean
    ),

    // String literal
    string: $ => /"[^"]*"/,

    // Número literal (incluindo negativos)
    number: $ => /-?\d+(\.\d+)?/,

    // Booleano literal
    boolean: $ => choice('True', 'False'),

    // Comentários
    comment: $ => token(choice(
      seq("'", /.*/),
      seq('Rem', /[^\n]*/)
    )),

    // Atribuição de valor a uma variável
    assignment: $ => seq(
      field('variable', $.identifier),
      '=',
      field('value', $._expression)
    )
  }
});

// Função utilitária para separar por vírgula
function commaSep(rule) {
  return seq(rule, repeat(seq(',', rule)));
}