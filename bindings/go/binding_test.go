package tree_sitter_csproj_test

import (
	"testing"

	tree_sitter "github.com/smacker/go-tree-sitter"
	"github.com/tree-sitter/tree-sitter-csproj"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_csproj.Language())
	if language == nil {
		t.Errorf("Error loading Csproj grammar")
	}
}
