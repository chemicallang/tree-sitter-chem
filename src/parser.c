#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 98
#define LARGE_STATE_COUNT 36
#define SYMBOL_COUNT 39
#define ALIAS_COUNT 0
#define TOKEN_COUNT 26
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 11
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  sym_identifier = 1,
  anon_sym_SEMI = 2,
  sym_comment = 3,
  sym_multiline_comment = 4,
  sym_string = 5,
  anon_sym_AT = 6,
  anon_sym_public = 7,
  anon_sym_private = 8,
  anon_sym_protected = 9,
  anon_sym_internal = 10,
  anon_sym_func = 11,
  anon_sym_LPAREN = 12,
  anon_sym_COLON = 13,
  anon_sym_RPAREN = 14,
  anon_sym_struct = 15,
  anon_sym_variant = 16,
  anon_sym_ATstatic = 17,
  anon_sym_interface = 18,
  anon_sym_impl = 19,
  anon_sym_for = 20,
  anon_sym_enum = 21,
  anon_sym_namespace = 22,
  anon_sym_LBRACE = 23,
  anon_sym_RBRACE = 24,
  sym_number = 25,
  sym_source_file = 26,
  sym_function_definition = 27,
  sym_struct_definition = 28,
  sym_variant_definition = 29,
  sym_interface_definition = 30,
  sym_impl_block = 31,
  sym_enum_definition = 32,
  sym_namespace_definition = 33,
  sym_block = 34,
  sym_expression = 35,
  aux_sym_source_file_repeat1 = 36,
  aux_sym_function_definition_repeat1 = 37,
  aux_sym_block_repeat1 = 38,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [anon_sym_SEMI] = ";",
  [sym_comment] = "comment",
  [sym_multiline_comment] = "multiline_comment",
  [sym_string] = "string",
  [anon_sym_AT] = "@",
  [anon_sym_public] = "public",
  [anon_sym_private] = "private",
  [anon_sym_protected] = "protected",
  [anon_sym_internal] = "internal",
  [anon_sym_func] = "func",
  [anon_sym_LPAREN] = "(",
  [anon_sym_COLON] = ":",
  [anon_sym_RPAREN] = ")",
  [anon_sym_struct] = "struct",
  [anon_sym_variant] = "variant",
  [anon_sym_ATstatic] = "@static",
  [anon_sym_interface] = "interface",
  [anon_sym_impl] = "impl",
  [anon_sym_for] = "for",
  [anon_sym_enum] = "enum",
  [anon_sym_namespace] = "namespace",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [sym_number] = "number",
  [sym_source_file] = "source_file",
  [sym_function_definition] = "function_definition",
  [sym_struct_definition] = "struct_definition",
  [sym_variant_definition] = "variant_definition",
  [sym_interface_definition] = "interface_definition",
  [sym_impl_block] = "impl_block",
  [sym_enum_definition] = "enum_definition",
  [sym_namespace_definition] = "namespace_definition",
  [sym_block] = "block",
  [sym_expression] = "expression",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_function_definition_repeat1] = "function_definition_repeat1",
  [aux_sym_block_repeat1] = "block_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [sym_comment] = sym_comment,
  [sym_multiline_comment] = sym_multiline_comment,
  [sym_string] = sym_string,
  [anon_sym_AT] = anon_sym_AT,
  [anon_sym_public] = anon_sym_public,
  [anon_sym_private] = anon_sym_private,
  [anon_sym_protected] = anon_sym_protected,
  [anon_sym_internal] = anon_sym_internal,
  [anon_sym_func] = anon_sym_func,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_struct] = anon_sym_struct,
  [anon_sym_variant] = anon_sym_variant,
  [anon_sym_ATstatic] = anon_sym_ATstatic,
  [anon_sym_interface] = anon_sym_interface,
  [anon_sym_impl] = anon_sym_impl,
  [anon_sym_for] = anon_sym_for,
  [anon_sym_enum] = anon_sym_enum,
  [anon_sym_namespace] = anon_sym_namespace,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [sym_number] = sym_number,
  [sym_source_file] = sym_source_file,
  [sym_function_definition] = sym_function_definition,
  [sym_struct_definition] = sym_struct_definition,
  [sym_variant_definition] = sym_variant_definition,
  [sym_interface_definition] = sym_interface_definition,
  [sym_impl_block] = sym_impl_block,
  [sym_enum_definition] = sym_enum_definition,
  [sym_namespace_definition] = sym_namespace_definition,
  [sym_block] = sym_block,
  [sym_expression] = sym_expression,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_function_definition_repeat1] = aux_sym_function_definition_repeat1,
  [aux_sym_block_repeat1] = aux_sym_block_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_multiline_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_public] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_private] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_protected] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_internal] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_func] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_struct] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_variant] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATstatic] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_interface] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_impl] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_for] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_enum] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_namespace] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_function_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_struct_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_variant_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_interface_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_impl_block] = {
    .visible = true,
    .named = true,
  },
  [sym_enum_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_namespace_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym_expression] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_function_definition_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_repeat1] = {
    .visible = false,
    .named = false,
  },
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
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(18);
      ADVANCE_MAP(
        '"', 3,
        '(', 26,
        ')', 28,
        '/', 6,
        ':', 27,
        ';', 19,
        '@', 25,
        '{', 30,
        '}', 31,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(32);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(14);
      if (lookahead == '}') ADVANCE(3);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(22);
      if (lookahead == '$') ADVANCE(2);
      if (lookahead == '\\') ADVANCE(17);
      if (lookahead == '{') ADVANCE(5);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(22);
      if (lookahead == '$') ADVANCE(2);
      if (lookahead == '\\') ADVANCE(17);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(23);
      if (lookahead == '$') ADVANCE(4);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '{') ADVANCE(5);
      if (lookahead == '}') ADVANCE(3);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(23);
      if (lookahead == '$') ADVANCE(4);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '}') ADVANCE(3);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '*') ADVANCE(8);
      if (lookahead == '/') ADVANCE(20);
      END_STATE();
    case 7:
      if (lookahead == '*') ADVANCE(7);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 8:
      if (lookahead == '*') ADVANCE(7);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(13);
      END_STATE();
    case 10:
      if (lookahead == 'c') ADVANCE(29);
      END_STATE();
    case 11:
      if (lookahead == 'i') ADVANCE(10);
      END_STATE();
    case 12:
      if (lookahead == 't') ADVANCE(9);
      END_STATE();
    case 13:
      if (lookahead == 't') ADVANCE(11);
      END_STATE();
    case 14:
      if (lookahead == '}') ADVANCE(3);
      if (lookahead != 0) ADVANCE(14);
      END_STATE();
    case 15:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(33);
      END_STATE();
    case 16:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(33);
      END_STATE();
    case 17:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(3);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(20);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_multiline_comment);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '}') ADVANCE(3);
      if (lookahead != 0) ADVANCE(14);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == 's') ADVANCE(12);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_ATstatic);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(32);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(33);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (lookahead == 'e') ADVANCE(1);
      if (lookahead == 'f') ADVANCE(2);
      if (lookahead == 'i') ADVANCE(3);
      if (lookahead == 'n') ADVANCE(4);
      if (lookahead == 'p') ADVANCE(5);
      if (lookahead == 's') ADVANCE(6);
      if (lookahead == 'v') ADVANCE(7);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      END_STATE();
    case 1:
      if (lookahead == 'n') ADVANCE(8);
      END_STATE();
    case 2:
      if (lookahead == 'o') ADVANCE(9);
      if (lookahead == 'u') ADVANCE(10);
      END_STATE();
    case 3:
      if (lookahead == 'm') ADVANCE(11);
      if (lookahead == 'n') ADVANCE(12);
      END_STATE();
    case 4:
      if (lookahead == 'a') ADVANCE(13);
      END_STATE();
    case 5:
      if (lookahead == 'r') ADVANCE(14);
      if (lookahead == 'u') ADVANCE(15);
      END_STATE();
    case 6:
      if (lookahead == 't') ADVANCE(16);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(17);
      END_STATE();
    case 8:
      if (lookahead == 'u') ADVANCE(18);
      END_STATE();
    case 9:
      if (lookahead == 'r') ADVANCE(19);
      END_STATE();
    case 10:
      if (lookahead == 'n') ADVANCE(20);
      END_STATE();
    case 11:
      if (lookahead == 'p') ADVANCE(21);
      END_STATE();
    case 12:
      if (lookahead == 't') ADVANCE(22);
      END_STATE();
    case 13:
      if (lookahead == 'm') ADVANCE(23);
      END_STATE();
    case 14:
      if (lookahead == 'i') ADVANCE(24);
      if (lookahead == 'o') ADVANCE(25);
      END_STATE();
    case 15:
      if (lookahead == 'b') ADVANCE(26);
      END_STATE();
    case 16:
      if (lookahead == 'r') ADVANCE(27);
      END_STATE();
    case 17:
      if (lookahead == 'r') ADVANCE(28);
      END_STATE();
    case 18:
      if (lookahead == 'm') ADVANCE(29);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_for);
      END_STATE();
    case 20:
      if (lookahead == 'c') ADVANCE(30);
      END_STATE();
    case 21:
      if (lookahead == 'l') ADVANCE(31);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(32);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(33);
      END_STATE();
    case 24:
      if (lookahead == 'v') ADVANCE(34);
      END_STATE();
    case 25:
      if (lookahead == 't') ADVANCE(35);
      END_STATE();
    case 26:
      if (lookahead == 'l') ADVANCE(36);
      END_STATE();
    case 27:
      if (lookahead == 'u') ADVANCE(37);
      END_STATE();
    case 28:
      if (lookahead == 'i') ADVANCE(38);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_enum);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_func);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_impl);
      END_STATE();
    case 32:
      if (lookahead == 'r') ADVANCE(39);
      END_STATE();
    case 33:
      if (lookahead == 's') ADVANCE(40);
      END_STATE();
    case 34:
      if (lookahead == 'a') ADVANCE(41);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(42);
      END_STATE();
    case 36:
      if (lookahead == 'i') ADVANCE(43);
      END_STATE();
    case 37:
      if (lookahead == 'c') ADVANCE(44);
      END_STATE();
    case 38:
      if (lookahead == 'a') ADVANCE(45);
      END_STATE();
    case 39:
      if (lookahead == 'f') ADVANCE(46);
      if (lookahead == 'n') ADVANCE(47);
      END_STATE();
    case 40:
      if (lookahead == 'p') ADVANCE(48);
      END_STATE();
    case 41:
      if (lookahead == 't') ADVANCE(49);
      END_STATE();
    case 42:
      if (lookahead == 'c') ADVANCE(50);
      END_STATE();
    case 43:
      if (lookahead == 'c') ADVANCE(51);
      END_STATE();
    case 44:
      if (lookahead == 't') ADVANCE(52);
      END_STATE();
    case 45:
      if (lookahead == 'n') ADVANCE(53);
      END_STATE();
    case 46:
      if (lookahead == 'a') ADVANCE(54);
      END_STATE();
    case 47:
      if (lookahead == 'a') ADVANCE(55);
      END_STATE();
    case 48:
      if (lookahead == 'a') ADVANCE(56);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(57);
      END_STATE();
    case 50:
      if (lookahead == 't') ADVANCE(58);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_public);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_struct);
      END_STATE();
    case 53:
      if (lookahead == 't') ADVANCE(59);
      END_STATE();
    case 54:
      if (lookahead == 'c') ADVANCE(60);
      END_STATE();
    case 55:
      if (lookahead == 'l') ADVANCE(61);
      END_STATE();
    case 56:
      if (lookahead == 'c') ADVANCE(62);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_private);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(63);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_variant);
      END_STATE();
    case 60:
      if (lookahead == 'e') ADVANCE(64);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_internal);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(65);
      END_STATE();
    case 63:
      if (lookahead == 'd') ADVANCE(66);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_interface);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_namespace);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_protected);
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
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [sym_multiline_comment] = ACTIONS(3),
    [sym_string] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_public] = ACTIONS(1),
    [anon_sym_private] = ACTIONS(1),
    [anon_sym_protected] = ACTIONS(1),
    [anon_sym_internal] = ACTIONS(1),
    [anon_sym_func] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_struct] = ACTIONS(1),
    [anon_sym_variant] = ACTIONS(1),
    [anon_sym_ATstatic] = ACTIONS(1),
    [anon_sym_interface] = ACTIONS(1),
    [anon_sym_impl] = ACTIONS(1),
    [anon_sym_for] = ACTIONS(1),
    [anon_sym_enum] = ACTIONS(1),
    [anon_sym_namespace] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(86),
    [sym_function_definition] = STATE(2),
    [sym_struct_definition] = STATE(2),
    [sym_variant_definition] = STATE(2),
    [sym_interface_definition] = STATE(2),
    [sym_impl_block] = STATE(2),
    [sym_enum_definition] = STATE(2),
    [sym_namespace_definition] = STATE(2),
    [sym_block] = STATE(15),
    [sym_expression] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_SEMI] = ACTIONS(9),
    [sym_comment] = ACTIONS(3),
    [sym_multiline_comment] = ACTIONS(3),
    [sym_string] = ACTIONS(11),
    [anon_sym_AT] = ACTIONS(13),
    [anon_sym_public] = ACTIONS(15),
    [anon_sym_private] = ACTIONS(15),
    [anon_sym_protected] = ACTIONS(17),
    [anon_sym_internal] = ACTIONS(17),
    [anon_sym_func] = ACTIONS(19),
    [anon_sym_struct] = ACTIONS(21),
    [anon_sym_variant] = ACTIONS(23),
    [anon_sym_ATstatic] = ACTIONS(25),
    [anon_sym_interface] = ACTIONS(27),
    [anon_sym_impl] = ACTIONS(29),
    [anon_sym_enum] = ACTIONS(31),
    [anon_sym_namespace] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(35),
    [sym_number] = ACTIONS(11),
  },
  [2] = {
    [sym_function_definition] = STATE(3),
    [sym_struct_definition] = STATE(3),
    [sym_variant_definition] = STATE(3),
    [sym_interface_definition] = STATE(3),
    [sym_impl_block] = STATE(3),
    [sym_enum_definition] = STATE(3),
    [sym_namespace_definition] = STATE(3),
    [sym_block] = STATE(15),
    [sym_expression] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(37),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_SEMI] = ACTIONS(39),
    [sym_comment] = ACTIONS(3),
    [sym_multiline_comment] = ACTIONS(3),
    [sym_string] = ACTIONS(11),
    [anon_sym_AT] = ACTIONS(13),
    [anon_sym_public] = ACTIONS(15),
    [anon_sym_private] = ACTIONS(15),
    [anon_sym_protected] = ACTIONS(17),
    [anon_sym_internal] = ACTIONS(17),
    [anon_sym_func] = ACTIONS(19),
    [anon_sym_struct] = ACTIONS(21),
    [anon_sym_variant] = ACTIONS(23),
    [anon_sym_ATstatic] = ACTIONS(25),
    [anon_sym_interface] = ACTIONS(27),
    [anon_sym_impl] = ACTIONS(29),
    [anon_sym_enum] = ACTIONS(31),
    [anon_sym_namespace] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(35),
    [sym_number] = ACTIONS(11),
  },
  [3] = {
    [sym_function_definition] = STATE(3),
    [sym_struct_definition] = STATE(3),
    [sym_variant_definition] = STATE(3),
    [sym_interface_definition] = STATE(3),
    [sym_impl_block] = STATE(3),
    [sym_enum_definition] = STATE(3),
    [sym_namespace_definition] = STATE(3),
    [sym_block] = STATE(15),
    [sym_expression] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(41),
    [sym_identifier] = ACTIONS(43),
    [anon_sym_SEMI] = ACTIONS(46),
    [sym_comment] = ACTIONS(3),
    [sym_multiline_comment] = ACTIONS(3),
    [sym_string] = ACTIONS(49),
    [anon_sym_AT] = ACTIONS(52),
    [anon_sym_public] = ACTIONS(55),
    [anon_sym_private] = ACTIONS(55),
    [anon_sym_protected] = ACTIONS(58),
    [anon_sym_internal] = ACTIONS(58),
    [anon_sym_func] = ACTIONS(61),
    [anon_sym_struct] = ACTIONS(64),
    [anon_sym_variant] = ACTIONS(67),
    [anon_sym_ATstatic] = ACTIONS(70),
    [anon_sym_interface] = ACTIONS(73),
    [anon_sym_impl] = ACTIONS(76),
    [anon_sym_enum] = ACTIONS(79),
    [anon_sym_namespace] = ACTIONS(82),
    [anon_sym_LBRACE] = ACTIONS(85),
    [sym_number] = ACTIONS(49),
  },
  [4] = {
    [sym_block] = STATE(21),
    [ts_builtin_sym_end] = ACTIONS(88),
    [sym_identifier] = ACTIONS(90),
    [anon_sym_SEMI] = ACTIONS(88),
    [sym_comment] = ACTIONS(3),
    [sym_multiline_comment] = ACTIONS(3),
    [sym_string] = ACTIONS(88),
    [anon_sym_AT] = ACTIONS(90),
    [anon_sym_public] = ACTIONS(90),
    [anon_sym_private] = ACTIONS(90),
    [anon_sym_protected] = ACTIONS(90),
    [anon_sym_internal] = ACTIONS(90),
    [anon_sym_func] = ACTIONS(90),
    [anon_sym_COLON] = ACTIONS(92),
    [anon_sym_struct] = ACTIONS(90),
    [anon_sym_variant] = ACTIONS(90),
    [anon_sym_ATstatic] = ACTIONS(88),
    [anon_sym_interface] = ACTIONS(90),
    [anon_sym_impl] = ACTIONS(90),
    [anon_sym_enum] = ACTIONS(90),
    [anon_sym_namespace] = ACTIONS(90),
    [anon_sym_LBRACE] = ACTIONS(94),
    [sym_number] = ACTIONS(88),
  },
  [5] = {
    [sym_block] = STATE(34),
    [ts_builtin_sym_end] = ACTIONS(97),
    [sym_identifier] = ACTIONS(99),
    [anon_sym_SEMI] = ACTIONS(97),
    [sym_comment] = ACTIONS(3),
    [sym_multiline_comment] = ACTIONS(3),
    [sym_string] = ACTIONS(97),
    [anon_sym_AT] = ACTIONS(99),
    [anon_sym_public] = ACTIONS(99),
    [anon_sym_private] = ACTIONS(99),
    [anon_sym_protected] = ACTIONS(99),
    [anon_sym_internal] = ACTIONS(99),
    [anon_sym_func] = ACTIONS(99),
    [anon_sym_COLON] = ACTIONS(101),
    [anon_sym_struct] = ACTIONS(99),
    [anon_sym_variant] = ACTIONS(99),
    [anon_sym_ATstatic] = ACTIONS(97),
    [anon_sym_interface] = ACTIONS(99),
    [anon_sym_impl] = ACTIONS(99),
    [anon_sym_enum] = ACTIONS(99),
    [anon_sym_namespace] = ACTIONS(99),
    [anon_sym_LBRACE] = ACTIONS(103),
    [sym_number] = ACTIONS(97),
  },
  [6] = {
    [sym_block] = STATE(28),
    [ts_builtin_sym_end] = ACTIONS(106),
    [sym_identifier] = ACTIONS(108),
    [anon_sym_SEMI] = ACTIONS(106),
    [sym_comment] = ACTIONS(3),
    [sym_multiline_comment] = ACTIONS(3),
    [sym_string] = ACTIONS(106),
    [anon_sym_AT] = ACTIONS(108),
    [anon_sym_public] = ACTIONS(108),
    [anon_sym_private] = ACTIONS(108),
    [anon_sym_protected] = ACTIONS(108),
    [anon_sym_internal] = ACTIONS(108),
    [anon_sym_func] = ACTIONS(108),
    [anon_sym_COLON] = ACTIONS(110),
    [anon_sym_struct] = ACTIONS(108),
    [anon_sym_variant] = ACTIONS(108),
    [anon_sym_ATstatic] = ACTIONS(106),
    [anon_sym_interface] = ACTIONS(108),
    [anon_sym_impl] = ACTIONS(108),
    [anon_sym_enum] = ACTIONS(108),
    [anon_sym_namespace] = ACTIONS(108),
    [anon_sym_LBRACE] = ACTIONS(112),
    [sym_number] = ACTIONS(106),
  },
  [7] = {
    [sym_block] = STATE(32),
    [ts_builtin_sym_end] = ACTIONS(115),
    [sym_identifier] = ACTIONS(117),
    [anon_sym_SEMI] = ACTIONS(115),
    [sym_comment] = ACTIONS(3),
    [sym_multiline_comment] = ACTIONS(3),
    [sym_string] = ACTIONS(115),
    [anon_sym_AT] = ACTIONS(117),
    [anon_sym_public] = ACTIONS(117),
    [anon_sym_private] = ACTIONS(117),
    [anon_sym_protected] = ACTIONS(117),
    [anon_sym_internal] = ACTIONS(117),
    [anon_sym_func] = ACTIONS(117),
    [anon_sym_COLON] = ACTIONS(119),
    [anon_sym_struct] = ACTIONS(117),
    [anon_sym_variant] = ACTIONS(117),
    [anon_sym_ATstatic] = ACTIONS(115),
    [anon_sym_interface] = ACTIONS(117),
    [anon_sym_impl] = ACTIONS(117),
    [anon_sym_enum] = ACTIONS(117),
    [anon_sym_namespace] = ACTIONS(117),
    [anon_sym_LBRACE] = ACTIONS(121),
    [sym_number] = ACTIONS(115),
  },
  [8] = {
    [sym_block] = STATE(23),
    [ts_builtin_sym_end] = ACTIONS(124),
    [sym_identifier] = ACTIONS(126),
    [anon_sym_SEMI] = ACTIONS(124),
    [sym_comment] = ACTIONS(3),
    [sym_multiline_comment] = ACTIONS(3),
    [sym_string] = ACTIONS(124),
    [anon_sym_AT] = ACTIONS(126),
    [anon_sym_public] = ACTIONS(126),
    [anon_sym_private] = ACTIONS(126),
    [anon_sym_protected] = ACTIONS(126),
    [anon_sym_internal] = ACTIONS(126),
    [anon_sym_func] = ACTIONS(126),
    [anon_sym_COLON] = ACTIONS(128),
    [anon_sym_struct] = ACTIONS(126),
    [anon_sym_variant] = ACTIONS(126),
    [anon_sym_ATstatic] = ACTIONS(124),
    [anon_sym_interface] = ACTIONS(126),
    [anon_sym_impl] = ACTIONS(126),
    [anon_sym_enum] = ACTIONS(126),
    [anon_sym_namespace] = ACTIONS(126),
    [anon_sym_LBRACE] = ACTIONS(130),
    [sym_number] = ACTIONS(124),
  },
  [9] = {
    [sym_block] = STATE(23),
    [ts_builtin_sym_end] = ACTIONS(124),
    [sym_identifier] = ACTIONS(126),
    [anon_sym_SEMI] = ACTIONS(124),
    [sym_comment] = ACTIONS(3),
    [sym_multiline_comment] = ACTIONS(3),
    [sym_string] = ACTIONS(124),
    [anon_sym_AT] = ACTIONS(126),
    [anon_sym_public] = ACTIONS(126),
    [anon_sym_private] = ACTIONS(126),
    [anon_sym_protected] = ACTIONS(126),
    [anon_sym_internal] = ACTIONS(126),
    [anon_sym_func] = ACTIONS(126),
    [anon_sym_struct] = ACTIONS(126),
    [anon_sym_variant] = ACTIONS(126),
    [anon_sym_ATstatic] = ACTIONS(124),
    [anon_sym_interface] = ACTIONS(126),
    [anon_sym_impl] = ACTIONS(126),
    [anon_sym_enum] = ACTIONS(126),
    [anon_sym_namespace] = ACTIONS(126),
    [anon_sym_LBRACE] = ACTIONS(130),
    [sym_number] = ACTIONS(124),
  },
  [10] = {
    [sym_block] = STATE(28),
    [ts_builtin_sym_end] = ACTIONS(106),
    [sym_identifier] = ACTIONS(108),
    [anon_sym_SEMI] = ACTIONS(106),
    [sym_comment] = ACTIONS(3),
    [sym_multiline_comment] = ACTIONS(3),
    [sym_string] = ACTIONS(106),
    [anon_sym_AT] = ACTIONS(108),
    [anon_sym_public] = ACTIONS(108),
    [anon_sym_private] = ACTIONS(108),
    [anon_sym_protected] = ACTIONS(108),
    [anon_sym_internal] = ACTIONS(108),
    [anon_sym_func] = ACTIONS(108),
    [anon_sym_struct] = ACTIONS(108),
    [anon_sym_variant] = ACTIONS(108),
    [anon_sym_ATstatic] = ACTIONS(106),
    [anon_sym_interface] = ACTIONS(108),
    [anon_sym_impl] = ACTIONS(108),
    [anon_sym_enum] = ACTIONS(108),
    [anon_sym_namespace] = ACTIONS(108),
    [anon_sym_LBRACE] = ACTIONS(112),
    [sym_number] = ACTIONS(106),
  },
  [11] = {
    [ts_builtin_sym_end] = ACTIONS(133),
    [sym_identifier] = ACTIONS(135),
    [anon_sym_SEMI] = ACTIONS(133),
    [sym_comment] = ACTIONS(3),
    [sym_multiline_comment] = ACTIONS(3),
    [sym_string] = ACTIONS(133),
    [anon_sym_AT] = ACTIONS(135),
    [anon_sym_public] = ACTIONS(135),
    [anon_sym_private] = ACTIONS(135),
    [anon_sym_protected] = ACTIONS(135),
    [anon_sym_internal] = ACTIONS(135),
    [anon_sym_func] = ACTIONS(135),
    [anon_sym_struct] = ACTIONS(135),
    [anon_sym_variant] = ACTIONS(135),
    [anon_sym_ATstatic] = ACTIONS(133),
    [anon_sym_interface] = ACTIONS(135),
    [anon_sym_impl] = ACTIONS(135),
    [anon_sym_enum] = ACTIONS(135),
    [anon_sym_namespace] = ACTIONS(135),
    [anon_sym_LBRACE] = ACTIONS(133),
    [anon_sym_RBRACE] = ACTIONS(133),
    [sym_number] = ACTIONS(133),
  },
  [12] = {
    [sym_block] = STATE(33),
    [ts_builtin_sym_end] = ACTIONS(137),
    [sym_identifier] = ACTIONS(139),
    [anon_sym_SEMI] = ACTIONS(137),
    [sym_comment] = ACTIONS(3),
    [sym_multiline_comment] = ACTIONS(3),
    [sym_string] = ACTIONS(137),
    [anon_sym_AT] = ACTIONS(139),
    [anon_sym_public] = ACTIONS(139),
    [anon_sym_private] = ACTIONS(139),
    [anon_sym_protected] = ACTIONS(139),
    [anon_sym_internal] = ACTIONS(139),
    [anon_sym_func] = ACTIONS(139),
    [anon_sym_struct] = ACTIONS(139),
    [anon_sym_variant] = ACTIONS(139),
    [anon_sym_ATstatic] = ACTIONS(137),
    [anon_sym_interface] = ACTIONS(139),
    [anon_sym_impl] = ACTIONS(139),
    [anon_sym_enum] = ACTIONS(139),
    [anon_sym_namespace] = ACTIONS(139),
    [anon_sym_LBRACE] = ACTIONS(141),
    [sym_number] = ACTIONS(137),
  },
  [13] = {
    [sym_block] = STATE(32),
    [ts_builtin_sym_end] = ACTIONS(115),
    [sym_identifier] = ACTIONS(117),
    [anon_sym_SEMI] = ACTIONS(115),
    [sym_comment] = ACTIONS(3),
    [sym_multiline_comment] = ACTIONS(3),
    [sym_string] = ACTIONS(115),
    [anon_sym_AT] = ACTIONS(117),
    [anon_sym_public] = ACTIONS(117),
    [anon_sym_private] = ACTIONS(117),
    [anon_sym_protected] = ACTIONS(117),
    [anon_sym_internal] = ACTIONS(117),
    [anon_sym_func] = ACTIONS(117),
    [anon_sym_struct] = ACTIONS(117),
    [anon_sym_variant] = ACTIONS(117),
    [anon_sym_ATstatic] = ACTIONS(115),
    [anon_sym_interface] = ACTIONS(117),
    [anon_sym_impl] = ACTIONS(117),
    [anon_sym_enum] = ACTIONS(117),
    [anon_sym_namespace] = ACTIONS(117),
    [anon_sym_LBRACE] = ACTIONS(121),
    [sym_number] = ACTIONS(115),
  },
  [14] = {
    [ts_builtin_sym_end] = ACTIONS(144),
    [sym_identifier] = ACTIONS(146),
    [anon_sym_SEMI] = ACTIONS(144),
    [sym_comment] = ACTIONS(3),
    [sym_multiline_comment] = ACTIONS(3),
    [sym_string] = ACTIONS(144),
    [anon_sym_AT] = ACTIONS(146),
    [anon_sym_public] = ACTIONS(146),
    [anon_sym_private] = ACTIONS(146),
    [anon_sym_protected] = ACTIONS(146),
    [anon_sym_internal] = ACTIONS(146),
    [anon_sym_func] = ACTIONS(146),
    [anon_sym_struct] = ACTIONS(146),
    [anon_sym_variant] = ACTIONS(146),
    [anon_sym_ATstatic] = ACTIONS(144),
    [anon_sym_interface] = ACTIONS(146),
    [anon_sym_impl] = ACTIONS(146),
    [anon_sym_enum] = ACTIONS(146),
    [anon_sym_namespace] = ACTIONS(146),
    [anon_sym_LBRACE] = ACTIONS(144),
    [anon_sym_RBRACE] = ACTIONS(144),
    [sym_number] = ACTIONS(144),
  },
  [15] = {
    [ts_builtin_sym_end] = ACTIONS(148),
    [sym_identifier] = ACTIONS(150),
    [anon_sym_SEMI] = ACTIONS(148),
    [sym_comment] = ACTIONS(3),
    [sym_multiline_comment] = ACTIONS(3),
    [sym_string] = ACTIONS(148),
    [anon_sym_AT] = ACTIONS(150),
    [anon_sym_public] = ACTIONS(150),
    [anon_sym_private] = ACTIONS(150),
    [anon_sym_protected] = ACTIONS(150),
    [anon_sym_internal] = ACTIONS(150),
    [anon_sym_func] = ACTIONS(150),
    [anon_sym_struct] = ACTIONS(150),
    [anon_sym_variant] = ACTIONS(150),
    [anon_sym_ATstatic] = ACTIONS(148),
    [anon_sym_interface] = ACTIONS(150),
    [anon_sym_impl] = ACTIONS(150),
    [anon_sym_enum] = ACTIONS(150),
    [anon_sym_namespace] = ACTIONS(150),
    [anon_sym_LBRACE] = ACTIONS(148),
    [anon_sym_RBRACE] = ACTIONS(148),
    [sym_number] = ACTIONS(148),
  },
  [16] = {
    [sym_block] = STATE(24),
    [ts_builtin_sym_end] = ACTIONS(152),
    [sym_identifier] = ACTIONS(154),
    [anon_sym_SEMI] = ACTIONS(152),
    [sym_comment] = ACTIONS(3),
    [sym_multiline_comment] = ACTIONS(3),
    [sym_string] = ACTIONS(152),
    [anon_sym_AT] = ACTIONS(154),
    [anon_sym_public] = ACTIONS(154),
    [anon_sym_private] = ACTIONS(154),
    [anon_sym_protected] = ACTIONS(154),
    [anon_sym_internal] = ACTIONS(154),
    [anon_sym_func] = ACTIONS(154),
    [anon_sym_struct] = ACTIONS(154),
    [anon_sym_variant] = ACTIONS(154),
    [anon_sym_ATstatic] = ACTIONS(152),
    [anon_sym_interface] = ACTIONS(154),
    [anon_sym_impl] = ACTIONS(154),
    [anon_sym_enum] = ACTIONS(154),
    [anon_sym_namespace] = ACTIONS(154),
    [anon_sym_LBRACE] = ACTIONS(156),
    [sym_number] = ACTIONS(152),
  },
  [17] = {
    [ts_builtin_sym_end] = ACTIONS(159),
    [sym_identifier] = ACTIONS(161),
    [anon_sym_SEMI] = ACTIONS(159),
    [sym_comment] = ACTIONS(3),
    [sym_multiline_comment] = ACTIONS(3),
    [sym_string] = ACTIONS(159),
    [anon_sym_AT] = ACTIONS(161),
    [anon_sym_public] = ACTIONS(161),
    [anon_sym_private] = ACTIONS(161),
    [anon_sym_protected] = ACTIONS(161),
    [anon_sym_internal] = ACTIONS(161),
    [anon_sym_func] = ACTIONS(161),
    [anon_sym_struct] = ACTIONS(161),
    [anon_sym_variant] = ACTIONS(161),
    [anon_sym_ATstatic] = ACTIONS(159),
    [anon_sym_interface] = ACTIONS(161),
    [anon_sym_impl] = ACTIONS(161),
    [anon_sym_enum] = ACTIONS(161),
    [anon_sym_namespace] = ACTIONS(161),
    [anon_sym_LBRACE] = ACTIONS(159),
    [sym_number] = ACTIONS(159),
  },
  [18] = {
    [ts_builtin_sym_end] = ACTIONS(163),
    [sym_identifier] = ACTIONS(165),
    [anon_sym_SEMI] = ACTIONS(163),
    [sym_comment] = ACTIONS(3),
    [sym_multiline_comment] = ACTIONS(3),
    [sym_string] = ACTIONS(163),
    [anon_sym_AT] = ACTIONS(165),
    [anon_sym_public] = ACTIONS(165),
    [anon_sym_private] = ACTIONS(165),
    [anon_sym_protected] = ACTIONS(165),
    [anon_sym_internal] = ACTIONS(165),
    [anon_sym_func] = ACTIONS(165),
    [anon_sym_struct] = ACTIONS(165),
    [anon_sym_variant] = ACTIONS(165),
    [anon_sym_ATstatic] = ACTIONS(163),
    [anon_sym_interface] = ACTIONS(165),
    [anon_sym_impl] = ACTIONS(165),
    [anon_sym_enum] = ACTIONS(165),
    [anon_sym_namespace] = ACTIONS(165),
    [anon_sym_LBRACE] = ACTIONS(163),
    [sym_number] = ACTIONS(163),
  },
  [19] = {
    [ts_builtin_sym_end] = ACTIONS(167),
    [sym_identifier] = ACTIONS(169),
    [anon_sym_SEMI] = ACTIONS(167),
    [sym_comment] = ACTIONS(3),
    [sym_multiline_comment] = ACTIONS(3),
    [sym_string] = ACTIONS(167),
    [anon_sym_AT] = ACTIONS(169),
    [anon_sym_public] = ACTIONS(169),
    [anon_sym_private] = ACTIONS(169),
    [anon_sym_protected] = ACTIONS(169),
    [anon_sym_internal] = ACTIONS(169),
    [anon_sym_func] = ACTIONS(169),
    [anon_sym_struct] = ACTIONS(169),
    [anon_sym_variant] = ACTIONS(169),
    [anon_sym_ATstatic] = ACTIONS(167),
    [anon_sym_interface] = ACTIONS(169),
    [anon_sym_impl] = ACTIONS(169),
    [anon_sym_enum] = ACTIONS(169),
    [anon_sym_namespace] = ACTIONS(169),
    [anon_sym_LBRACE] = ACTIONS(167),
    [sym_number] = ACTIONS(167),
  },
  [20] = {
    [ts_builtin_sym_end] = ACTIONS(171),
    [sym_identifier] = ACTIONS(173),
    [anon_sym_SEMI] = ACTIONS(171),
    [sym_comment] = ACTIONS(3),
    [sym_multiline_comment] = ACTIONS(3),
    [sym_string] = ACTIONS(171),
    [anon_sym_AT] = ACTIONS(173),
    [anon_sym_public] = ACTIONS(173),
    [anon_sym_private] = ACTIONS(173),
    [anon_sym_protected] = ACTIONS(173),
    [anon_sym_internal] = ACTIONS(173),
    [anon_sym_func] = ACTIONS(173),
    [anon_sym_struct] = ACTIONS(173),
    [anon_sym_variant] = ACTIONS(173),
    [anon_sym_ATstatic] = ACTIONS(171),
    [anon_sym_interface] = ACTIONS(173),
    [anon_sym_impl] = ACTIONS(173),
    [anon_sym_enum] = ACTIONS(173),
    [anon_sym_namespace] = ACTIONS(173),
    [anon_sym_LBRACE] = ACTIONS(171),
    [sym_number] = ACTIONS(171),
  },
  [21] = {
    [ts_builtin_sym_end] = ACTIONS(106),
    [sym_identifier] = ACTIONS(108),
    [anon_sym_SEMI] = ACTIONS(106),
    [sym_comment] = ACTIONS(3),
    [sym_multiline_comment] = ACTIONS(3),
    [sym_string] = ACTIONS(106),
    [anon_sym_AT] = ACTIONS(108),
    [anon_sym_public] = ACTIONS(108),
    [anon_sym_private] = ACTIONS(108),
    [anon_sym_protected] = ACTIONS(108),
    [anon_sym_internal] = ACTIONS(108),
    [anon_sym_func] = ACTIONS(108),
    [anon_sym_struct] = ACTIONS(108),
    [anon_sym_variant] = ACTIONS(108),
    [anon_sym_ATstatic] = ACTIONS(106),
    [anon_sym_interface] = ACTIONS(108),
    [anon_sym_impl] = ACTIONS(108),
    [anon_sym_enum] = ACTIONS(108),
    [anon_sym_namespace] = ACTIONS(108),
    [anon_sym_LBRACE] = ACTIONS(106),
    [sym_number] = ACTIONS(106),
  },
  [22] = {
    [ts_builtin_sym_end] = ACTIONS(175),
    [sym_identifier] = ACTIONS(177),
    [anon_sym_SEMI] = ACTIONS(175),
    [sym_comment] = ACTIONS(3),
    [sym_multiline_comment] = ACTIONS(3),
    [sym_string] = ACTIONS(175),
    [anon_sym_AT] = ACTIONS(177),
    [anon_sym_public] = ACTIONS(177),
    [anon_sym_private] = ACTIONS(177),
    [anon_sym_protected] = ACTIONS(177),
    [anon_sym_internal] = ACTIONS(177),
    [anon_sym_func] = ACTIONS(177),
    [anon_sym_struct] = ACTIONS(177),
    [anon_sym_variant] = ACTIONS(177),
    [anon_sym_ATstatic] = ACTIONS(175),
    [anon_sym_interface] = ACTIONS(177),
    [anon_sym_impl] = ACTIONS(177),
    [anon_sym_enum] = ACTIONS(177),
    [anon_sym_namespace] = ACTIONS(177),
    [anon_sym_LBRACE] = ACTIONS(175),
    [sym_number] = ACTIONS(175),
  },
  [23] = {
    [ts_builtin_sym_end] = ACTIONS(152),
    [sym_identifier] = ACTIONS(154),
    [anon_sym_SEMI] = ACTIONS(152),
    [sym_comment] = ACTIONS(3),
    [sym_multiline_comment] = ACTIONS(3),
    [sym_string] = ACTIONS(152),
    [anon_sym_AT] = ACTIONS(154),
    [anon_sym_public] = ACTIONS(154),
    [anon_sym_private] = ACTIONS(154),
    [anon_sym_protected] = ACTIONS(154),
    [anon_sym_internal] = ACTIONS(154),
    [anon_sym_func] = ACTIONS(154),
    [anon_sym_struct] = ACTIONS(154),
    [anon_sym_variant] = ACTIONS(154),
    [anon_sym_ATstatic] = ACTIONS(152),
    [anon_sym_interface] = ACTIONS(154),
    [anon_sym_impl] = ACTIONS(154),
    [anon_sym_enum] = ACTIONS(154),
    [anon_sym_namespace] = ACTIONS(154),
    [anon_sym_LBRACE] = ACTIONS(152),
    [sym_number] = ACTIONS(152),
  },
  [24] = {
    [ts_builtin_sym_end] = ACTIONS(137),
    [sym_identifier] = ACTIONS(139),
    [anon_sym_SEMI] = ACTIONS(137),
    [sym_comment] = ACTIONS(3),
    [sym_multiline_comment] = ACTIONS(3),
    [sym_string] = ACTIONS(137),
    [anon_sym_AT] = ACTIONS(139),
    [anon_sym_public] = ACTIONS(139),
    [anon_sym_private] = ACTIONS(139),
    [anon_sym_protected] = ACTIONS(139),
    [anon_sym_internal] = ACTIONS(139),
    [anon_sym_func] = ACTIONS(139),
    [anon_sym_struct] = ACTIONS(139),
    [anon_sym_variant] = ACTIONS(139),
    [anon_sym_ATstatic] = ACTIONS(137),
    [anon_sym_interface] = ACTIONS(139),
    [anon_sym_impl] = ACTIONS(139),
    [anon_sym_enum] = ACTIONS(139),
    [anon_sym_namespace] = ACTIONS(139),
    [anon_sym_LBRACE] = ACTIONS(137),
    [sym_number] = ACTIONS(137),
  },
  [25] = {
    [ts_builtin_sym_end] = ACTIONS(179),
    [sym_identifier] = ACTIONS(181),
    [anon_sym_SEMI] = ACTIONS(179),
    [sym_comment] = ACTIONS(3),
    [sym_multiline_comment] = ACTIONS(3),
    [sym_string] = ACTIONS(179),
    [anon_sym_AT] = ACTIONS(181),
    [anon_sym_public] = ACTIONS(181),
    [anon_sym_private] = ACTIONS(181),
    [anon_sym_protected] = ACTIONS(181),
    [anon_sym_internal] = ACTIONS(181),
    [anon_sym_func] = ACTIONS(181),
    [anon_sym_struct] = ACTIONS(181),
    [anon_sym_variant] = ACTIONS(181),
    [anon_sym_ATstatic] = ACTIONS(179),
    [anon_sym_interface] = ACTIONS(181),
    [anon_sym_impl] = ACTIONS(181),
    [anon_sym_enum] = ACTIONS(181),
    [anon_sym_namespace] = ACTIONS(181),
    [anon_sym_LBRACE] = ACTIONS(179),
    [sym_number] = ACTIONS(179),
  },
  [26] = {
    [ts_builtin_sym_end] = ACTIONS(183),
    [sym_identifier] = ACTIONS(185),
    [anon_sym_SEMI] = ACTIONS(183),
    [sym_comment] = ACTIONS(3),
    [sym_multiline_comment] = ACTIONS(3),
    [sym_string] = ACTIONS(183),
    [anon_sym_AT] = ACTIONS(185),
    [anon_sym_public] = ACTIONS(185),
    [anon_sym_private] = ACTIONS(185),
    [anon_sym_protected] = ACTIONS(185),
    [anon_sym_internal] = ACTIONS(185),
    [anon_sym_func] = ACTIONS(185),
    [anon_sym_struct] = ACTIONS(185),
    [anon_sym_variant] = ACTIONS(185),
    [anon_sym_ATstatic] = ACTIONS(183),
    [anon_sym_interface] = ACTIONS(185),
    [anon_sym_impl] = ACTIONS(185),
    [anon_sym_enum] = ACTIONS(185),
    [anon_sym_namespace] = ACTIONS(185),
    [anon_sym_LBRACE] = ACTIONS(183),
    [sym_number] = ACTIONS(183),
  },
  [27] = {
    [ts_builtin_sym_end] = ACTIONS(187),
    [sym_identifier] = ACTIONS(189),
    [anon_sym_SEMI] = ACTIONS(187),
    [sym_comment] = ACTIONS(3),
    [sym_multiline_comment] = ACTIONS(3),
    [sym_string] = ACTIONS(187),
    [anon_sym_AT] = ACTIONS(189),
    [anon_sym_public] = ACTIONS(189),
    [anon_sym_private] = ACTIONS(189),
    [anon_sym_protected] = ACTIONS(189),
    [anon_sym_internal] = ACTIONS(189),
    [anon_sym_func] = ACTIONS(189),
    [anon_sym_struct] = ACTIONS(189),
    [anon_sym_variant] = ACTIONS(189),
    [anon_sym_ATstatic] = ACTIONS(187),
    [anon_sym_interface] = ACTIONS(189),
    [anon_sym_impl] = ACTIONS(189),
    [anon_sym_enum] = ACTIONS(189),
    [anon_sym_namespace] = ACTIONS(189),
    [anon_sym_LBRACE] = ACTIONS(187),
    [sym_number] = ACTIONS(187),
  },
  [28] = {
    [ts_builtin_sym_end] = ACTIONS(115),
    [sym_identifier] = ACTIONS(117),
    [anon_sym_SEMI] = ACTIONS(115),
    [sym_comment] = ACTIONS(3),
    [sym_multiline_comment] = ACTIONS(3),
    [sym_string] = ACTIONS(115),
    [anon_sym_AT] = ACTIONS(117),
    [anon_sym_public] = ACTIONS(117),
    [anon_sym_private] = ACTIONS(117),
    [anon_sym_protected] = ACTIONS(117),
    [anon_sym_internal] = ACTIONS(117),
    [anon_sym_func] = ACTIONS(117),
    [anon_sym_struct] = ACTIONS(117),
    [anon_sym_variant] = ACTIONS(117),
    [anon_sym_ATstatic] = ACTIONS(115),
    [anon_sym_interface] = ACTIONS(117),
    [anon_sym_impl] = ACTIONS(117),
    [anon_sym_enum] = ACTIONS(117),
    [anon_sym_namespace] = ACTIONS(117),
    [anon_sym_LBRACE] = ACTIONS(115),
    [sym_number] = ACTIONS(115),
  },
  [29] = {
    [ts_builtin_sym_end] = ACTIONS(191),
    [sym_identifier] = ACTIONS(193),
    [anon_sym_SEMI] = ACTIONS(191),
    [sym_comment] = ACTIONS(3),
    [sym_multiline_comment] = ACTIONS(3),
    [sym_string] = ACTIONS(191),
    [anon_sym_AT] = ACTIONS(193),
    [anon_sym_public] = ACTIONS(193),
    [anon_sym_private] = ACTIONS(193),
    [anon_sym_protected] = ACTIONS(193),
    [anon_sym_internal] = ACTIONS(193),
    [anon_sym_func] = ACTIONS(193),
    [anon_sym_struct] = ACTIONS(193),
    [anon_sym_variant] = ACTIONS(193),
    [anon_sym_ATstatic] = ACTIONS(191),
    [anon_sym_interface] = ACTIONS(193),
    [anon_sym_impl] = ACTIONS(193),
    [anon_sym_enum] = ACTIONS(193),
    [anon_sym_namespace] = ACTIONS(193),
    [anon_sym_LBRACE] = ACTIONS(191),
    [sym_number] = ACTIONS(191),
  },
  [30] = {
    [ts_builtin_sym_end] = ACTIONS(195),
    [sym_identifier] = ACTIONS(197),
    [anon_sym_SEMI] = ACTIONS(195),
    [sym_comment] = ACTIONS(3),
    [sym_multiline_comment] = ACTIONS(3),
    [sym_string] = ACTIONS(195),
    [anon_sym_AT] = ACTIONS(197),
    [anon_sym_public] = ACTIONS(197),
    [anon_sym_private] = ACTIONS(197),
    [anon_sym_protected] = ACTIONS(197),
    [anon_sym_internal] = ACTIONS(197),
    [anon_sym_func] = ACTIONS(197),
    [anon_sym_struct] = ACTIONS(197),
    [anon_sym_variant] = ACTIONS(197),
    [anon_sym_ATstatic] = ACTIONS(195),
    [anon_sym_interface] = ACTIONS(197),
    [anon_sym_impl] = ACTIONS(197),
    [anon_sym_enum] = ACTIONS(197),
    [anon_sym_namespace] = ACTIONS(197),
    [anon_sym_LBRACE] = ACTIONS(195),
    [sym_number] = ACTIONS(195),
  },
  [31] = {
    [ts_builtin_sym_end] = ACTIONS(199),
    [sym_identifier] = ACTIONS(201),
    [anon_sym_SEMI] = ACTIONS(199),
    [sym_comment] = ACTIONS(3),
    [sym_multiline_comment] = ACTIONS(3),
    [sym_string] = ACTIONS(199),
    [anon_sym_AT] = ACTIONS(201),
    [anon_sym_public] = ACTIONS(201),
    [anon_sym_private] = ACTIONS(201),
    [anon_sym_protected] = ACTIONS(201),
    [anon_sym_internal] = ACTIONS(201),
    [anon_sym_func] = ACTIONS(201),
    [anon_sym_struct] = ACTIONS(201),
    [anon_sym_variant] = ACTIONS(201),
    [anon_sym_ATstatic] = ACTIONS(199),
    [anon_sym_interface] = ACTIONS(201),
    [anon_sym_impl] = ACTIONS(201),
    [anon_sym_enum] = ACTIONS(201),
    [anon_sym_namespace] = ACTIONS(201),
    [anon_sym_LBRACE] = ACTIONS(199),
    [sym_number] = ACTIONS(199),
  },
  [32] = {
    [ts_builtin_sym_end] = ACTIONS(124),
    [sym_identifier] = ACTIONS(126),
    [anon_sym_SEMI] = ACTIONS(124),
    [sym_comment] = ACTIONS(3),
    [sym_multiline_comment] = ACTIONS(3),
    [sym_string] = ACTIONS(124),
    [anon_sym_AT] = ACTIONS(126),
    [anon_sym_public] = ACTIONS(126),
    [anon_sym_private] = ACTIONS(126),
    [anon_sym_protected] = ACTIONS(126),
    [anon_sym_internal] = ACTIONS(126),
    [anon_sym_func] = ACTIONS(126),
    [anon_sym_struct] = ACTIONS(126),
    [anon_sym_variant] = ACTIONS(126),
    [anon_sym_ATstatic] = ACTIONS(124),
    [anon_sym_interface] = ACTIONS(126),
    [anon_sym_impl] = ACTIONS(126),
    [anon_sym_enum] = ACTIONS(126),
    [anon_sym_namespace] = ACTIONS(126),
    [anon_sym_LBRACE] = ACTIONS(124),
    [sym_number] = ACTIONS(124),
  },
  [33] = {
    [ts_builtin_sym_end] = ACTIONS(203),
    [sym_identifier] = ACTIONS(205),
    [anon_sym_SEMI] = ACTIONS(203),
    [sym_comment] = ACTIONS(3),
    [sym_multiline_comment] = ACTIONS(3),
    [sym_string] = ACTIONS(203),
    [anon_sym_AT] = ACTIONS(205),
    [anon_sym_public] = ACTIONS(205),
    [anon_sym_private] = ACTIONS(205),
    [anon_sym_protected] = ACTIONS(205),
    [anon_sym_internal] = ACTIONS(205),
    [anon_sym_func] = ACTIONS(205),
    [anon_sym_struct] = ACTIONS(205),
    [anon_sym_variant] = ACTIONS(205),
    [anon_sym_ATstatic] = ACTIONS(203),
    [anon_sym_interface] = ACTIONS(205),
    [anon_sym_impl] = ACTIONS(205),
    [anon_sym_enum] = ACTIONS(205),
    [anon_sym_namespace] = ACTIONS(205),
    [anon_sym_LBRACE] = ACTIONS(203),
    [sym_number] = ACTIONS(203),
  },
  [34] = {
    [ts_builtin_sym_end] = ACTIONS(88),
    [sym_identifier] = ACTIONS(90),
    [anon_sym_SEMI] = ACTIONS(88),
    [sym_comment] = ACTIONS(3),
    [sym_multiline_comment] = ACTIONS(3),
    [sym_string] = ACTIONS(88),
    [anon_sym_AT] = ACTIONS(90),
    [anon_sym_public] = ACTIONS(90),
    [anon_sym_private] = ACTIONS(90),
    [anon_sym_protected] = ACTIONS(90),
    [anon_sym_internal] = ACTIONS(90),
    [anon_sym_func] = ACTIONS(90),
    [anon_sym_struct] = ACTIONS(90),
    [anon_sym_variant] = ACTIONS(90),
    [anon_sym_ATstatic] = ACTIONS(88),
    [anon_sym_interface] = ACTIONS(90),
    [anon_sym_impl] = ACTIONS(90),
    [anon_sym_enum] = ACTIONS(90),
    [anon_sym_namespace] = ACTIONS(90),
    [anon_sym_LBRACE] = ACTIONS(88),
    [sym_number] = ACTIONS(88),
  },
  [35] = {
    [ts_builtin_sym_end] = ACTIONS(207),
    [sym_identifier] = ACTIONS(209),
    [anon_sym_SEMI] = ACTIONS(207),
    [sym_comment] = ACTIONS(3),
    [sym_multiline_comment] = ACTIONS(3),
    [sym_string] = ACTIONS(207),
    [anon_sym_AT] = ACTIONS(209),
    [anon_sym_public] = ACTIONS(209),
    [anon_sym_private] = ACTIONS(209),
    [anon_sym_protected] = ACTIONS(209),
    [anon_sym_internal] = ACTIONS(209),
    [anon_sym_func] = ACTIONS(209),
    [anon_sym_struct] = ACTIONS(209),
    [anon_sym_variant] = ACTIONS(209),
    [anon_sym_ATstatic] = ACTIONS(207),
    [anon_sym_interface] = ACTIONS(209),
    [anon_sym_impl] = ACTIONS(209),
    [anon_sym_enum] = ACTIONS(209),
    [anon_sym_namespace] = ACTIONS(209),
    [anon_sym_LBRACE] = ACTIONS(207),
    [sym_number] = ACTIONS(207),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(35), 1,
      anon_sym_LBRACE,
    ACTIONS(211), 1,
      anon_sym_SEMI,
    ACTIONS(213), 1,
      anon_sym_RBRACE,
    STATE(15), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    STATE(38), 2,
      sym_expression,
      aux_sym_block_repeat1,
    ACTIONS(11), 3,
      sym_string,
      sym_identifier,
      sym_number,
  [26] = 7,
    ACTIONS(218), 1,
      anon_sym_SEMI,
    ACTIONS(221), 1,
      anon_sym_LBRACE,
    ACTIONS(224), 1,
      anon_sym_RBRACE,
    STATE(15), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    STATE(37), 2,
      sym_expression,
      aux_sym_block_repeat1,
    ACTIONS(215), 3,
      sym_string,
      sym_identifier,
      sym_number,
  [52] = 7,
    ACTIONS(35), 1,
      anon_sym_LBRACE,
    ACTIONS(226), 1,
      anon_sym_SEMI,
    ACTIONS(228), 1,
      anon_sym_RBRACE,
    STATE(15), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    STATE(37), 2,
      sym_expression,
      aux_sym_block_repeat1,
    ACTIONS(11), 3,
      sym_string,
      sym_identifier,
      sym_number,
  [78] = 8,
    ACTIONS(230), 1,
      anon_sym_func,
    ACTIONS(232), 1,
      anon_sym_struct,
    ACTIONS(234), 1,
      anon_sym_variant,
    ACTIONS(236), 1,
      anon_sym_ATstatic,
    ACTIONS(238), 1,
      anon_sym_interface,
    ACTIONS(240), 1,
      anon_sym_enum,
    ACTIONS(242), 1,
      anon_sym_namespace,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
  [104] = 3,
    ACTIONS(246), 1,
      anon_sym_func,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(244), 4,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_internal,
  [118] = 4,
    ACTIONS(248), 1,
      sym_identifier,
    ACTIONS(250), 1,
      anon_sym_RPAREN,
    STATE(45), 1,
      aux_sym_function_definition_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
  [132] = 4,
    ACTIONS(248), 1,
      sym_identifier,
    ACTIONS(252), 1,
      anon_sym_RPAREN,
    STATE(47), 1,
      aux_sym_function_definition_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
  [146] = 4,
    ACTIONS(248), 1,
      sym_identifier,
    ACTIONS(252), 1,
      anon_sym_RPAREN,
    STATE(45), 1,
      aux_sym_function_definition_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
  [160] = 4,
    ACTIONS(248), 1,
      sym_identifier,
    ACTIONS(254), 1,
      anon_sym_RPAREN,
    STATE(45), 1,
      aux_sym_function_definition_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
  [174] = 4,
    ACTIONS(256), 1,
      sym_identifier,
    ACTIONS(259), 1,
      anon_sym_RPAREN,
    STATE(45), 1,
      aux_sym_function_definition_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
  [188] = 4,
    ACTIONS(248), 1,
      sym_identifier,
    ACTIONS(261), 1,
      anon_sym_RPAREN,
    STATE(41), 1,
      aux_sym_function_definition_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
  [202] = 4,
    ACTIONS(248), 1,
      sym_identifier,
    ACTIONS(263), 1,
      anon_sym_RPAREN,
    STATE(45), 1,
      aux_sym_function_definition_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
  [216] = 4,
    ACTIONS(248), 1,
      sym_identifier,
    ACTIONS(263), 1,
      anon_sym_RPAREN,
    STATE(44), 1,
      aux_sym_function_definition_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
  [230] = 4,
    ACTIONS(248), 1,
      sym_identifier,
    ACTIONS(250), 1,
      anon_sym_RPAREN,
    STATE(43), 1,
      aux_sym_function_definition_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
  [244] = 3,
    ACTIONS(35), 1,
      anon_sym_LBRACE,
    STATE(18), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
  [255] = 3,
    ACTIONS(35), 1,
      anon_sym_LBRACE,
    STATE(25), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
  [266] = 3,
    ACTIONS(35), 1,
      anon_sym_LBRACE,
    STATE(31), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
  [277] = 3,
    ACTIONS(35), 1,
      anon_sym_LBRACE,
    STATE(22), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
  [288] = 3,
    ACTIONS(35), 1,
      anon_sym_LBRACE,
    STATE(30), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
  [299] = 3,
    ACTIONS(35), 1,
      anon_sym_LBRACE,
    STATE(27), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
  [310] = 3,
    ACTIONS(35), 1,
      anon_sym_LBRACE,
    STATE(35), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
  [321] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(265), 2,
      sym_identifier,
      anon_sym_RPAREN,
  [330] = 3,
    ACTIONS(35), 1,
      anon_sym_LBRACE,
    STATE(26), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
  [341] = 3,
    ACTIONS(35), 1,
      anon_sym_LBRACE,
    STATE(17), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
  [352] = 3,
    ACTIONS(35), 1,
      anon_sym_LBRACE,
    STATE(19), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
  [363] = 3,
    ACTIONS(35), 1,
      anon_sym_LBRACE,
    STATE(20), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
  [374] = 3,
    ACTIONS(35), 1,
      anon_sym_LBRACE,
    STATE(29), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
  [385] = 2,
    ACTIONS(267), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
  [393] = 2,
    ACTIONS(269), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
  [401] = 2,
    ACTIONS(271), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
  [409] = 2,
    ACTIONS(273), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
  [417] = 2,
    ACTIONS(275), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
  [425] = 2,
    ACTIONS(277), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
  [433] = 2,
    ACTIONS(279), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
  [441] = 2,
    ACTIONS(281), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
  [449] = 2,
    ACTIONS(283), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
  [457] = 2,
    ACTIONS(285), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
  [465] = 2,
    ACTIONS(287), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
  [473] = 2,
    ACTIONS(289), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
  [481] = 2,
    ACTIONS(291), 1,
      anon_sym_func,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
  [489] = 2,
    ACTIONS(293), 1,
      anon_sym_for,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
  [497] = 2,
    ACTIONS(295), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
  [505] = 2,
    ACTIONS(297), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
  [513] = 2,
    ACTIONS(299), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
  [521] = 2,
    ACTIONS(301), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
  [529] = 2,
    ACTIONS(303), 1,
      anon_sym_interface,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
  [537] = 2,
    ACTIONS(305), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
  [545] = 2,
    ACTIONS(307), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
  [553] = 2,
    ACTIONS(309), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
  [561] = 2,
    ACTIONS(311), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
  [569] = 2,
    ACTIONS(313), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
  [577] = 2,
    ACTIONS(315), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
  [585] = 2,
    ACTIONS(317), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
  [593] = 2,
    ACTIONS(319), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
  [601] = 2,
    ACTIONS(321), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
  [609] = 2,
    ACTIONS(323), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
  [617] = 2,
    ACTIONS(238), 1,
      anon_sym_interface,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
  [625] = 2,
    ACTIONS(325), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
  [633] = 2,
    ACTIONS(327), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
  [641] = 2,
    ACTIONS(329), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
  [649] = 2,
    ACTIONS(331), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
  [657] = 2,
    ACTIONS(230), 1,
      anon_sym_func,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(36)] = 0,
  [SMALL_STATE(37)] = 26,
  [SMALL_STATE(38)] = 52,
  [SMALL_STATE(39)] = 78,
  [SMALL_STATE(40)] = 104,
  [SMALL_STATE(41)] = 118,
  [SMALL_STATE(42)] = 132,
  [SMALL_STATE(43)] = 146,
  [SMALL_STATE(44)] = 160,
  [SMALL_STATE(45)] = 174,
  [SMALL_STATE(46)] = 188,
  [SMALL_STATE(47)] = 202,
  [SMALL_STATE(48)] = 216,
  [SMALL_STATE(49)] = 230,
  [SMALL_STATE(50)] = 244,
  [SMALL_STATE(51)] = 255,
  [SMALL_STATE(52)] = 266,
  [SMALL_STATE(53)] = 277,
  [SMALL_STATE(54)] = 288,
  [SMALL_STATE(55)] = 299,
  [SMALL_STATE(56)] = 310,
  [SMALL_STATE(57)] = 321,
  [SMALL_STATE(58)] = 330,
  [SMALL_STATE(59)] = 341,
  [SMALL_STATE(60)] = 352,
  [SMALL_STATE(61)] = 363,
  [SMALL_STATE(62)] = 374,
  [SMALL_STATE(63)] = 385,
  [SMALL_STATE(64)] = 393,
  [SMALL_STATE(65)] = 401,
  [SMALL_STATE(66)] = 409,
  [SMALL_STATE(67)] = 417,
  [SMALL_STATE(68)] = 425,
  [SMALL_STATE(69)] = 433,
  [SMALL_STATE(70)] = 441,
  [SMALL_STATE(71)] = 449,
  [SMALL_STATE(72)] = 457,
  [SMALL_STATE(73)] = 465,
  [SMALL_STATE(74)] = 473,
  [SMALL_STATE(75)] = 481,
  [SMALL_STATE(76)] = 489,
  [SMALL_STATE(77)] = 497,
  [SMALL_STATE(78)] = 505,
  [SMALL_STATE(79)] = 513,
  [SMALL_STATE(80)] = 521,
  [SMALL_STATE(81)] = 529,
  [SMALL_STATE(82)] = 537,
  [SMALL_STATE(83)] = 545,
  [SMALL_STATE(84)] = 553,
  [SMALL_STATE(85)] = 561,
  [SMALL_STATE(86)] = 569,
  [SMALL_STATE(87)] = 577,
  [SMALL_STATE(88)] = 585,
  [SMALL_STATE(89)] = 593,
  [SMALL_STATE(90)] = 601,
  [SMALL_STATE(91)] = 609,
  [SMALL_STATE(92)] = 617,
  [SMALL_STATE(93)] = 625,
  [SMALL_STATE(94)] = 633,
  [SMALL_STATE(95)] = 641,
  [SMALL_STATE(96)] = 649,
  [SMALL_STATE(97)] = 657,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [43] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(15),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(15),
  [52] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(68),
  [55] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(39),
  [58] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(97),
  [61] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(96),
  [64] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(95),
  [67] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(94),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(92),
  [73] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(91),
  [76] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(90),
  [79] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(89),
  [82] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(87),
  [85] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(36),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 5, 0, 0),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 5, 0, 0),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [94] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_function_definition, 5, 0, 0), SHIFT(36),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 4, 0, 0),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 4, 0, 0),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [103] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_function_definition, 4, 0, 0), SHIFT(36),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 6, 0, 0),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 6, 0, 0),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [112] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_function_definition, 6, 0, 0), SHIFT(36),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 7, 0, 0),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 7, 0, 0),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [121] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_function_definition, 7, 0, 0), SHIFT(36),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 8, 0, 0),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 8, 0, 0),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [130] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_function_definition, 8, 0, 0), SHIFT(36),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2, 0, 0),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2, 0, 0),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 10, 0, 0),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 10, 0, 0),
  [141] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_function_definition, 10, 0, 0), SHIFT(36),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3, 0, 0),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3, 0, 0),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1, 0, 0),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1, 0, 0),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 9, 0, 0),
  [154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 9, 0, 0),
  [156] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_function_definition, 9, 0, 0), SHIFT(36),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_definition, 4, 0, 0),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_definition, 4, 0, 0),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace_definition, 4, 0, 0),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_namespace_definition, 4, 0, 0),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_definition, 4, 0, 0),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interface_definition, 4, 0, 0),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variant_definition, 4, 0, 0),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variant_definition, 4, 0, 0),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_definition, 4, 0, 0),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_definition, 4, 0, 0),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_definition, 3, 0, 0),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_definition, 3, 0, 0),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace_definition, 3, 0, 0),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_namespace_definition, 3, 0, 0),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_definition, 3, 0, 0),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_definition, 3, 0, 0),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_impl_block, 5, 0, 0),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_impl_block, 5, 0, 0),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_definition, 3, 0, 0),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interface_definition, 3, 0, 0),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variant_definition, 3, 0, 0),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variant_definition, 3, 0, 0),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 11, 0, 0),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 11, 0, 0),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_definition, 5, 0, 0),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interface_definition, 5, 0, 0),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [215] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(15),
  [218] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(37),
  [221] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(36),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [256] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(65),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 2, 0, 0),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 3, 0, 0),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [313] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
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

TS_PUBLIC const TSLanguage *tree_sitter_chemical(void) {
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
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym_identifier,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
