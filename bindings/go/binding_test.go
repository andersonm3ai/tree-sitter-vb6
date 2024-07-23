package tree_sitter_vb6_test

import (
	"testing"

	tree_sitter "github.com/smacker/go-tree-sitter"
	"github.com/tree-sitter/tree-sitter-vb6"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_vb6.Language())
	if language == nil {
		t.Errorf("Error loading Vb6 grammar")
	}
}
