package tree_sitter_chemical_test

import (
	"testing"

	tree_sitter "github.com/smacker/go-tree-sitter"
	"github.com/tree-sitter/tree-sitter-chemical"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_chemical.Language())
	if language == nil {
		t.Errorf("Error loading Chemical grammar")
	}
}
