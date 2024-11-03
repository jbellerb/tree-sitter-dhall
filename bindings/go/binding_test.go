package tree_sitter_dhall_test

import (
	"testing"

	tree_sitter "github.com/tree-sitter/go-tree-sitter"
	tree_sitter_dhall "github.com/jbellerb/tree-sitter-dhall/bindings/go"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_dhall.Language())
	if language == nil {
		t.Errorf("Error loading Dhall grammar")
	}
}
