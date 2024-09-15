package tree_sitter_csproj_test

import (
	"testing"

	tree_sitter "github.com/tree-sitter/go-tree-sitter"
	tree_sitter_csproj "github.com/tree-sitter/tree-sitter-csproj/bindings/go"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_csproj.Language())
	if language == nil {
		t.Errorf("Error loading Csproj grammar")
	}
}
