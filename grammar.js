// Minimal Tree-sitter grammar for Chemical.
//
// This grammar exists only because Zed requires one to register a custom
// language. All visual highlighting (syntax coloring) is provided by the
// Chemical LSP via the LSP Semantic Tokens protocol
// (textDocument/semanticTokens/full).
//
// This grammar provides just enough structure for:
//   - File extension → language mapping  (.ch → Chemical)
//   - Comment toggling                    (Ctrl+/)
//   - Bracket matching / auto-close       ({}, (), [])
//   - Auto-indentation                    (after {, etc.)
//   - String context                      (don't auto-close inside strings)

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: "chemical",

  extras: ($) => [/\s/, $.comment, $.multiline_comment],

  word: ($) => $.identifier,

  conflicts: ($) => [[$.function_definition]],

  rules: {
    source_file: ($) =>
      repeat(
        choice(
          $.function_definition,
          $.struct_definition,
          $.variant_definition,
          $.interface_definition,
          $.impl_block,
          $.enum_definition,
          $.namespace_definition,
          $.expression,
          ";",
        ),
      ),

    // ---------- COMMENTS ----------
    comment: ($) => token(seq("//", /[^\n]*/)),

    multiline_comment: ($) =>
      token(seq("/*", /[^*]*\*+([^/*][^*]*\*+)*/, "/")),

    // ---------- STRINGS ----------
    string: ($) =>
      token(
        seq(
          '"',
          repeat(choice(/[^"\\]/, /\\./, seq("${", /[^}]*/, "}"))),
          '"',
        ),
      ),

    // ---------- IDENTIFIERS ----------
    identifier: ($) => /[a-zA-Z_][a-zA-Z0-9_]*/,

    // ---------- STRUCTURE ----------
    function_definition: ($) =>
      seq(
        optional(seq("@", $.identifier)),
        optional(choice("public", "private", "protected", "internal")),
        "func",
        $.identifier,
        "(",
        repeat(seq($.identifier, ":", $.identifier)),
        ")",
        optional(seq(":", $.identifier)),
        optional($.block),
      ),

    struct_definition: ($) =>
      seq(
        optional(choice("public", "private")),
        "struct",
        $.identifier,
        $.block,
      ),

    variant_definition: ($) =>
      seq(
        optional(choice("public", "private")),
        "variant",
        $.identifier,
        $.block,
      ),

    interface_definition: ($) =>
      seq(
        optional(choice("public", "private")),
        optional("@static"),
        "interface",
        $.identifier,
        $.block,
      ),

    impl_block: ($) =>
      seq(
        "impl",
        $.identifier,
        "for",
        $.identifier,
        $.block,
      ),

    enum_definition: ($) =>
      seq(
        optional(choice("public", "private")),
        "enum",
        $.identifier,
        $.block,
      ),

    namespace_definition: ($) =>
      seq(
        optional(choice("public", "private")),
        "namespace",
        $.identifier,
        $.block,
      ),

    // ---------- BLOCKS & EXPRESSIONS ----------
    block: ($) =>
      seq("{", repeat(choice($.expression, ";")), "}"),

    expression: ($) =>
      choice(
        $.identifier,
        $.string,
        $.number,
        $.block,
      ),

    number: ($) => /\d[\d_]*([eE][+-]?\d+)?/,
  },
});
