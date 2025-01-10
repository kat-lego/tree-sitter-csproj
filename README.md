# tree-sitter-csproj

This is a grammar for csharp project files leveraging [tree-sitter](https://github.com/tree-sitter/tree-sitter).
Why? Simply for fun and getting to see [tree-sitter](https://github.com/tree-sitter/tree-sitter) in
action.

### Installing Tree Sitter
* Ensure you have [node](https://nodejs.org/en) installed.
* Ensure you have a c compiler installed.
* Install `tree-sitter-cli` using
    - using cargo
        ```
        cargo install tree-sitter-cli --locked
        ```
    - using npm
        ```
        npm install tree-sitter-cli -g
        ```
    - download binaries from [github](https://github.com/tree-sitter/tree-sitter/releases/latest)

### Generating the parser
The grammar for the language is defined in [grammar.json](src/grammar.json). Running `tree-sitter
generate` will generate c code for the parser. You will essentially run this after updating the
grammar.

### Testing
You can test the parser by running `tree-sitter parse example/console.txt`. This should print out
an AST in the form of an S-Expression. i.e

```lisp
(project [0, 0] - [16, 0]
  (project_open [0, 0] - [0, 33]
    ...more))

```

Running `tree-sitter test` will run the tests set up under `test/corpus` folder.

### Publishing
The node binding for the parser is currently published to npm.
