#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 141
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 87
#define ALIAS_COUNT 0
#define TOKEN_COUNT 47
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 7
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 12

enum ts_symbol_identifiers {
  anon_sym_VERSION = 1,
  anon_sym_CLASS = 2,
  anon_sym_Attribute = 3,
  anon_sym_EQ = 4,
  anon_sym_BEGIN = 5,
  anon_sym_END = 6,
  anon_sym_Implements = 7,
  anon_sym_Option = 8,
  anon_sym_Explicit = 9,
  anon_sym_Base = 10,
  anon_sym_Compare = 11,
  anon_sym_Public = 12,
  anon_sym_Private = 13,
  anon_sym_Dim = 14,
  anon_sym_Static = 15,
  anon_sym_Global = 16,
  anon_sym_Const = 17,
  anon_sym_As = 18,
  anon_sym_Sub = 19,
  anon_sym_Function = 20,
  anon_sym_Property = 21,
  anon_sym_Get = 22,
  anon_sym_Let = 23,
  anon_sym_Set = 24,
  anon_sym_End = 25,
  anon_sym_LPAREN = 26,
  anon_sym_COMMA = 27,
  anon_sym_RPAREN = 28,
  sym_identifier = 29,
  anon_sym_DOT = 30,
  anon_sym_Integer = 31,
  anon_sym_Long = 32,
  anon_sym_Single = 33,
  anon_sym_Double = 34,
  anon_sym_String = 35,
  anon_sym_Boolean = 36,
  anon_sym_Variant = 37,
  anon_sym_Object = 38,
  anon_sym_Date = 39,
  anon_sym_SEMI = 40,
  anon_sym_AMP = 41,
  sym_string = 42,
  sym_number = 43,
  anon_sym_True = 44,
  anon_sym_False = 45,
  sym_comment = 46,
  sym_source_file = 47,
  sym_header = 48,
  sym_version_statement = 49,
  sym_attribute_statement = 50,
  sym_attribute_value = 51,
  sym_begin_block = 52,
  sym_setting_statement = 53,
  sym_implements_statement = 54,
  sym_option_statement = 55,
  sym__definition = 56,
  sym_variable_definition = 57,
  sym_sub_definition = 58,
  sym_function_definition = 59,
  sym_property_definition = 60,
  sym_end_sub = 61,
  sym_end_function = 62,
  sym_end_property = 63,
  sym_block = 64,
  sym__method_body_element = 65,
  sym_variable_declaration = 66,
  sym_formal_parameters = 67,
  sym_parameter = 68,
  sym_qualified_identifier = 69,
  sym_type = 70,
  sym_function_call = 71,
  sym_argument_list = 72,
  sym_call_statement = 73,
  sym_argument_list_no_parens = 74,
  sym__expression = 75,
  sym_concatenation = 76,
  sym_literal = 77,
  sym_boolean = 78,
  sym_assignment = 79,
  aux_sym_source_file_repeat1 = 80,
  aux_sym_header_repeat1 = 81,
  aux_sym_begin_block_repeat1 = 82,
  aux_sym_block_repeat1 = 83,
  aux_sym_formal_parameters_repeat1 = 84,
  aux_sym_qualified_identifier_repeat1 = 85,
  aux_sym_argument_list_repeat1 = 86,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_VERSION] = "VERSION",
  [anon_sym_CLASS] = "CLASS",
  [anon_sym_Attribute] = "Attribute",
  [anon_sym_EQ] = "=",
  [anon_sym_BEGIN] = "BEGIN",
  [anon_sym_END] = "END",
  [anon_sym_Implements] = "Implements",
  [anon_sym_Option] = "Option",
  [anon_sym_Explicit] = "Explicit",
  [anon_sym_Base] = "Base",
  [anon_sym_Compare] = "Compare",
  [anon_sym_Public] = "Public",
  [anon_sym_Private] = "Private",
  [anon_sym_Dim] = "Dim",
  [anon_sym_Static] = "Static",
  [anon_sym_Global] = "Global",
  [anon_sym_Const] = "Const",
  [anon_sym_As] = "As",
  [anon_sym_Sub] = "Sub",
  [anon_sym_Function] = "Function",
  [anon_sym_Property] = "Property",
  [anon_sym_Get] = "Get",
  [anon_sym_Let] = "Let",
  [anon_sym_Set] = "Set",
  [anon_sym_End] = "End",
  [anon_sym_LPAREN] = "(",
  [anon_sym_COMMA] = ",",
  [anon_sym_RPAREN] = ")",
  [sym_identifier] = "identifier",
  [anon_sym_DOT] = ".",
  [anon_sym_Integer] = "Integer",
  [anon_sym_Long] = "Long",
  [anon_sym_Single] = "Single",
  [anon_sym_Double] = "Double",
  [anon_sym_String] = "String",
  [anon_sym_Boolean] = "Boolean",
  [anon_sym_Variant] = "Variant",
  [anon_sym_Object] = "Object",
  [anon_sym_Date] = "Date",
  [anon_sym_SEMI] = ";",
  [anon_sym_AMP] = "&",
  [sym_string] = "string",
  [sym_number] = "number",
  [anon_sym_True] = "True",
  [anon_sym_False] = "False",
  [sym_comment] = "comment",
  [sym_source_file] = "source_file",
  [sym_header] = "header",
  [sym_version_statement] = "version_statement",
  [sym_attribute_statement] = "attribute_statement",
  [sym_attribute_value] = "attribute_value",
  [sym_begin_block] = "begin_block",
  [sym_setting_statement] = "setting_statement",
  [sym_implements_statement] = "implements_statement",
  [sym_option_statement] = "option_statement",
  [sym__definition] = "_definition",
  [sym_variable_definition] = "variable_definition",
  [sym_sub_definition] = "sub_definition",
  [sym_function_definition] = "function_definition",
  [sym_property_definition] = "property_definition",
  [sym_end_sub] = "end_sub",
  [sym_end_function] = "end_function",
  [sym_end_property] = "end_property",
  [sym_block] = "block",
  [sym__method_body_element] = "_method_body_element",
  [sym_variable_declaration] = "variable_declaration",
  [sym_formal_parameters] = "formal_parameters",
  [sym_parameter] = "parameter",
  [sym_qualified_identifier] = "qualified_identifier",
  [sym_type] = "type",
  [sym_function_call] = "function_call",
  [sym_argument_list] = "argument_list",
  [sym_call_statement] = "call_statement",
  [sym_argument_list_no_parens] = "argument_list_no_parens",
  [sym__expression] = "_expression",
  [sym_concatenation] = "concatenation",
  [sym_literal] = "literal",
  [sym_boolean] = "boolean",
  [sym_assignment] = "assignment",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_header_repeat1] = "header_repeat1",
  [aux_sym_begin_block_repeat1] = "begin_block_repeat1",
  [aux_sym_block_repeat1] = "block_repeat1",
  [aux_sym_formal_parameters_repeat1] = "formal_parameters_repeat1",
  [aux_sym_qualified_identifier_repeat1] = "qualified_identifier_repeat1",
  [aux_sym_argument_list_repeat1] = "argument_list_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_VERSION] = anon_sym_VERSION,
  [anon_sym_CLASS] = anon_sym_CLASS,
  [anon_sym_Attribute] = anon_sym_Attribute,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_BEGIN] = anon_sym_BEGIN,
  [anon_sym_END] = anon_sym_END,
  [anon_sym_Implements] = anon_sym_Implements,
  [anon_sym_Option] = anon_sym_Option,
  [anon_sym_Explicit] = anon_sym_Explicit,
  [anon_sym_Base] = anon_sym_Base,
  [anon_sym_Compare] = anon_sym_Compare,
  [anon_sym_Public] = anon_sym_Public,
  [anon_sym_Private] = anon_sym_Private,
  [anon_sym_Dim] = anon_sym_Dim,
  [anon_sym_Static] = anon_sym_Static,
  [anon_sym_Global] = anon_sym_Global,
  [anon_sym_Const] = anon_sym_Const,
  [anon_sym_As] = anon_sym_As,
  [anon_sym_Sub] = anon_sym_Sub,
  [anon_sym_Function] = anon_sym_Function,
  [anon_sym_Property] = anon_sym_Property,
  [anon_sym_Get] = anon_sym_Get,
  [anon_sym_Let] = anon_sym_Let,
  [anon_sym_Set] = anon_sym_Set,
  [anon_sym_End] = anon_sym_End,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym_identifier] = sym_identifier,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_Integer] = anon_sym_Integer,
  [anon_sym_Long] = anon_sym_Long,
  [anon_sym_Single] = anon_sym_Single,
  [anon_sym_Double] = anon_sym_Double,
  [anon_sym_String] = anon_sym_String,
  [anon_sym_Boolean] = anon_sym_Boolean,
  [anon_sym_Variant] = anon_sym_Variant,
  [anon_sym_Object] = anon_sym_Object,
  [anon_sym_Date] = anon_sym_Date,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_AMP] = anon_sym_AMP,
  [sym_string] = sym_string,
  [sym_number] = sym_number,
  [anon_sym_True] = anon_sym_True,
  [anon_sym_False] = anon_sym_False,
  [sym_comment] = sym_comment,
  [sym_source_file] = sym_source_file,
  [sym_header] = sym_header,
  [sym_version_statement] = sym_version_statement,
  [sym_attribute_statement] = sym_attribute_statement,
  [sym_attribute_value] = sym_attribute_value,
  [sym_begin_block] = sym_begin_block,
  [sym_setting_statement] = sym_setting_statement,
  [sym_implements_statement] = sym_implements_statement,
  [sym_option_statement] = sym_option_statement,
  [sym__definition] = sym__definition,
  [sym_variable_definition] = sym_variable_definition,
  [sym_sub_definition] = sym_sub_definition,
  [sym_function_definition] = sym_function_definition,
  [sym_property_definition] = sym_property_definition,
  [sym_end_sub] = sym_end_sub,
  [sym_end_function] = sym_end_function,
  [sym_end_property] = sym_end_property,
  [sym_block] = sym_block,
  [sym__method_body_element] = sym__method_body_element,
  [sym_variable_declaration] = sym_variable_declaration,
  [sym_formal_parameters] = sym_formal_parameters,
  [sym_parameter] = sym_parameter,
  [sym_qualified_identifier] = sym_qualified_identifier,
  [sym_type] = sym_type,
  [sym_function_call] = sym_function_call,
  [sym_argument_list] = sym_argument_list,
  [sym_call_statement] = sym_call_statement,
  [sym_argument_list_no_parens] = sym_argument_list_no_parens,
  [sym__expression] = sym__expression,
  [sym_concatenation] = sym_concatenation,
  [sym_literal] = sym_literal,
  [sym_boolean] = sym_boolean,
  [sym_assignment] = sym_assignment,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_header_repeat1] = aux_sym_header_repeat1,
  [aux_sym_begin_block_repeat1] = aux_sym_begin_block_repeat1,
  [aux_sym_block_repeat1] = aux_sym_block_repeat1,
  [aux_sym_formal_parameters_repeat1] = aux_sym_formal_parameters_repeat1,
  [aux_sym_qualified_identifier_repeat1] = aux_sym_qualified_identifier_repeat1,
  [aux_sym_argument_list_repeat1] = aux_sym_argument_list_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_VERSION] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CLASS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Attribute] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BEGIN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_END] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Implements] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Option] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Explicit] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Base] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Compare] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Public] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Private] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Dim] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Static] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Global] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Const] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_As] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Sub] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Function] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Property] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Get] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Let] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Set] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_End] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Integer] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Long] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Single] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Double] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_String] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Boolean] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Variant] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Object] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Date] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP] = {
    .visible = true,
    .named = false,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_True] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_False] = {
    .visible = true,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_header] = {
    .visible = true,
    .named = true,
  },
  [sym_version_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute_value] = {
    .visible = true,
    .named = true,
  },
  [sym_begin_block] = {
    .visible = true,
    .named = true,
  },
  [sym_setting_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_implements_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_option_statement] = {
    .visible = true,
    .named = true,
  },
  [sym__definition] = {
    .visible = false,
    .named = true,
  },
  [sym_variable_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_sub_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_function_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_property_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_end_sub] = {
    .visible = true,
    .named = true,
  },
  [sym_end_function] = {
    .visible = true,
    .named = true,
  },
  [sym_end_property] = {
    .visible = true,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym__method_body_element] = {
    .visible = false,
    .named = true,
  },
  [sym_variable_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_formal_parameters] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter] = {
    .visible = true,
    .named = true,
  },
  [sym_qualified_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_type] = {
    .visible = true,
    .named = true,
  },
  [sym_function_call] = {
    .visible = true,
    .named = true,
  },
  [sym_argument_list] = {
    .visible = true,
    .named = true,
  },
  [sym_call_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_argument_list_no_parens] = {
    .visible = true,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym_concatenation] = {
    .visible = true,
    .named = true,
  },
  [sym_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean] = {
    .visible = true,
    .named = true,
  },
  [sym_assignment] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_header_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_begin_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_formal_parameters_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_qualified_identifier_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_argument_list_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_arguments = 1,
  field_block = 2,
  field_name = 3,
  field_return_type = 4,
  field_type = 5,
  field_value = 6,
  field_variable = 7,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_arguments] = "arguments",
  [field_block] = "block",
  [field_name] = "name",
  [field_return_type] = "return_type",
  [field_type] = "type",
  [field_value] = "value",
  [field_variable] = "variable",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 2},
  [3] = {.index = 4, .length = 1},
  [4] = {.index = 5, .length = 2},
  [5] = {.index = 7, .length = 2},
  [6] = {.index = 9, .length = 2},
  [7] = {.index = 11, .length = 2},
  [8] = {.index = 13, .length = 2},
  [9] = {.index = 15, .length = 2},
  [10] = {.index = 17, .length = 3},
  [11] = {.index = 20, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 0},
    {field_value, 2},
  [2] =
    {field_name, 1},
    {field_type, 3},
  [4] =
    {field_name, 0},
  [5] =
    {field_arguments, 1},
    {field_name, 0},
  [7] =
    {field_block, 3},
    {field_name, 1},
  [9] =
    {field_block, 4},
    {field_name, 2},
  [11] =
    {field_name, 0},
    {field_type, 2},
  [13] =
    {field_value, 2},
    {field_variable, 0},
  [15] =
    {field_block, 5},
    {field_name, 3},
  [17] =
    {field_block, 5},
    {field_name, 1},
    {field_return_type, 4},
  [20] =
    {field_block, 6},
    {field_name, 2},
    {field_return_type, 5},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 4,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 56,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 18,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 66,
  [75] = 75,
  [76] = 67,
  [77] = 77,
  [78] = 77,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 50,
  [84] = 84,
  [85] = 80,
  [86] = 86,
  [87] = 87,
  [88] = 68,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 18,
  [94] = 94,
  [95] = 79,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(148);
      ADVANCE_MAP(
        '"', 3,
        '&', 231,
        '\'', 239,
        '(', 181,
        ')', 183,
        ',', 182,
        '-', 146,
        '.', 220,
        ';', 230,
        '=', 152,
        'A', 119,
        'B', 11,
        'C', 18,
        'D', 28,
        'E', 19,
        'F', 27,
        'G', 57,
        'I', 94,
        'L', 61,
        'O', 35,
        'P', 112,
        'R', 56,
        'S', 63,
        'T', 114,
        'V', 12,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(233);
      END_STATE();
    case 1:
      ADVANCE_MAP(
        '"', 3,
        '&', 231,
        '\'', 239,
        '(', 181,
        '-', 146,
        '.', 220,
        '=', 152,
        'D', 195,
        'E', 200,
        'F', 187,
        'R', 193,
        'T', 206,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(233);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '-') ADVANCE(146);
      if (lookahead == 'F') ADVANCE(187);
      if (lookahead == 'T') ADVANCE(206);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(233);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(232);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 4:
      ADVANCE_MAP(
        '&', 231,
        '\'', 239,
        ')', 183,
        ',', 182,
        ';', 230,
        'D', 195,
        'E', 200,
        'R', 193,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 5:
      if (lookahead == '\'') ADVANCE(239);
      if (lookahead == 'A') ADVANCE(209);
      if (lookahead == 'D') ADVANCE(195);
      if (lookahead == 'R') ADVANCE(193);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 6:
      if (lookahead == '\'') ADVANCE(239);
      if (lookahead == 'D') ADVANCE(195);
      if (lookahead == 'R') ADVANCE(193);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(6);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 7:
      if (lookahead == '\'') ADVANCE(239);
      if (lookahead == 'E') ADVANCE(186);
      if (lookahead == 'R') ADVANCE(193);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(7);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 8:
      if (lookahead == ')') ADVANCE(183);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(8);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 9:
      if (lookahead == 'A') ADVANCE(26);
      END_STATE();
    case 10:
      if (lookahead == 'D') ADVANCE(154);
      END_STATE();
    case 11:
      if (lookahead == 'E') ADVANCE(15);
      if (lookahead == 'a') ADVANCE(121);
      if (lookahead == 'o') ADVANCE(104);
      END_STATE();
    case 12:
      if (lookahead == 'E') ADVANCE(23);
      if (lookahead == 'a') ADVANCE(115);
      END_STATE();
    case 13:
      if (lookahead == 'E') ADVANCE(186);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(13);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 14:
      if (lookahead == 'F') ADVANCE(214);
      if (lookahead == 'P') ADVANCE(207);
      if (lookahead == 'S') ADVANCE(213);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(14);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 15:
      if (lookahead == 'G') ADVANCE(16);
      END_STATE();
    case 16:
      if (lookahead == 'I') ADVANCE(20);
      END_STATE();
    case 17:
      if (lookahead == 'I') ADVANCE(22);
      END_STATE();
    case 18:
      if (lookahead == 'L') ADVANCE(9);
      if (lookahead == 'o') ADVANCE(92);
      END_STATE();
    case 19:
      if (lookahead == 'N') ADVANCE(10);
      if (lookahead == 'n') ADVANCE(46);
      if (lookahead == 'x') ADVANCE(109);
      END_STATE();
    case 20:
      if (lookahead == 'N') ADVANCE(153);
      END_STATE();
    case 21:
      if (lookahead == 'N') ADVANCE(149);
      END_STATE();
    case 22:
      if (lookahead == 'O') ADVANCE(21);
      END_STATE();
    case 23:
      if (lookahead == 'R') ADVANCE(25);
      END_STATE();
    case 24:
      if (lookahead == 'S') ADVANCE(150);
      END_STATE();
    case 25:
      if (lookahead == 'S') ADVANCE(17);
      END_STATE();
    case 26:
      if (lookahead == 'S') ADVANCE(24);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(89);
      if (lookahead == 'u') ADVANCE(95);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(133);
      if (lookahead == 'i') ADVANCE(91);
      if (lookahead == 'o') ADVANCE(142);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(118);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(82);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(102);
      END_STATE();
    case 32:
      if (lookahead == 'a') ADVANCE(136);
      if (lookahead == 'r') ADVANCE(75);
      END_STATE();
    case 33:
      if (lookahead == 'a') ADVANCE(98);
      END_STATE();
    case 34:
      if (lookahead == 'a') ADVANCE(137);
      END_STATE();
    case 35:
      if (lookahead == 'b') ADVANCE(81);
      if (lookahead == 'p') ADVANCE(126);
      END_STATE();
    case 36:
      if (lookahead == 'b') ADVANCE(170);
      END_STATE();
    case 37:
      if (lookahead == 'b') ADVANCE(30);
      END_STATE();
    case 38:
      if (lookahead == 'b') ADVANCE(143);
      END_STATE();
    case 39:
      if (lookahead == 'b') ADVANCE(86);
      END_STATE();
    case 40:
      if (lookahead == 'b') ADVANCE(84);
      END_STATE();
    case 41:
      if (lookahead == 'c') ADVANCE(161);
      END_STATE();
    case 42:
      if (lookahead == 'c') ADVANCE(165);
      END_STATE();
    case 43:
      if (lookahead == 'c') ADVANCE(79);
      END_STATE();
    case 44:
      if (lookahead == 'c') ADVANCE(129);
      END_STATE();
    case 45:
      if (lookahead == 'c') ADVANCE(140);
      END_STATE();
    case 46:
      if (lookahead == 'd') ADVANCE(179);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(159);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(229);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(235);
      END_STATE();
    case 50:
      if (lookahead == 'e') ADVANCE(237);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(224);
      END_STATE();
    case 52:
      if (lookahead == 'e') ADVANCE(223);
      END_STATE();
    case 53:
      if (lookahead == 'e') ADVANCE(160);
      END_STATE();
    case 54:
      if (lookahead == 'e') ADVANCE(162);
      END_STATE();
    case 55:
      if (lookahead == 'e') ADVANCE(151);
      END_STATE();
    case 56:
      if (lookahead == 'e') ADVANCE(90);
      END_STATE();
    case 57:
      if (lookahead == 'e') ADVANCE(124);
      if (lookahead == 'l') ADVANCE(105);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(93);
      END_STATE();
    case 59:
      if (lookahead == 'e') ADVANCE(69);
      END_STATE();
    case 60:
      if (lookahead == 'e') ADVANCE(117);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(125);
      if (lookahead == 'o') ADVANCE(96);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(113);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(127);
      if (lookahead == 'i') ADVANCE(100);
      if (lookahead == 't') ADVANCE(32);
      if (lookahead == 'u') ADVANCE(36);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(44);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(33);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(103);
      END_STATE();
    case 67:
      if (lookahead == 'g') ADVANCE(222);
      END_STATE();
    case 68:
      if (lookahead == 'g') ADVANCE(225);
      END_STATE();
    case 69:
      if (lookahead == 'g') ADVANCE(62);
      END_STATE();
    case 70:
      if (lookahead == 'g') ADVANCE(87);
      END_STATE();
    case 71:
      if (lookahead == 'i') ADVANCE(144);
      if (lookahead == 'o') ADVANCE(111);
      END_STATE();
    case 72:
      if (lookahead == 'i') ADVANCE(43);
      END_STATE();
    case 73:
      if (lookahead == 'i') ADVANCE(106);
      END_STATE();
    case 74:
      if (lookahead == 'i') ADVANCE(41);
      END_STATE();
    case 75:
      if (lookahead == 'i') ADVANCE(101);
      END_STATE();
    case 76:
      if (lookahead == 'i') ADVANCE(38);
      END_STATE();
    case 77:
      if (lookahead == 'i') ADVANCE(42);
      END_STATE();
    case 78:
      if (lookahead == 'i') ADVANCE(31);
      END_STATE();
    case 79:
      if (lookahead == 'i') ADVANCE(132);
      END_STATE();
    case 80:
      if (lookahead == 'i') ADVANCE(107);
      END_STATE();
    case 81:
      if (lookahead == 'j') ADVANCE(64);
      END_STATE();
    case 82:
      if (lookahead == 'l') ADVANCE(166);
      END_STATE();
    case 83:
      if (lookahead == 'l') ADVANCE(72);
      END_STATE();
    case 84:
      if (lookahead == 'l') ADVANCE(74);
      END_STATE();
    case 85:
      if (lookahead == 'l') ADVANCE(65);
      END_STATE();
    case 86:
      if (lookahead == 'l') ADVANCE(51);
      END_STATE();
    case 87:
      if (lookahead == 'l') ADVANCE(52);
      END_STATE();
    case 88:
      if (lookahead == 'l') ADVANCE(58);
      END_STATE();
    case 89:
      if (lookahead == 'l') ADVANCE(122);
      END_STATE();
    case 90:
      if (lookahead == 'm') ADVANCE(239);
      END_STATE();
    case 91:
      if (lookahead == 'm') ADVANCE(163);
      END_STATE();
    case 92:
      if (lookahead == 'm') ADVANCE(108);
      if (lookahead == 'n') ADVANCE(123);
      END_STATE();
    case 93:
      if (lookahead == 'm') ADVANCE(66);
      END_STATE();
    case 94:
      if (lookahead == 'm') ADVANCE(110);
      if (lookahead == 'n') ADVANCE(135);
      END_STATE();
    case 95:
      if (lookahead == 'n') ADVANCE(45);
      END_STATE();
    case 96:
      if (lookahead == 'n') ADVANCE(67);
      END_STATE();
    case 97:
      if (lookahead == 'n') ADVANCE(157);
      END_STATE();
    case 98:
      if (lookahead == 'n') ADVANCE(226);
      END_STATE();
    case 99:
      if (lookahead == 'n') ADVANCE(172);
      END_STATE();
    case 100:
      if (lookahead == 'n') ADVANCE(70);
      END_STATE();
    case 101:
      if (lookahead == 'n') ADVANCE(68);
      END_STATE();
    case 102:
      if (lookahead == 'n') ADVANCE(131);
      END_STATE();
    case 103:
      if (lookahead == 'n') ADVANCE(134);
      END_STATE();
    case 104:
      if (lookahead == 'o') ADVANCE(85);
      END_STATE();
    case 105:
      if (lookahead == 'o') ADVANCE(37);
      END_STATE();
    case 106:
      if (lookahead == 'o') ADVANCE(97);
      END_STATE();
    case 107:
      if (lookahead == 'o') ADVANCE(99);
      END_STATE();
    case 108:
      if (lookahead == 'p') ADVANCE(29);
      END_STATE();
    case 109:
      if (lookahead == 'p') ADVANCE(83);
      END_STATE();
    case 110:
      if (lookahead == 'p') ADVANCE(88);
      END_STATE();
    case 111:
      if (lookahead == 'p') ADVANCE(60);
      END_STATE();
    case 112:
      if (lookahead == 'r') ADVANCE(71);
      if (lookahead == 'u') ADVANCE(40);
      END_STATE();
    case 113:
      if (lookahead == 'r') ADVANCE(221);
      END_STATE();
    case 114:
      if (lookahead == 'r') ADVANCE(141);
      END_STATE();
    case 115:
      if (lookahead == 'r') ADVANCE(78);
      END_STATE();
    case 116:
      if (lookahead == 'r') ADVANCE(76);
      END_STATE();
    case 117:
      if (lookahead == 'r') ADVANCE(130);
      END_STATE();
    case 118:
      if (lookahead == 'r') ADVANCE(53);
      END_STATE();
    case 119:
      if (lookahead == 's') ADVANCE(168);
      if (lookahead == 't') ADVANCE(139);
      END_STATE();
    case 120:
      if (lookahead == 's') ADVANCE(156);
      END_STATE();
    case 121:
      if (lookahead == 's') ADVANCE(47);
      END_STATE();
    case 122:
      if (lookahead == 's') ADVANCE(50);
      END_STATE();
    case 123:
      if (lookahead == 's') ADVANCE(128);
      END_STATE();
    case 124:
      if (lookahead == 't') ADVANCE(176);
      END_STATE();
    case 125:
      if (lookahead == 't') ADVANCE(177);
      END_STATE();
    case 126:
      if (lookahead == 't') ADVANCE(73);
      END_STATE();
    case 127:
      if (lookahead == 't') ADVANCE(178);
      END_STATE();
    case 128:
      if (lookahead == 't') ADVANCE(167);
      END_STATE();
    case 129:
      if (lookahead == 't') ADVANCE(228);
      END_STATE();
    case 130:
      if (lookahead == 't') ADVANCE(145);
      END_STATE();
    case 131:
      if (lookahead == 't') ADVANCE(227);
      END_STATE();
    case 132:
      if (lookahead == 't') ADVANCE(158);
      END_STATE();
    case 133:
      if (lookahead == 't') ADVANCE(48);
      END_STATE();
    case 134:
      if (lookahead == 't') ADVANCE(120);
      END_STATE();
    case 135:
      if (lookahead == 't') ADVANCE(59);
      END_STATE();
    case 136:
      if (lookahead == 't') ADVANCE(77);
      END_STATE();
    case 137:
      if (lookahead == 't') ADVANCE(54);
      END_STATE();
    case 138:
      if (lookahead == 't') ADVANCE(55);
      END_STATE();
    case 139:
      if (lookahead == 't') ADVANCE(116);
      END_STATE();
    case 140:
      if (lookahead == 't') ADVANCE(80);
      END_STATE();
    case 141:
      if (lookahead == 'u') ADVANCE(49);
      END_STATE();
    case 142:
      if (lookahead == 'u') ADVANCE(39);
      END_STATE();
    case 143:
      if (lookahead == 'u') ADVANCE(138);
      END_STATE();
    case 144:
      if (lookahead == 'v') ADVANCE(34);
      END_STATE();
    case 145:
      if (lookahead == 'y') ADVANCE(174);
      END_STATE();
    case 146:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(233);
      END_STATE();
    case 147:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(234);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_VERSION);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_CLASS);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_Attribute);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_BEGIN);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_END);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_END);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          lookahead == '@') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_Implements);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_Option);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_Explicit);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_Base);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_Compare);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_Public);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_Private);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_Dim);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_Dim);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          lookahead == '@') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_Static);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_Global);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_Const);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_As);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_As);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          lookahead == '@') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_Sub);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_Sub);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          lookahead == '@') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_Function);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_Function);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          lookahead == '@') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_Property);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_Property);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          lookahead == '@') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_Get);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_Let);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_Set);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_End);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_End);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          lookahead == '@') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_identifier);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D') ADVANCE(155);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          lookahead == '@') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(185);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          lookahead == '@') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(197);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          lookahead == '@') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(171);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          lookahead == '@') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(212);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          lookahead == '@') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(180);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          lookahead == '@') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(236);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          lookahead == '@') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(238);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          lookahead == '@') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(199);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          lookahead == '@') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(208);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          lookahead == '@') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(198);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          lookahead == '@') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(204);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          lookahead == '@') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(210);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          lookahead == '@') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(164);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          lookahead == '@') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(218);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          lookahead == '@') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(190);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          lookahead == '@') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(189);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          lookahead == '@') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(173);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          lookahead == '@') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(205);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          lookahead == '@') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(202);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          lookahead == '@') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(194);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          lookahead == '@') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(215);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          lookahead == '@') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(203);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          lookahead == '@') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(211);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          lookahead == '@') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(169);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          lookahead == '@') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(192);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          lookahead == '@') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(216);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          lookahead == '@') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(196);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          lookahead == '@') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(188);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          lookahead == '@') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(201);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          lookahead == '@') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(191);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          lookahead == '@') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(175);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          lookahead == '@') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          lookahead == '@') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          lookahead == '@') ADVANCE(219);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(239);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(239);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_Integer);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_Long);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_Single);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_Double);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_String);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_Boolean);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_Variant);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_Object);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_Date);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(233);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(234);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_True);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_True);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          lookahead == '@') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_False);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_False);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          lookahead == '@') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(239);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 5},
  [20] = {.lex_state = 2},
  [21] = {.lex_state = 2},
  [22] = {.lex_state = 5},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 6},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 6},
  [28] = {.lex_state = 4},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 4},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 6},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 6},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 6},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 6},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 4},
  [50] = {.lex_state = 4},
  [51] = {.lex_state = 4},
  [52] = {.lex_state = 4},
  [53] = {.lex_state = 4},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 4},
  [56] = {.lex_state = 2},
  [57] = {.lex_state = 2},
  [58] = {.lex_state = 2},
  [59] = {.lex_state = 4},
  [60] = {.lex_state = 4},
  [61] = {.lex_state = 4},
  [62] = {.lex_state = 4},
  [63] = {.lex_state = 4},
  [64] = {.lex_state = 4},
  [65] = {.lex_state = 4},
  [66] = {.lex_state = 5},
  [67] = {.lex_state = 5},
  [68] = {.lex_state = 5},
  [69] = {.lex_state = 13},
  [70] = {.lex_state = 14},
  [71] = {.lex_state = 4},
  [72] = {.lex_state = 13},
  [73] = {.lex_state = 13},
  [74] = {.lex_state = 6},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 6},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 8},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 7},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 8},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 6},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 6},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 8},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 13},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 8},
  [116] = {.lex_state = 8},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 8},
  [119] = {.lex_state = 8},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 8},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 8},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 8},
  [131] = {.lex_state = 8},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 8},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 8},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 8},
  [140] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_VERSION] = ACTIONS(1),
    [anon_sym_CLASS] = ACTIONS(1),
    [anon_sym_Attribute] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_BEGIN] = ACTIONS(1),
    [anon_sym_END] = ACTIONS(1),
    [anon_sym_Implements] = ACTIONS(1),
    [anon_sym_Option] = ACTIONS(1),
    [anon_sym_Explicit] = ACTIONS(1),
    [anon_sym_Base] = ACTIONS(1),
    [anon_sym_Compare] = ACTIONS(1),
    [anon_sym_Public] = ACTIONS(1),
    [anon_sym_Private] = ACTIONS(1),
    [anon_sym_Dim] = ACTIONS(1),
    [anon_sym_Static] = ACTIONS(1),
    [anon_sym_Global] = ACTIONS(1),
    [anon_sym_Const] = ACTIONS(1),
    [anon_sym_As] = ACTIONS(1),
    [anon_sym_Sub] = ACTIONS(1),
    [anon_sym_Function] = ACTIONS(1),
    [anon_sym_Property] = ACTIONS(1),
    [anon_sym_Get] = ACTIONS(1),
    [anon_sym_Let] = ACTIONS(1),
    [anon_sym_Set] = ACTIONS(1),
    [anon_sym_End] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_Integer] = ACTIONS(1),
    [anon_sym_Long] = ACTIONS(1),
    [anon_sym_Single] = ACTIONS(1),
    [anon_sym_Double] = ACTIONS(1),
    [anon_sym_String] = ACTIONS(1),
    [anon_sym_Boolean] = ACTIONS(1),
    [anon_sym_Variant] = ACTIONS(1),
    [anon_sym_Object] = ACTIONS(1),
    [anon_sym_Date] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [anon_sym_True] = ACTIONS(1),
    [anon_sym_False] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(123),
    [sym_header] = STATE(6),
    [sym_version_statement] = STATE(2),
    [sym_attribute_statement] = STATE(2),
    [sym_begin_block] = STATE(2),
    [sym_implements_statement] = STATE(2),
    [sym_option_statement] = STATE(2),
    [sym__definition] = STATE(5),
    [sym_variable_definition] = STATE(5),
    [sym_sub_definition] = STATE(5),
    [sym_function_definition] = STATE(5),
    [sym_property_definition] = STATE(5),
    [aux_sym_source_file_repeat1] = STATE(5),
    [aux_sym_header_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_VERSION] = ACTIONS(5),
    [anon_sym_Attribute] = ACTIONS(7),
    [anon_sym_BEGIN] = ACTIONS(9),
    [anon_sym_Implements] = ACTIONS(11),
    [anon_sym_Option] = ACTIONS(13),
    [anon_sym_Public] = ACTIONS(15),
    [anon_sym_Private] = ACTIONS(15),
    [anon_sym_Dim] = ACTIONS(17),
    [anon_sym_Static] = ACTIONS(17),
    [anon_sym_Global] = ACTIONS(17),
    [anon_sym_Const] = ACTIONS(17),
    [anon_sym_Sub] = ACTIONS(19),
    [anon_sym_Function] = ACTIONS(21),
    [anon_sym_Property] = ACTIONS(23),
    [sym_comment] = ACTIONS(25),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(5), 1,
      anon_sym_VERSION,
    ACTIONS(7), 1,
      anon_sym_Attribute,
    ACTIONS(9), 1,
      anon_sym_BEGIN,
    ACTIONS(11), 1,
      anon_sym_Implements,
    ACTIONS(13), 1,
      anon_sym_Option,
    STATE(3), 6,
      sym_version_statement,
      sym_attribute_statement,
      sym_begin_block,
      sym_implements_statement,
      sym_option_statement,
      aux_sym_header_repeat1,
    ACTIONS(27), 11,
      ts_builtin_sym_end,
      anon_sym_Public,
      anon_sym_Private,
      anon_sym_Dim,
      anon_sym_Static,
      anon_sym_Global,
      anon_sym_Const,
      anon_sym_Sub,
      anon_sym_Function,
      anon_sym_Property,
      sym_comment,
  [37] = 7,
    ACTIONS(31), 1,
      anon_sym_VERSION,
    ACTIONS(34), 1,
      anon_sym_Attribute,
    ACTIONS(37), 1,
      anon_sym_BEGIN,
    ACTIONS(40), 1,
      anon_sym_Implements,
    ACTIONS(43), 1,
      anon_sym_Option,
    STATE(3), 6,
      sym_version_statement,
      sym_attribute_statement,
      sym_begin_block,
      sym_implements_statement,
      sym_option_statement,
      aux_sym_header_repeat1,
    ACTIONS(29), 11,
      ts_builtin_sym_end,
      anon_sym_Public,
      anon_sym_Private,
      anon_sym_Dim,
      anon_sym_Static,
      anon_sym_Global,
      anon_sym_Const,
      anon_sym_Sub,
      anon_sym_Function,
      anon_sym_Property,
      sym_comment,
  [74] = 1,
    ACTIONS(46), 18,
      ts_builtin_sym_end,
      anon_sym_VERSION,
      anon_sym_Attribute,
      anon_sym_BEGIN,
      anon_sym_Implements,
      anon_sym_Option,
      anon_sym_Public,
      anon_sym_Private,
      anon_sym_Dim,
      anon_sym_Static,
      anon_sym_Global,
      anon_sym_Const,
      anon_sym_Sub,
      anon_sym_Function,
      anon_sym_Property,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_comment,
  [95] = 8,
    ACTIONS(19), 1,
      anon_sym_Sub,
    ACTIONS(21), 1,
      anon_sym_Function,
    ACTIONS(23), 1,
      anon_sym_Property,
    ACTIONS(25), 1,
      sym_comment,
    ACTIONS(48), 1,
      ts_builtin_sym_end,
    ACTIONS(15), 2,
      anon_sym_Public,
      anon_sym_Private,
    ACTIONS(17), 4,
      anon_sym_Dim,
      anon_sym_Static,
      anon_sym_Global,
      anon_sym_Const,
    STATE(7), 6,
      sym__definition,
      sym_variable_definition,
      sym_sub_definition,
      sym_function_definition,
      sym_property_definition,
      aux_sym_source_file_repeat1,
  [129] = 8,
    ACTIONS(19), 1,
      anon_sym_Sub,
    ACTIONS(21), 1,
      anon_sym_Function,
    ACTIONS(23), 1,
      anon_sym_Property,
    ACTIONS(25), 1,
      sym_comment,
    ACTIONS(48), 1,
      ts_builtin_sym_end,
    ACTIONS(15), 2,
      anon_sym_Public,
      anon_sym_Private,
    ACTIONS(17), 4,
      anon_sym_Dim,
      anon_sym_Static,
      anon_sym_Global,
      anon_sym_Const,
    STATE(8), 6,
      sym__definition,
      sym_variable_definition,
      sym_sub_definition,
      sym_function_definition,
      sym_property_definition,
      aux_sym_source_file_repeat1,
  [163] = 8,
    ACTIONS(50), 1,
      ts_builtin_sym_end,
    ACTIONS(58), 1,
      anon_sym_Sub,
    ACTIONS(61), 1,
      anon_sym_Function,
    ACTIONS(64), 1,
      anon_sym_Property,
    ACTIONS(67), 1,
      sym_comment,
    ACTIONS(52), 2,
      anon_sym_Public,
      anon_sym_Private,
    ACTIONS(55), 4,
      anon_sym_Dim,
      anon_sym_Static,
      anon_sym_Global,
      anon_sym_Const,
    STATE(7), 6,
      sym__definition,
      sym_variable_definition,
      sym_sub_definition,
      sym_function_definition,
      sym_property_definition,
      aux_sym_source_file_repeat1,
  [197] = 8,
    ACTIONS(19), 1,
      anon_sym_Sub,
    ACTIONS(21), 1,
      anon_sym_Function,
    ACTIONS(23), 1,
      anon_sym_Property,
    ACTIONS(25), 1,
      sym_comment,
    ACTIONS(70), 1,
      ts_builtin_sym_end,
    ACTIONS(15), 2,
      anon_sym_Public,
      anon_sym_Private,
    ACTIONS(17), 4,
      anon_sym_Dim,
      anon_sym_Static,
      anon_sym_Global,
      anon_sym_Const,
    STATE(7), 6,
      sym__definition,
      sym_variable_definition,
      sym_sub_definition,
      sym_function_definition,
      sym_property_definition,
      aux_sym_source_file_repeat1,
  [231] = 1,
    ACTIONS(72), 16,
      ts_builtin_sym_end,
      anon_sym_VERSION,
      anon_sym_Attribute,
      anon_sym_BEGIN,
      anon_sym_Implements,
      anon_sym_Option,
      anon_sym_Public,
      anon_sym_Private,
      anon_sym_Dim,
      anon_sym_Static,
      anon_sym_Global,
      anon_sym_Const,
      anon_sym_Sub,
      anon_sym_Function,
      anon_sym_Property,
      sym_comment,
  [250] = 1,
    ACTIONS(74), 16,
      ts_builtin_sym_end,
      anon_sym_VERSION,
      anon_sym_Attribute,
      anon_sym_BEGIN,
      anon_sym_Implements,
      anon_sym_Option,
      anon_sym_Public,
      anon_sym_Private,
      anon_sym_Dim,
      anon_sym_Static,
      anon_sym_Global,
      anon_sym_Const,
      anon_sym_Sub,
      anon_sym_Function,
      anon_sym_Property,
      sym_comment,
  [269] = 1,
    ACTIONS(76), 16,
      ts_builtin_sym_end,
      anon_sym_VERSION,
      anon_sym_Attribute,
      anon_sym_BEGIN,
      anon_sym_Implements,
      anon_sym_Option,
      anon_sym_Public,
      anon_sym_Private,
      anon_sym_Dim,
      anon_sym_Static,
      anon_sym_Global,
      anon_sym_Const,
      anon_sym_Sub,
      anon_sym_Function,
      anon_sym_Property,
      sym_comment,
  [288] = 1,
    ACTIONS(78), 16,
      ts_builtin_sym_end,
      anon_sym_VERSION,
      anon_sym_Attribute,
      anon_sym_BEGIN,
      anon_sym_Implements,
      anon_sym_Option,
      anon_sym_Public,
      anon_sym_Private,
      anon_sym_Dim,
      anon_sym_Static,
      anon_sym_Global,
      anon_sym_Const,
      anon_sym_Sub,
      anon_sym_Function,
      anon_sym_Property,
      sym_comment,
  [307] = 1,
    ACTIONS(80), 16,
      ts_builtin_sym_end,
      anon_sym_VERSION,
      anon_sym_Attribute,
      anon_sym_BEGIN,
      anon_sym_Implements,
      anon_sym_Option,
      anon_sym_Public,
      anon_sym_Private,
      anon_sym_Dim,
      anon_sym_Static,
      anon_sym_Global,
      anon_sym_Const,
      anon_sym_Sub,
      anon_sym_Function,
      anon_sym_Property,
      sym_comment,
  [326] = 1,
    ACTIONS(82), 16,
      ts_builtin_sym_end,
      anon_sym_VERSION,
      anon_sym_Attribute,
      anon_sym_BEGIN,
      anon_sym_Implements,
      anon_sym_Option,
      anon_sym_Public,
      anon_sym_Private,
      anon_sym_Dim,
      anon_sym_Static,
      anon_sym_Global,
      anon_sym_Const,
      anon_sym_Sub,
      anon_sym_Function,
      anon_sym_Property,
      sym_comment,
  [345] = 1,
    ACTIONS(84), 16,
      ts_builtin_sym_end,
      anon_sym_VERSION,
      anon_sym_Attribute,
      anon_sym_BEGIN,
      anon_sym_Implements,
      anon_sym_Option,
      anon_sym_Public,
      anon_sym_Private,
      anon_sym_Dim,
      anon_sym_Static,
      anon_sym_Global,
      anon_sym_Const,
      anon_sym_Sub,
      anon_sym_Function,
      anon_sym_Property,
      sym_comment,
  [364] = 10,
    ACTIONS(86), 1,
      anon_sym_EQ,
    ACTIONS(90), 1,
      anon_sym_LPAREN,
    ACTIONS(92), 1,
      sym_identifier,
    ACTIONS(94), 1,
      anon_sym_DOT,
    STATE(51), 1,
      sym_boolean,
    STATE(55), 1,
      sym_argument_list_no_parens,
    STATE(81), 1,
      aux_sym_qualified_identifier_repeat1,
    ACTIONS(96), 2,
      sym_string,
      sym_number,
    ACTIONS(98), 2,
      anon_sym_True,
      anon_sym_False,
    ACTIONS(88), 3,
      anon_sym_Dim,
      anon_sym_End,
      sym_comment,
  [399] = 10,
    ACTIONS(90), 1,
      anon_sym_LPAREN,
    ACTIONS(92), 1,
      sym_identifier,
    ACTIONS(94), 1,
      anon_sym_DOT,
    ACTIONS(102), 1,
      anon_sym_AMP,
    STATE(51), 1,
      sym_boolean,
    STATE(55), 1,
      sym_argument_list_no_parens,
    STATE(81), 1,
      aux_sym_qualified_identifier_repeat1,
    ACTIONS(96), 2,
      sym_string,
      sym_number,
    ACTIONS(98), 2,
      anon_sym_True,
      anon_sym_False,
    ACTIONS(100), 3,
      anon_sym_Dim,
      anon_sym_End,
      sym_comment,
  [434] = 1,
    ACTIONS(104), 13,
      ts_builtin_sym_end,
      anon_sym_Public,
      anon_sym_Private,
      anon_sym_Dim,
      anon_sym_Static,
      anon_sym_Global,
      anon_sym_Const,
      anon_sym_Sub,
      anon_sym_Function,
      anon_sym_Property,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_comment,
  [450] = 7,
    ACTIONS(106), 1,
      anon_sym_Dim,
    ACTIONS(108), 1,
      anon_sym_As,
    ACTIONS(110), 1,
      sym_identifier,
    ACTIONS(112), 1,
      sym_comment,
    STATE(113), 1,
      sym_block,
    STATE(122), 1,
      sym_qualified_identifier,
    STATE(30), 6,
      sym__method_body_element,
      sym_variable_declaration,
      sym_function_call,
      sym_call_statement,
      sym_assignment,
      aux_sym_block_repeat1,
  [477] = 6,
    ACTIONS(114), 1,
      sym_identifier,
    STATE(64), 1,
      sym_boolean,
    STATE(122), 1,
      sym_qualified_identifier,
    ACTIONS(98), 2,
      anon_sym_True,
      anon_sym_False,
    ACTIONS(116), 2,
      sym_string,
      sym_number,
    STATE(59), 5,
      sym_function_call,
      sym_call_statement,
      sym__expression,
      sym_concatenation,
      sym_literal,
  [502] = 6,
    ACTIONS(114), 1,
      sym_identifier,
    STATE(64), 1,
      sym_boolean,
    STATE(122), 1,
      sym_qualified_identifier,
    ACTIONS(98), 2,
      anon_sym_True,
      anon_sym_False,
    ACTIONS(116), 2,
      sym_string,
      sym_number,
    STATE(63), 5,
      sym_function_call,
      sym_call_statement,
      sym__expression,
      sym_concatenation,
      sym_literal,
  [527] = 7,
    ACTIONS(106), 1,
      anon_sym_Dim,
    ACTIONS(110), 1,
      sym_identifier,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(118), 1,
      anon_sym_As,
    STATE(102), 1,
      sym_block,
    STATE(122), 1,
      sym_qualified_identifier,
    STATE(30), 6,
      sym__method_body_element,
      sym_variable_declaration,
      sym_function_call,
      sym_call_statement,
      sym_assignment,
      aux_sym_block_repeat1,
  [554] = 1,
    ACTIONS(120), 11,
      ts_builtin_sym_end,
      anon_sym_Public,
      anon_sym_Private,
      anon_sym_Dim,
      anon_sym_Static,
      anon_sym_Global,
      anon_sym_Const,
      anon_sym_Sub,
      anon_sym_Function,
      anon_sym_Property,
      sym_comment,
  [568] = 1,
    ACTIONS(122), 11,
      ts_builtin_sym_end,
      anon_sym_Public,
      anon_sym_Private,
      anon_sym_Dim,
      anon_sym_Static,
      anon_sym_Global,
      anon_sym_Const,
      anon_sym_Sub,
      anon_sym_Function,
      anon_sym_Property,
      sym_comment,
  [582] = 6,
    ACTIONS(106), 1,
      anon_sym_Dim,
    ACTIONS(110), 1,
      sym_identifier,
    ACTIONS(112), 1,
      sym_comment,
    STATE(112), 1,
      sym_block,
    STATE(122), 1,
      sym_qualified_identifier,
    STATE(30), 6,
      sym__method_body_element,
      sym_variable_declaration,
      sym_function_call,
      sym_call_statement,
      sym_assignment,
      aux_sym_block_repeat1,
  [606] = 1,
    ACTIONS(124), 11,
      ts_builtin_sym_end,
      anon_sym_Public,
      anon_sym_Private,
      anon_sym_Dim,
      anon_sym_Static,
      anon_sym_Global,
      anon_sym_Const,
      anon_sym_Sub,
      anon_sym_Function,
      anon_sym_Property,
      sym_comment,
  [620] = 6,
    ACTIONS(106), 1,
      anon_sym_Dim,
    ACTIONS(110), 1,
      sym_identifier,
    ACTIONS(112), 1,
      sym_comment,
    STATE(110), 1,
      sym_block,
    STATE(122), 1,
      sym_qualified_identifier,
    STATE(30), 6,
      sym__method_body_element,
      sym_variable_declaration,
      sym_function_call,
      sym_call_statement,
      sym_assignment,
      aux_sym_block_repeat1,
  [644] = 6,
    ACTIONS(126), 1,
      anon_sym_Dim,
    ACTIONS(129), 1,
      anon_sym_End,
    ACTIONS(131), 1,
      sym_identifier,
    ACTIONS(134), 1,
      sym_comment,
    STATE(122), 1,
      sym_qualified_identifier,
    STATE(28), 6,
      sym__method_body_element,
      sym_variable_declaration,
      sym_function_call,
      sym_call_statement,
      sym_assignment,
      aux_sym_block_repeat1,
  [668] = 1,
    ACTIONS(137), 11,
      ts_builtin_sym_end,
      anon_sym_Public,
      anon_sym_Private,
      anon_sym_Dim,
      anon_sym_Static,
      anon_sym_Global,
      anon_sym_Const,
      anon_sym_Sub,
      anon_sym_Function,
      anon_sym_Property,
      sym_comment,
  [682] = 6,
    ACTIONS(106), 1,
      anon_sym_Dim,
    ACTIONS(110), 1,
      sym_identifier,
    ACTIONS(139), 1,
      anon_sym_End,
    ACTIONS(141), 1,
      sym_comment,
    STATE(122), 1,
      sym_qualified_identifier,
    STATE(28), 6,
      sym__method_body_element,
      sym_variable_declaration,
      sym_function_call,
      sym_call_statement,
      sym_assignment,
      aux_sym_block_repeat1,
  [706] = 1,
    ACTIONS(143), 11,
      ts_builtin_sym_end,
      anon_sym_Public,
      anon_sym_Private,
      anon_sym_Dim,
      anon_sym_Static,
      anon_sym_Global,
      anon_sym_Const,
      anon_sym_Sub,
      anon_sym_Function,
      anon_sym_Property,
      sym_comment,
  [720] = 6,
    ACTIONS(106), 1,
      anon_sym_Dim,
    ACTIONS(110), 1,
      sym_identifier,
    ACTIONS(112), 1,
      sym_comment,
    STATE(108), 1,
      sym_block,
    STATE(122), 1,
      sym_qualified_identifier,
    STATE(30), 6,
      sym__method_body_element,
      sym_variable_declaration,
      sym_function_call,
      sym_call_statement,
      sym_assignment,
      aux_sym_block_repeat1,
  [744] = 1,
    ACTIONS(145), 11,
      ts_builtin_sym_end,
      anon_sym_Public,
      anon_sym_Private,
      anon_sym_Dim,
      anon_sym_Static,
      anon_sym_Global,
      anon_sym_Const,
      anon_sym_Sub,
      anon_sym_Function,
      anon_sym_Property,
      sym_comment,
  [758] = 1,
    ACTIONS(147), 11,
      ts_builtin_sym_end,
      anon_sym_Public,
      anon_sym_Private,
      anon_sym_Dim,
      anon_sym_Static,
      anon_sym_Global,
      anon_sym_Const,
      anon_sym_Sub,
      anon_sym_Function,
      anon_sym_Property,
      sym_comment,
  [772] = 1,
    ACTIONS(149), 11,
      ts_builtin_sym_end,
      anon_sym_Public,
      anon_sym_Private,
      anon_sym_Dim,
      anon_sym_Static,
      anon_sym_Global,
      anon_sym_Const,
      anon_sym_Sub,
      anon_sym_Function,
      anon_sym_Property,
      sym_comment,
  [786] = 1,
    ACTIONS(152), 11,
      ts_builtin_sym_end,
      anon_sym_Public,
      anon_sym_Private,
      anon_sym_Dim,
      anon_sym_Static,
      anon_sym_Global,
      anon_sym_Const,
      anon_sym_Sub,
      anon_sym_Function,
      anon_sym_Property,
      sym_comment,
  [800] = 1,
    ACTIONS(154), 11,
      ts_builtin_sym_end,
      anon_sym_Public,
      anon_sym_Private,
      anon_sym_Dim,
      anon_sym_Static,
      anon_sym_Global,
      anon_sym_Const,
      anon_sym_Sub,
      anon_sym_Function,
      anon_sym_Property,
      sym_comment,
  [814] = 1,
    ACTIONS(156), 11,
      ts_builtin_sym_end,
      anon_sym_Public,
      anon_sym_Private,
      anon_sym_Dim,
      anon_sym_Static,
      anon_sym_Global,
      anon_sym_Const,
      anon_sym_Sub,
      anon_sym_Function,
      anon_sym_Property,
      sym_comment,
  [828] = 6,
    ACTIONS(106), 1,
      anon_sym_Dim,
    ACTIONS(110), 1,
      sym_identifier,
    ACTIONS(112), 1,
      sym_comment,
    STATE(105), 1,
      sym_block,
    STATE(122), 1,
      sym_qualified_identifier,
    STATE(30), 6,
      sym__method_body_element,
      sym_variable_declaration,
      sym_function_call,
      sym_call_statement,
      sym_assignment,
      aux_sym_block_repeat1,
  [852] = 1,
    ACTIONS(158), 11,
      ts_builtin_sym_end,
      anon_sym_Public,
      anon_sym_Private,
      anon_sym_Dim,
      anon_sym_Static,
      anon_sym_Global,
      anon_sym_Const,
      anon_sym_Sub,
      anon_sym_Function,
      anon_sym_Property,
      sym_comment,
  [866] = 6,
    ACTIONS(106), 1,
      anon_sym_Dim,
    ACTIONS(110), 1,
      sym_identifier,
    ACTIONS(112), 1,
      sym_comment,
    STATE(111), 1,
      sym_block,
    STATE(122), 1,
      sym_qualified_identifier,
    STATE(30), 6,
      sym__method_body_element,
      sym_variable_declaration,
      sym_function_call,
      sym_call_statement,
      sym_assignment,
      aux_sym_block_repeat1,
  [890] = 1,
    ACTIONS(160), 11,
      ts_builtin_sym_end,
      anon_sym_Public,
      anon_sym_Private,
      anon_sym_Dim,
      anon_sym_Static,
      anon_sym_Global,
      anon_sym_Const,
      anon_sym_Sub,
      anon_sym_Function,
      anon_sym_Property,
      sym_comment,
  [904] = 6,
    ACTIONS(106), 1,
      anon_sym_Dim,
    ACTIONS(110), 1,
      sym_identifier,
    ACTIONS(112), 1,
      sym_comment,
    STATE(107), 1,
      sym_block,
    STATE(122), 1,
      sym_qualified_identifier,
    STATE(30), 6,
      sym__method_body_element,
      sym_variable_declaration,
      sym_function_call,
      sym_call_statement,
      sym_assignment,
      aux_sym_block_repeat1,
  [928] = 2,
    STATE(97), 1,
      sym_type,
    ACTIONS(162), 9,
      anon_sym_Integer,
      anon_sym_Long,
      anon_sym_Single,
      anon_sym_Double,
      anon_sym_String,
      anon_sym_Boolean,
      anon_sym_Variant,
      anon_sym_Object,
      anon_sym_Date,
  [943] = 2,
    STATE(42), 1,
      sym_type,
    ACTIONS(162), 9,
      anon_sym_Integer,
      anon_sym_Long,
      anon_sym_Single,
      anon_sym_Double,
      anon_sym_String,
      anon_sym_Boolean,
      anon_sym_Variant,
      anon_sym_Object,
      anon_sym_Date,
  [958] = 2,
    STATE(27), 1,
      sym_type,
    ACTIONS(164), 9,
      anon_sym_Integer,
      anon_sym_Long,
      anon_sym_Single,
      anon_sym_Double,
      anon_sym_String,
      anon_sym_Boolean,
      anon_sym_Variant,
      anon_sym_Object,
      anon_sym_Date,
  [973] = 2,
    STATE(25), 1,
      sym_type,
    ACTIONS(164), 9,
      anon_sym_Integer,
      anon_sym_Long,
      anon_sym_Single,
      anon_sym_Double,
      anon_sym_String,
      anon_sym_Boolean,
      anon_sym_Variant,
      anon_sym_Object,
      anon_sym_Date,
  [988] = 2,
    STATE(71), 1,
      sym_type,
    ACTIONS(166), 9,
      anon_sym_Integer,
      anon_sym_Long,
      anon_sym_Single,
      anon_sym_Double,
      anon_sym_String,
      anon_sym_Boolean,
      anon_sym_Variant,
      anon_sym_Object,
      anon_sym_Date,
  [1003] = 2,
    ACTIONS(168), 4,
      anon_sym_Dim,
      anon_sym_End,
      sym_identifier,
      sym_comment,
    ACTIONS(170), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_AMP,
  [1016] = 4,
    ACTIONS(172), 1,
      anon_sym_COMMA,
    STATE(50), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(170), 2,
      anon_sym_SEMI,
      anon_sym_AMP,
    ACTIONS(168), 4,
      anon_sym_Dim,
      anon_sym_End,
      sym_identifier,
      sym_comment,
  [1033] = 4,
    ACTIONS(177), 1,
      anon_sym_COMMA,
    STATE(52), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(179), 2,
      anon_sym_SEMI,
      anon_sym_AMP,
    ACTIONS(175), 4,
      anon_sym_Dim,
      anon_sym_End,
      sym_identifier,
      sym_comment,
  [1050] = 4,
    ACTIONS(177), 1,
      anon_sym_COMMA,
    STATE(50), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(183), 2,
      anon_sym_SEMI,
      anon_sym_AMP,
    ACTIONS(181), 4,
      anon_sym_Dim,
      anon_sym_End,
      sym_identifier,
      sym_comment,
  [1067] = 2,
    ACTIONS(46), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_AMP,
    ACTIONS(185), 4,
      anon_sym_Dim,
      anon_sym_End,
      sym_identifier,
      sym_comment,
  [1079] = 4,
    STATE(9), 1,
      sym_boolean,
    STATE(12), 1,
      sym_attribute_value,
    ACTIONS(187), 2,
      sym_string,
      sym_number,
    ACTIONS(189), 2,
      anon_sym_True,
      anon_sym_False,
  [1094] = 3,
    ACTIONS(193), 1,
      anon_sym_SEMI,
    ACTIONS(195), 1,
      anon_sym_AMP,
    ACTIONS(191), 4,
      anon_sym_Dim,
      anon_sym_End,
      sym_identifier,
      sym_comment,
  [1107] = 4,
    ACTIONS(197), 1,
      sym_identifier,
    STATE(49), 1,
      sym_boolean,
    ACTIONS(199), 2,
      sym_string,
      sym_number,
    ACTIONS(201), 2,
      anon_sym_True,
      anon_sym_False,
  [1122] = 4,
    ACTIONS(203), 1,
      sym_identifier,
    STATE(86), 1,
      sym_boolean,
    ACTIONS(201), 2,
      anon_sym_True,
      anon_sym_False,
    ACTIONS(205), 2,
      sym_string,
      sym_number,
  [1137] = 4,
    ACTIONS(197), 1,
      sym_identifier,
    STATE(49), 1,
      sym_boolean,
    ACTIONS(98), 2,
      anon_sym_True,
      anon_sym_False,
    ACTIONS(199), 2,
      sym_string,
      sym_number,
  [1152] = 2,
    ACTIONS(209), 1,
      anon_sym_AMP,
    ACTIONS(207), 4,
      anon_sym_Dim,
      anon_sym_End,
      sym_identifier,
      sym_comment,
  [1162] = 2,
    ACTIONS(213), 1,
      anon_sym_AMP,
    ACTIONS(211), 4,
      anon_sym_Dim,
      anon_sym_End,
      sym_identifier,
      sym_comment,
  [1172] = 2,
    ACTIONS(217), 1,
      anon_sym_AMP,
    ACTIONS(215), 4,
      anon_sym_Dim,
      anon_sym_End,
      sym_identifier,
      sym_comment,
  [1182] = 2,
    ACTIONS(221), 1,
      anon_sym_AMP,
    ACTIONS(219), 4,
      anon_sym_Dim,
      anon_sym_End,
      sym_identifier,
      sym_comment,
  [1192] = 2,
    ACTIONS(225), 1,
      anon_sym_AMP,
    ACTIONS(223), 4,
      anon_sym_Dim,
      anon_sym_End,
      sym_identifier,
      sym_comment,
  [1202] = 2,
    ACTIONS(229), 1,
      anon_sym_AMP,
    ACTIONS(227), 4,
      anon_sym_Dim,
      anon_sym_End,
      sym_identifier,
      sym_comment,
  [1212] = 1,
    ACTIONS(231), 4,
      anon_sym_Dim,
      anon_sym_End,
      sym_identifier,
      sym_comment,
  [1219] = 1,
    ACTIONS(233), 4,
      anon_sym_Dim,
      anon_sym_As,
      sym_identifier,
      sym_comment,
  [1226] = 1,
    ACTIONS(235), 4,
      anon_sym_Dim,
      anon_sym_As,
      sym_identifier,
      sym_comment,
  [1233] = 1,
    ACTIONS(237), 4,
      anon_sym_Dim,
      anon_sym_As,
      sym_identifier,
      sym_comment,
  [1240] = 3,
    ACTIONS(239), 1,
      anon_sym_END,
    ACTIONS(241), 1,
      sym_identifier,
    STATE(72), 2,
      sym_setting_statement,
      aux_sym_begin_block_repeat1,
  [1251] = 4,
    ACTIONS(243), 1,
      anon_sym_Sub,
    ACTIONS(245), 1,
      anon_sym_Function,
    ACTIONS(247), 1,
      anon_sym_Property,
    ACTIONS(249), 1,
      sym_identifier,
  [1264] = 1,
    ACTIONS(251), 4,
      anon_sym_Dim,
      anon_sym_End,
      sym_identifier,
      sym_comment,
  [1271] = 3,
    ACTIONS(241), 1,
      sym_identifier,
    ACTIONS(253), 1,
      anon_sym_END,
    STATE(73), 2,
      sym_setting_statement,
      aux_sym_begin_block_repeat1,
  [1282] = 3,
    ACTIONS(255), 1,
      anon_sym_END,
    ACTIONS(257), 1,
      sym_identifier,
    STATE(73), 2,
      sym_setting_statement,
      aux_sym_begin_block_repeat1,
  [1293] = 1,
    ACTIONS(233), 3,
      anon_sym_Dim,
      sym_identifier,
      sym_comment,
  [1299] = 1,
    ACTIONS(260), 3,
      anon_sym_Explicit,
      anon_sym_Base,
      anon_sym_Compare,
  [1305] = 1,
    ACTIONS(235), 3,
      anon_sym_Dim,
      sym_identifier,
      sym_comment,
  [1311] = 3,
    ACTIONS(262), 1,
      anon_sym_COMMA,
    ACTIONS(264), 1,
      anon_sym_RPAREN,
    STATE(94), 1,
      aux_sym_formal_parameters_repeat1,
  [1321] = 3,
    ACTIONS(262), 1,
      anon_sym_COMMA,
    ACTIONS(266), 1,
      anon_sym_RPAREN,
    STATE(94), 1,
      aux_sym_formal_parameters_repeat1,
  [1331] = 3,
    ACTIONS(262), 1,
      anon_sym_COMMA,
    ACTIONS(268), 1,
      anon_sym_RPAREN,
    STATE(78), 1,
      aux_sym_formal_parameters_repeat1,
  [1341] = 3,
    ACTIONS(270), 1,
      anon_sym_RPAREN,
    ACTIONS(272), 1,
      sym_identifier,
    STATE(79), 1,
      sym_parameter,
  [1351] = 3,
    ACTIONS(94), 1,
      anon_sym_DOT,
    ACTIONS(274), 1,
      anon_sym_LPAREN,
    STATE(89), 1,
      aux_sym_qualified_identifier_repeat1,
  [1361] = 2,
    ACTIONS(278), 1,
      sym_comment,
    ACTIONS(276), 2,
      anon_sym_END,
      sym_identifier,
  [1369] = 3,
    ACTIONS(170), 1,
      anon_sym_RPAREN,
    ACTIONS(280), 1,
      anon_sym_COMMA,
    STATE(83), 1,
      aux_sym_argument_list_repeat1,
  [1379] = 3,
    ACTIONS(283), 1,
      anon_sym_LPAREN,
    ACTIONS(285), 1,
      anon_sym_RPAREN,
    STATE(121), 1,
      sym_argument_list,
  [1389] = 3,
    ACTIONS(272), 1,
      sym_identifier,
    ACTIONS(287), 1,
      anon_sym_RPAREN,
    STATE(95), 1,
      sym_parameter,
  [1399] = 3,
    ACTIONS(289), 1,
      anon_sym_COMMA,
    ACTIONS(291), 1,
      anon_sym_RPAREN,
    STATE(91), 1,
      aux_sym_argument_list_repeat1,
  [1409] = 1,
    ACTIONS(293), 3,
      anon_sym_Get,
      anon_sym_Let,
      anon_sym_Set,
  [1415] = 1,
    ACTIONS(237), 3,
      anon_sym_Dim,
      sym_identifier,
      sym_comment,
  [1421] = 3,
    ACTIONS(295), 1,
      anon_sym_LPAREN,
    ACTIONS(297), 1,
      anon_sym_DOT,
    STATE(89), 1,
      aux_sym_qualified_identifier_repeat1,
  [1431] = 1,
    ACTIONS(300), 3,
      anon_sym_Get,
      anon_sym_Let,
      anon_sym_Set,
  [1437] = 3,
    ACTIONS(289), 1,
      anon_sym_COMMA,
    ACTIONS(302), 1,
      anon_sym_RPAREN,
    STATE(83), 1,
      aux_sym_argument_list_repeat1,
  [1447] = 2,
    ACTIONS(304), 1,
      anon_sym_As,
    ACTIONS(306), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1455] = 1,
    ACTIONS(231), 3,
      anon_sym_Dim,
      sym_identifier,
      sym_comment,
  [1461] = 3,
    ACTIONS(308), 1,
      anon_sym_COMMA,
    ACTIONS(311), 1,
      anon_sym_RPAREN,
    STATE(94), 1,
      aux_sym_formal_parameters_repeat1,
  [1471] = 3,
    ACTIONS(262), 1,
      anon_sym_COMMA,
    ACTIONS(313), 1,
      anon_sym_RPAREN,
    STATE(77), 1,
      aux_sym_formal_parameters_repeat1,
  [1481] = 2,
    ACTIONS(315), 1,
      anon_sym_LPAREN,
    STATE(19), 1,
      sym_formal_parameters,
  [1488] = 1,
    ACTIONS(317), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1493] = 1,
    ACTIONS(311), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1498] = 2,
    ACTIONS(319), 1,
      anon_sym_LPAREN,
    STATE(41), 1,
      sym_formal_parameters,
  [1505] = 2,
    ACTIONS(319), 1,
      anon_sym_LPAREN,
    STATE(32), 1,
      sym_formal_parameters,
  [1512] = 2,
    ACTIONS(315), 1,
      anon_sym_LPAREN,
    STATE(22), 1,
      sym_formal_parameters,
  [1519] = 2,
    ACTIONS(321), 1,
      anon_sym_End,
    STATE(38), 1,
      sym_end_function,
  [1526] = 2,
    ACTIONS(319), 1,
      anon_sym_LPAREN,
    STATE(43), 1,
      sym_formal_parameters,
  [1533] = 1,
    ACTIONS(295), 2,
      anon_sym_LPAREN,
      anon_sym_DOT,
  [1538] = 2,
    ACTIONS(323), 1,
      anon_sym_End,
    STATE(24), 1,
      sym_end_property,
  [1545] = 2,
    ACTIONS(272), 1,
      sym_identifier,
    STATE(98), 1,
      sym_parameter,
  [1552] = 2,
    ACTIONS(325), 1,
      anon_sym_End,
    STATE(29), 1,
      sym_end_sub,
  [1559] = 2,
    ACTIONS(325), 1,
      anon_sym_End,
    STATE(26), 1,
      sym_end_sub,
  [1566] = 1,
    ACTIONS(327), 2,
      anon_sym_END,
      sym_identifier,
  [1571] = 2,
    ACTIONS(321), 1,
      anon_sym_End,
    STATE(40), 1,
      sym_end_function,
  [1578] = 2,
    ACTIONS(323), 1,
      anon_sym_End,
    STATE(37), 1,
      sym_end_property,
  [1585] = 2,
    ACTIONS(321), 1,
      anon_sym_End,
    STATE(31), 1,
      sym_end_function,
  [1592] = 2,
    ACTIONS(321), 1,
      anon_sym_End,
    STATE(23), 1,
      sym_end_function,
  [1599] = 2,
    ACTIONS(319), 1,
      anon_sym_LPAREN,
    STATE(39), 1,
      sym_formal_parameters,
  [1606] = 1,
    ACTIONS(329), 1,
      sym_identifier,
  [1610] = 1,
    ACTIONS(331), 1,
      sym_identifier,
  [1614] = 1,
    ACTIONS(333), 1,
      sym_number,
  [1618] = 1,
    ACTIONS(335), 1,
      sym_identifier,
  [1622] = 1,
    ACTIONS(337), 1,
      sym_identifier,
  [1626] = 1,
    ACTIONS(339), 1,
      anon_sym_Property,
  [1630] = 1,
    ACTIONS(341), 1,
      anon_sym_RPAREN,
  [1634] = 1,
    ACTIONS(343), 1,
      anon_sym_LPAREN,
  [1638] = 1,
    ACTIONS(345), 1,
      ts_builtin_sym_end,
  [1642] = 1,
    ACTIONS(347), 1,
      sym_identifier,
  [1646] = 1,
    ACTIONS(349), 1,
      anon_sym_As,
  [1650] = 1,
    ACTIONS(351), 1,
      sym_identifier,
  [1654] = 1,
    ACTIONS(353), 1,
      anon_sym_RPAREN,
  [1658] = 1,
    ACTIONS(355), 1,
      anon_sym_CLASS,
  [1662] = 1,
    ACTIONS(357), 1,
      anon_sym_RPAREN,
  [1666] = 1,
    ACTIONS(359), 1,
      sym_identifier,
  [1670] = 1,
    ACTIONS(361), 1,
      sym_identifier,
  [1674] = 1,
    ACTIONS(363), 1,
      anon_sym_EQ,
  [1678] = 1,
    ACTIONS(365), 1,
      anon_sym_EQ,
  [1682] = 1,
    ACTIONS(367), 1,
      sym_identifier,
  [1686] = 1,
    ACTIONS(369), 1,
      anon_sym_As,
  [1690] = 1,
    ACTIONS(371), 1,
      anon_sym_Function,
  [1694] = 1,
    ACTIONS(373), 1,
      sym_identifier,
  [1698] = 1,
    ACTIONS(375), 1,
      anon_sym_Sub,
  [1702] = 1,
    ACTIONS(377), 1,
      sym_identifier,
  [1706] = 1,
    ACTIONS(379), 1,
      sym_number,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 37,
  [SMALL_STATE(4)] = 74,
  [SMALL_STATE(5)] = 95,
  [SMALL_STATE(6)] = 129,
  [SMALL_STATE(7)] = 163,
  [SMALL_STATE(8)] = 197,
  [SMALL_STATE(9)] = 231,
  [SMALL_STATE(10)] = 250,
  [SMALL_STATE(11)] = 269,
  [SMALL_STATE(12)] = 288,
  [SMALL_STATE(13)] = 307,
  [SMALL_STATE(14)] = 326,
  [SMALL_STATE(15)] = 345,
  [SMALL_STATE(16)] = 364,
  [SMALL_STATE(17)] = 399,
  [SMALL_STATE(18)] = 434,
  [SMALL_STATE(19)] = 450,
  [SMALL_STATE(20)] = 477,
  [SMALL_STATE(21)] = 502,
  [SMALL_STATE(22)] = 527,
  [SMALL_STATE(23)] = 554,
  [SMALL_STATE(24)] = 568,
  [SMALL_STATE(25)] = 582,
  [SMALL_STATE(26)] = 606,
  [SMALL_STATE(27)] = 620,
  [SMALL_STATE(28)] = 644,
  [SMALL_STATE(29)] = 668,
  [SMALL_STATE(30)] = 682,
  [SMALL_STATE(31)] = 706,
  [SMALL_STATE(32)] = 720,
  [SMALL_STATE(33)] = 744,
  [SMALL_STATE(34)] = 758,
  [SMALL_STATE(35)] = 772,
  [SMALL_STATE(36)] = 786,
  [SMALL_STATE(37)] = 800,
  [SMALL_STATE(38)] = 814,
  [SMALL_STATE(39)] = 828,
  [SMALL_STATE(40)] = 852,
  [SMALL_STATE(41)] = 866,
  [SMALL_STATE(42)] = 890,
  [SMALL_STATE(43)] = 904,
  [SMALL_STATE(44)] = 928,
  [SMALL_STATE(45)] = 943,
  [SMALL_STATE(46)] = 958,
  [SMALL_STATE(47)] = 973,
  [SMALL_STATE(48)] = 988,
  [SMALL_STATE(49)] = 1003,
  [SMALL_STATE(50)] = 1016,
  [SMALL_STATE(51)] = 1033,
  [SMALL_STATE(52)] = 1050,
  [SMALL_STATE(53)] = 1067,
  [SMALL_STATE(54)] = 1079,
  [SMALL_STATE(55)] = 1094,
  [SMALL_STATE(56)] = 1107,
  [SMALL_STATE(57)] = 1122,
  [SMALL_STATE(58)] = 1137,
  [SMALL_STATE(59)] = 1152,
  [SMALL_STATE(60)] = 1162,
  [SMALL_STATE(61)] = 1172,
  [SMALL_STATE(62)] = 1182,
  [SMALL_STATE(63)] = 1192,
  [SMALL_STATE(64)] = 1202,
  [SMALL_STATE(65)] = 1212,
  [SMALL_STATE(66)] = 1219,
  [SMALL_STATE(67)] = 1226,
  [SMALL_STATE(68)] = 1233,
  [SMALL_STATE(69)] = 1240,
  [SMALL_STATE(70)] = 1251,
  [SMALL_STATE(71)] = 1264,
  [SMALL_STATE(72)] = 1271,
  [SMALL_STATE(73)] = 1282,
  [SMALL_STATE(74)] = 1293,
  [SMALL_STATE(75)] = 1299,
  [SMALL_STATE(76)] = 1305,
  [SMALL_STATE(77)] = 1311,
  [SMALL_STATE(78)] = 1321,
  [SMALL_STATE(79)] = 1331,
  [SMALL_STATE(80)] = 1341,
  [SMALL_STATE(81)] = 1351,
  [SMALL_STATE(82)] = 1361,
  [SMALL_STATE(83)] = 1369,
  [SMALL_STATE(84)] = 1379,
  [SMALL_STATE(85)] = 1389,
  [SMALL_STATE(86)] = 1399,
  [SMALL_STATE(87)] = 1409,
  [SMALL_STATE(88)] = 1415,
  [SMALL_STATE(89)] = 1421,
  [SMALL_STATE(90)] = 1431,
  [SMALL_STATE(91)] = 1437,
  [SMALL_STATE(92)] = 1447,
  [SMALL_STATE(93)] = 1455,
  [SMALL_STATE(94)] = 1461,
  [SMALL_STATE(95)] = 1471,
  [SMALL_STATE(96)] = 1481,
  [SMALL_STATE(97)] = 1488,
  [SMALL_STATE(98)] = 1493,
  [SMALL_STATE(99)] = 1498,
  [SMALL_STATE(100)] = 1505,
  [SMALL_STATE(101)] = 1512,
  [SMALL_STATE(102)] = 1519,
  [SMALL_STATE(103)] = 1526,
  [SMALL_STATE(104)] = 1533,
  [SMALL_STATE(105)] = 1538,
  [SMALL_STATE(106)] = 1545,
  [SMALL_STATE(107)] = 1552,
  [SMALL_STATE(108)] = 1559,
  [SMALL_STATE(109)] = 1566,
  [SMALL_STATE(110)] = 1571,
  [SMALL_STATE(111)] = 1578,
  [SMALL_STATE(112)] = 1585,
  [SMALL_STATE(113)] = 1592,
  [SMALL_STATE(114)] = 1599,
  [SMALL_STATE(115)] = 1606,
  [SMALL_STATE(116)] = 1610,
  [SMALL_STATE(117)] = 1614,
  [SMALL_STATE(118)] = 1618,
  [SMALL_STATE(119)] = 1622,
  [SMALL_STATE(120)] = 1626,
  [SMALL_STATE(121)] = 1630,
  [SMALL_STATE(122)] = 1634,
  [SMALL_STATE(123)] = 1638,
  [SMALL_STATE(124)] = 1642,
  [SMALL_STATE(125)] = 1646,
  [SMALL_STATE(126)] = 1650,
  [SMALL_STATE(127)] = 1654,
  [SMALL_STATE(128)] = 1658,
  [SMALL_STATE(129)] = 1662,
  [SMALL_STATE(130)] = 1666,
  [SMALL_STATE(131)] = 1670,
  [SMALL_STATE(132)] = 1674,
  [SMALL_STATE(133)] = 1678,
  [SMALL_STATE(134)] = 1682,
  [SMALL_STATE(135)] = 1686,
  [SMALL_STATE(136)] = 1690,
  [SMALL_STATE(137)] = 1694,
  [SMALL_STATE(138)] = 1698,
  [SMALL_STATE(139)] = 1702,
  [SMALL_STATE(140)] = 1706,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 1, 0, 0),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_header_repeat1, 2, 0, 0),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_header_repeat1, 2, 0, 0), SHIFT_REPEAT(117),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_header_repeat1, 2, 0, 0), SHIFT_REPEAT(130),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_header_repeat1, 2, 0, 0), SHIFT_REPEAT(69),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_header_repeat1, 2, 0, 0), SHIFT_REPEAT(124),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_header_repeat1, 2, 0, 0), SHIFT_REPEAT(75),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1, 0, 0),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(70),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(119),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(118),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(116),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(87),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(35),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, 0, 0),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_value, 1, 0, 0),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_begin_block, 3, 0, 0),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version_statement, 3, 0, 0),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_statement, 4, 0, 0),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_statement, 2, 0, 0),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_begin_block, 2, 0, 0),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_implements_statement, 2, 0, 0),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__method_body_element, 1, 0, 0),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_identifier, 1, 0, 0),
  [92] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [98] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1, 0, 0),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1, 0, 0),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1, 0, 0),
  [106] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [108] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [112] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [114] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [118] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 5, 0, 5),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_definition, 7, 0, 9),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sub_definition, 6, 0, 6),
  [126] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(126),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0),
  [131] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(16),
  [134] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(28),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sub_definition, 5, 0, 5),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 1, 0, 0),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 8, 0, 11),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_end_property, 2, 0, 0),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_end_sub, 2, 0, 0),
  [149] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__definition, 1, 0, 0), REDUCE(aux_sym_source_file_repeat1, 1, 0, 0),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_end_function, 2, 0, 0),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_definition, 6, 0, 6),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 6, 0, 6),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 7, 0, 10),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 4, 0, 2),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_argument_list_repeat1, 2, 0, 0),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2, 0, 0),
  [172] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2, 0, 0), SHIFT_REPEAT(58),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list_no_parens, 1, 0, 0),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list_no_parens, 1, 0, 0),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list_no_parens, 2, 0, 0),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list_no_parens, 2, 0, 0),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1, 0, 0),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_statement, 2, 0, 4),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_statement, 2, 0, 4),
  [197] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [203] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_concatenation, 3, 0, 0),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_concatenation, 3, 0, 0),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 4, 0, 3),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4, 0, 3),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 3, 0, 3),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 3, 0, 3),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_statement, 3, 0, 4),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_statement, 3, 0, 4),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment, 3, 0, 8),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 1, 0, 0),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1, 0, 0),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 1, 0, 0),
  [233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_formal_parameters, 4, 0, 0),
  [235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_formal_parameters, 3, 0, 0),
  [237] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_formal_parameters, 2, 0, 0),
  [239] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [241] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [243] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [245] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [247] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [249] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 4, 0, 2),
  [253] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_begin_block_repeat1, 2, 0, 0),
  [257] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_begin_block_repeat1, 2, 0, 0), SHIFT_REPEAT(133),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_identifier, 2, 0, 0),
  [276] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_setting_statement, 3, 0, 1),
  [278] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [280] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2, 0, 0), SHIFT_REPEAT(56),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_qualified_identifier_repeat1, 2, 0, 0),
  [297] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_qualified_identifier_repeat1, 2, 0, 0), SHIFT_REPEAT(139),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1, 0, 3),
  [308] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_formal_parameters_repeat1, 2, 0, 0), SHIFT_REPEAT(106),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_formal_parameters_repeat1, 2, 0, 0),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 3, 0, 7),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [327] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_setting_statement, 4, 0, 1),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [345] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 3, 0, 0),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 4, 0, 0),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_vb6(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
