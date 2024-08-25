#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 99
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 52
#define ALIAS_COUNT 0
#define TOKEN_COUNT 21
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_LT = 1,
  anon_sym_GT = 2,
  anon_sym_LT_SLASH = 3,
  sym_project_tag_name = 4,
  sym_property_group_tag_name = 5,
  sym_target_framework_tag_name = 6,
  sym_item_group_tag_name = 7,
  anon_sym_SLASH_GT = 8,
  sym_package_reference_tag_name = 9,
  anon_sym_Version = 10,
  anon_sym_EQ = 11,
  anon_sym_Include = 12,
  sym_project_reference_tag_name = 13,
  anon_sym_SPACE = 14,
  sym_attribute_name = 15,
  anon_sym_DQUOTE = 16,
  aux_sym_attribute_value_token1 = 17,
  sym_tag_name = 18,
  sym_text = 19,
  sym_comment = 20,
  sym_project = 21,
  sym_project_open = 22,
  sym_project_close = 23,
  sym_property_group = 24,
  sym_property_group_open = 25,
  sym_property_group_close = 26,
  sym_target_framework = 27,
  sym_target_framework_open = 28,
  sym_target_framework_close = 29,
  sym_item_group = 30,
  sym_item_group_open = 31,
  sym_item_group_close = 32,
  sym_package_reference = 33,
  sym_package_reference_openclose = 34,
  sym_package_reference_version_attribute = 35,
  sym_package_reference_include_attribute = 36,
  sym_project_reference = 37,
  sym_project_reference_openclose = 38,
  sym_project_reference_include_attribute = 39,
  sym_non_empty_attributes = 40,
  sym_attribute = 41,
  sym_attribute_value = 42,
  sym_generic_element = 43,
  sym_tag_open = 44,
  sym_tag_close = 45,
  aux_sym_project_repeat1 = 46,
  aux_sym_property_group_repeat1 = 47,
  aux_sym_item_group_repeat1 = 48,
  aux_sym_package_reference_openclose_repeat1 = 49,
  aux_sym_project_reference_openclose_repeat1 = 50,
  aux_sym_non_empty_attributes_repeat1 = 51,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_LT_SLASH] = "</",
  [sym_project_tag_name] = "project_tag_name",
  [sym_property_group_tag_name] = "property_group_tag_name",
  [sym_target_framework_tag_name] = "target_framework_tag_name",
  [sym_item_group_tag_name] = "item_group_tag_name",
  [anon_sym_SLASH_GT] = "/>",
  [sym_package_reference_tag_name] = "package_reference_tag_name",
  [anon_sym_Version] = "Version",
  [anon_sym_EQ] = "=",
  [anon_sym_Include] = "Include",
  [sym_project_reference_tag_name] = "project_reference_tag_name",
  [anon_sym_SPACE] = " ",
  [sym_attribute_name] = "attribute_name",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_attribute_value_token1] = "attribute_value_token1",
  [sym_tag_name] = "tag_name",
  [sym_text] = "text",
  [sym_comment] = "comment",
  [sym_project] = "project",
  [sym_project_open] = "project_open",
  [sym_project_close] = "project_close",
  [sym_property_group] = "property_group",
  [sym_property_group_open] = "property_group_open",
  [sym_property_group_close] = "property_group_close",
  [sym_target_framework] = "target_framework",
  [sym_target_framework_open] = "target_framework_open",
  [sym_target_framework_close] = "target_framework_close",
  [sym_item_group] = "item_group",
  [sym_item_group_open] = "item_group_open",
  [sym_item_group_close] = "item_group_close",
  [sym_package_reference] = "package_reference",
  [sym_package_reference_openclose] = "package_reference_openclose",
  [sym_package_reference_version_attribute] = "package_reference_version_attribute",
  [sym_package_reference_include_attribute] = "package_reference_include_attribute",
  [sym_project_reference] = "project_reference",
  [sym_project_reference_openclose] = "project_reference_openclose",
  [sym_project_reference_include_attribute] = "project_reference_include_attribute",
  [sym_non_empty_attributes] = "non_empty_attributes",
  [sym_attribute] = "attribute",
  [sym_attribute_value] = "attribute_value",
  [sym_generic_element] = "generic_element",
  [sym_tag_open] = "tag_open",
  [sym_tag_close] = "tag_close",
  [aux_sym_project_repeat1] = "project_repeat1",
  [aux_sym_property_group_repeat1] = "property_group_repeat1",
  [aux_sym_item_group_repeat1] = "item_group_repeat1",
  [aux_sym_package_reference_openclose_repeat1] = "package_reference_openclose_repeat1",
  [aux_sym_project_reference_openclose_repeat1] = "project_reference_openclose_repeat1",
  [aux_sym_non_empty_attributes_repeat1] = "non_empty_attributes_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_LT_SLASH] = anon_sym_LT_SLASH,
  [sym_project_tag_name] = sym_project_tag_name,
  [sym_property_group_tag_name] = sym_property_group_tag_name,
  [sym_target_framework_tag_name] = sym_target_framework_tag_name,
  [sym_item_group_tag_name] = sym_item_group_tag_name,
  [anon_sym_SLASH_GT] = anon_sym_SLASH_GT,
  [sym_package_reference_tag_name] = sym_package_reference_tag_name,
  [anon_sym_Version] = anon_sym_Version,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_Include] = anon_sym_Include,
  [sym_project_reference_tag_name] = sym_project_reference_tag_name,
  [anon_sym_SPACE] = anon_sym_SPACE,
  [sym_attribute_name] = sym_attribute_name,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_attribute_value_token1] = aux_sym_attribute_value_token1,
  [sym_tag_name] = sym_tag_name,
  [sym_text] = sym_text,
  [sym_comment] = sym_comment,
  [sym_project] = sym_project,
  [sym_project_open] = sym_project_open,
  [sym_project_close] = sym_project_close,
  [sym_property_group] = sym_property_group,
  [sym_property_group_open] = sym_property_group_open,
  [sym_property_group_close] = sym_property_group_close,
  [sym_target_framework] = sym_target_framework,
  [sym_target_framework_open] = sym_target_framework_open,
  [sym_target_framework_close] = sym_target_framework_close,
  [sym_item_group] = sym_item_group,
  [sym_item_group_open] = sym_item_group_open,
  [sym_item_group_close] = sym_item_group_close,
  [sym_package_reference] = sym_package_reference,
  [sym_package_reference_openclose] = sym_package_reference_openclose,
  [sym_package_reference_version_attribute] = sym_package_reference_version_attribute,
  [sym_package_reference_include_attribute] = sym_package_reference_include_attribute,
  [sym_project_reference] = sym_project_reference,
  [sym_project_reference_openclose] = sym_project_reference_openclose,
  [sym_project_reference_include_attribute] = sym_project_reference_include_attribute,
  [sym_non_empty_attributes] = sym_non_empty_attributes,
  [sym_attribute] = sym_attribute,
  [sym_attribute_value] = sym_attribute_value,
  [sym_generic_element] = sym_generic_element,
  [sym_tag_open] = sym_tag_open,
  [sym_tag_close] = sym_tag_close,
  [aux_sym_project_repeat1] = aux_sym_project_repeat1,
  [aux_sym_property_group_repeat1] = aux_sym_property_group_repeat1,
  [aux_sym_item_group_repeat1] = aux_sym_item_group_repeat1,
  [aux_sym_package_reference_openclose_repeat1] = aux_sym_package_reference_openclose_repeat1,
  [aux_sym_project_reference_openclose_repeat1] = aux_sym_project_reference_openclose_repeat1,
  [aux_sym_non_empty_attributes_repeat1] = aux_sym_non_empty_attributes_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_SLASH] = {
    .visible = true,
    .named = false,
  },
  [sym_project_tag_name] = {
    .visible = true,
    .named = true,
  },
  [sym_property_group_tag_name] = {
    .visible = true,
    .named = true,
  },
  [sym_target_framework_tag_name] = {
    .visible = true,
    .named = true,
  },
  [sym_item_group_tag_name] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_GT] = {
    .visible = true,
    .named = false,
  },
  [sym_package_reference_tag_name] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_Version] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Include] = {
    .visible = true,
    .named = false,
  },
  [sym_project_reference_tag_name] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SPACE] = {
    .visible = true,
    .named = false,
  },
  [sym_attribute_name] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_attribute_value_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_tag_name] = {
    .visible = true,
    .named = true,
  },
  [sym_text] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_project] = {
    .visible = true,
    .named = true,
  },
  [sym_project_open] = {
    .visible = true,
    .named = true,
  },
  [sym_project_close] = {
    .visible = true,
    .named = true,
  },
  [sym_property_group] = {
    .visible = true,
    .named = true,
  },
  [sym_property_group_open] = {
    .visible = true,
    .named = true,
  },
  [sym_property_group_close] = {
    .visible = true,
    .named = true,
  },
  [sym_target_framework] = {
    .visible = true,
    .named = true,
  },
  [sym_target_framework_open] = {
    .visible = true,
    .named = true,
  },
  [sym_target_framework_close] = {
    .visible = true,
    .named = true,
  },
  [sym_item_group] = {
    .visible = true,
    .named = true,
  },
  [sym_item_group_open] = {
    .visible = true,
    .named = true,
  },
  [sym_item_group_close] = {
    .visible = true,
    .named = true,
  },
  [sym_package_reference] = {
    .visible = true,
    .named = true,
  },
  [sym_package_reference_openclose] = {
    .visible = true,
    .named = true,
  },
  [sym_package_reference_version_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym_package_reference_include_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym_project_reference] = {
    .visible = true,
    .named = true,
  },
  [sym_project_reference_openclose] = {
    .visible = true,
    .named = true,
  },
  [sym_project_reference_include_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym_non_empty_attributes] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute_value] = {
    .visible = true,
    .named = true,
  },
  [sym_generic_element] = {
    .visible = true,
    .named = true,
  },
  [sym_tag_open] = {
    .visible = true,
    .named = true,
  },
  [sym_tag_close] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_project_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_property_group_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_item_group_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_package_reference_openclose_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_project_reference_openclose_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_non_empty_attributes_repeat1] = {
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
  [43] = 23,
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
  [97] = 79,
  [98] = 86,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(77);
      ADVANCE_MAP(
        '"', 95,
        '/', 13,
        '<', 78,
        '=', 90,
        '>', 79,
        'I', 50,
        'P', 20,
        'T', 19,
        'V', 35,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(93);
      if (lookahead == '<') ADVANCE(2);
      if (lookahead == '>') ADVANCE(79);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(1);
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(6);
      END_STATE();
    case 3:
      if (lookahead == '!') ADVANCE(6);
      if (lookahead == '/') ADVANCE(80);
      END_STATE();
    case 4:
      if (lookahead == '-') ADVANCE(7);
      END_STATE();
    case 5:
      if (lookahead == '-') ADVANCE(14);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 6:
      if (lookahead == '-') ADVANCE(4);
      END_STATE();
    case 7:
      if (lookahead == '-') ADVANCE(5);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '<') ADVANCE(2);
      if (lookahead == '>') ADVANCE(79);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(8);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 9:
      if (lookahead == '<') ADVANCE(2);
      if (lookahead == 'P') ADVANCE(107);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(9);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 10:
      if (lookahead == '<') ADVANCE(2);
      if (lookahead == 'T') ADVANCE(110);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(10);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 11:
      if (lookahead == '<') ADVANCE(2);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(11);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 12:
      if (lookahead == '<') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(148);
      if (lookahead != 0) ADVANCE(149);
      END_STATE();
    case 13:
      if (lookahead == '>') ADVANCE(86);
      END_STATE();
    case 14:
      if (lookahead == '>') ADVANCE(150);
      END_STATE();
    case 15:
      if (lookahead == 'F') ADVANCE(63);
      END_STATE();
    case 16:
      if (lookahead == 'G') ADVANCE(64);
      END_STATE();
    case 17:
      if (lookahead == 'G') ADVANCE(66);
      END_STATE();
    case 18:
      if (lookahead == 'R') ADVANCE(32);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(60);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(24);
      if (lookahead == 'r') ADVANCE(53);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(49);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(42);
      END_STATE();
    case 23:
      if (lookahead == 'c') ADVANCE(47);
      END_STATE();
    case 24:
      if (lookahead == 'c') ADVANCE(46);
      END_STATE();
    case 25:
      if (lookahead == 'c') ADVANCE(70);
      END_STATE();
    case 26:
      if (lookahead == 'c') ADVANCE(34);
      END_STATE();
    case 27:
      if (lookahead == 'd') ADVANCE(30);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(48);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(69);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(91);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(18);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(40);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(75);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(87);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(61);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(52);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(25);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(65);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(67);
      END_STATE();
    case 40:
      if (lookahead == 'f') ADVANCE(39);
      END_STATE();
    case 41:
      if (lookahead == 'g') ADVANCE(29);
      END_STATE();
    case 42:
      if (lookahead == 'g') ADVANCE(31);
      END_STATE();
    case 43:
      if (lookahead == 'i') ADVANCE(54);
      END_STATE();
    case 44:
      if (lookahead == 'j') ADVANCE(37);
      if (lookahead == 'p') ADVANCE(38);
      END_STATE();
    case 45:
      if (lookahead == 'k') ADVANCE(83);
      END_STATE();
    case 46:
      if (lookahead == 'k') ADVANCE(22);
      END_STATE();
    case 47:
      if (lookahead == 'l') ADVANCE(72);
      END_STATE();
    case 48:
      if (lookahead == 'm') ADVANCE(16);
      END_STATE();
    case 49:
      if (lookahead == 'm') ADVANCE(33);
      END_STATE();
    case 50:
      if (lookahead == 'n') ADVANCE(23);
      if (lookahead == 't') ADVANCE(28);
      END_STATE();
    case 51:
      if (lookahead == 'n') ADVANCE(89);
      END_STATE();
    case 52:
      if (lookahead == 'n') ADVANCE(26);
      END_STATE();
    case 53:
      if (lookahead == 'o') ADVANCE(44);
      END_STATE();
    case 54:
      if (lookahead == 'o') ADVANCE(51);
      END_STATE();
    case 55:
      if (lookahead == 'o') ADVANCE(73);
      END_STATE();
    case 56:
      if (lookahead == 'o') ADVANCE(74);
      END_STATE();
    case 57:
      if (lookahead == 'o') ADVANCE(62);
      END_STATE();
    case 58:
      if (lookahead == 'p') ADVANCE(85);
      END_STATE();
    case 59:
      if (lookahead == 'p') ADVANCE(82);
      END_STATE();
    case 60:
      if (lookahead == 'r') ADVANCE(41);
      END_STATE();
    case 61:
      if (lookahead == 'r') ADVANCE(68);
      END_STATE();
    case 62:
      if (lookahead == 'r') ADVANCE(45);
      END_STATE();
    case 63:
      if (lookahead == 'r') ADVANCE(21);
      END_STATE();
    case 64:
      if (lookahead == 'r') ADVANCE(55);
      END_STATE();
    case 65:
      if (lookahead == 'r') ADVANCE(71);
      END_STATE();
    case 66:
      if (lookahead == 'r') ADVANCE(56);
      END_STATE();
    case 67:
      if (lookahead == 'r') ADVANCE(36);
      END_STATE();
    case 68:
      if (lookahead == 's') ADVANCE(43);
      END_STATE();
    case 69:
      if (lookahead == 't') ADVANCE(15);
      END_STATE();
    case 70:
      if (lookahead == 't') ADVANCE(81);
      END_STATE();
    case 71:
      if (lookahead == 't') ADVANCE(76);
      END_STATE();
    case 72:
      if (lookahead == 'u') ADVANCE(27);
      END_STATE();
    case 73:
      if (lookahead == 'u') ADVANCE(58);
      END_STATE();
    case 74:
      if (lookahead == 'u') ADVANCE(59);
      END_STATE();
    case 75:
      if (lookahead == 'w') ADVANCE(57);
      END_STATE();
    case 76:
      if (lookahead == 'y') ADVANCE(17);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '!') ADVANCE(6);
      if (lookahead == '/') ADVANCE(80);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_LT_SLASH);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_project_tag_name);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_property_group_tag_name);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_target_framework_tag_name);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_target_framework_tag_name);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_item_group_tag_name);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_SLASH_GT);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_package_reference_tag_name);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_package_reference_tag_name);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_Version);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_Include);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_project_reference_tag_name);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_SPACE);
      if (lookahead == ' ') ADVANCE(93);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_attribute_value_token1);
      if (lookahead == '!') ADVANCE(100);
      if (lookahead != 0 &&
          lookahead != '!' &&
          lookahead != '"') ADVANCE(103);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_attribute_value_token1);
      if (lookahead == '"') ADVANCE(7);
      if (lookahead == '-') ADVANCE(102);
      if (lookahead != 0) ADVANCE(98);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym_attribute_value_token1);
      if (lookahead == '"') ADVANCE(7);
      if (lookahead == '-') ADVANCE(97);
      if (lookahead != 0) ADVANCE(98);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym_attribute_value_token1);
      if (lookahead == '-') ADVANCE(98);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(103);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym_attribute_value_token1);
      if (lookahead == '-') ADVANCE(99);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(103);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym_attribute_value_token1);
      if (lookahead == '<') ADVANCE(96);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(101);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(103);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym_attribute_value_token1);
      if (lookahead == '>') ADVANCE(103);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(103);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym_attribute_value_token1);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(103);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'F') ADVANCE(140);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'R') ADVANCE(116);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'R') ADVANCE(126);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'a') ADVANCE(111);
      if (lookahead == 'r') ADVANCE(137);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'a') ADVANCE(129);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'a') ADVANCE(134);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'a') ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'c') ADVANCE(132);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'c') ADVANCE(145);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'c') ADVANCE(119);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'c') ADVANCE(120);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(105);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(127);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(141);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(135);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(88);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(92);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(146);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(112);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(144);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(136);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(143);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(128);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'f') ADVANCE(117);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'f') ADVANCE(125);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'g') ADVANCE(115);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'g') ADVANCE(123);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'j') ADVANCE(122);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'k') ADVANCE(108);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'k') ADVANCE(84);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'm') ADVANCE(121);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'n') ADVANCE(113);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'n') ADVANCE(114);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'o') ADVANCE(131);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'o') ADVANCE(139);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'r') ADVANCE(133);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'r') ADVANCE(109);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'r') ADVANCE(118);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'r') ADVANCE(130);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'r') ADVANCE(124);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 't') ADVANCE(104);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 't') ADVANCE(106);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'w') ADVANCE(138);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_tag_name);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_text);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(149);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_text);
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(149);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_comment);
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
  [15] = {.lex_state = 8},
  [16] = {.lex_state = 8},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 8},
  [20] = {.lex_state = 8},
  [21] = {.lex_state = 8},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 1},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 12},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 9},
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
  [39] = {.lex_state = 8},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 1},
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
  [55] = {.lex_state = 10},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 1},
  [58] = {.lex_state = 1},
  [59] = {.lex_state = 12},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 12},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 12},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 12},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 12},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 101},
  [87] = {.lex_state = 11},
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
  [98] = {.lex_state = 101},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LT_SLASH] = ACTIONS(1),
    [sym_project_tag_name] = ACTIONS(1),
    [sym_property_group_tag_name] = ACTIONS(1),
    [sym_target_framework_tag_name] = ACTIONS(1),
    [sym_item_group_tag_name] = ACTIONS(1),
    [anon_sym_SLASH_GT] = ACTIONS(1),
    [sym_package_reference_tag_name] = ACTIONS(1),
    [anon_sym_Version] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_Include] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_project] = STATE(96),
    [sym_project_open] = STATE(5),
    [anon_sym_LT] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(9), 1,
      anon_sym_LT_SLASH,
    STATE(26), 1,
      sym_tag_open,
    STATE(34), 1,
      sym_package_reference_openclose,
    STATE(35), 1,
      sym_project_reference_openclose,
    STATE(54), 1,
      sym_item_group_close,
    STATE(4), 4,
      sym_package_reference,
      sym_project_reference,
      sym_generic_element,
      aux_sym_item_group_repeat1,
  [28] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(9), 1,
      anon_sym_LT_SLASH,
    STATE(26), 1,
      sym_tag_open,
    STATE(33), 1,
      sym_item_group_close,
    STATE(34), 1,
      sym_package_reference_openclose,
    STATE(35), 1,
      sym_project_reference_openclose,
    STATE(2), 4,
      sym_package_reference,
      sym_project_reference,
      sym_generic_element,
      aux_sym_item_group_repeat1,
  [56] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LT,
    ACTIONS(14), 1,
      anon_sym_LT_SLASH,
    STATE(26), 1,
      sym_tag_open,
    STATE(34), 1,
      sym_package_reference_openclose,
    STATE(35), 1,
      sym_project_reference_openclose,
    STATE(4), 4,
      sym_package_reference,
      sym_project_reference,
      sym_generic_element,
      aux_sym_item_group_repeat1,
  [81] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(16), 1,
      anon_sym_LT,
    ACTIONS(18), 1,
      anon_sym_LT_SLASH,
    STATE(3), 1,
      sym_item_group_open,
    STATE(7), 1,
      sym_property_group_open,
    STATE(90), 1,
      sym_project_close,
    STATE(8), 3,
      sym_property_group,
      sym_item_group,
      aux_sym_project_repeat1,
  [105] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(20), 1,
      anon_sym_LT,
    ACTIONS(22), 1,
      anon_sym_LT_SLASH,
    STATE(26), 1,
      sym_tag_open,
    STATE(49), 1,
      sym_property_group_close,
    STATE(70), 1,
      sym_target_framework_open,
    STATE(10), 3,
      sym_target_framework,
      sym_generic_element,
      aux_sym_property_group_repeat1,
  [129] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(20), 1,
      anon_sym_LT,
    ACTIONS(22), 1,
      anon_sym_LT_SLASH,
    STATE(26), 1,
      sym_tag_open,
    STATE(51), 1,
      sym_property_group_close,
    STATE(70), 1,
      sym_target_framework_open,
    STATE(6), 3,
      sym_target_framework,
      sym_generic_element,
      aux_sym_property_group_repeat1,
  [153] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(16), 1,
      anon_sym_LT,
    ACTIONS(18), 1,
      anon_sym_LT_SLASH,
    STATE(3), 1,
      sym_item_group_open,
    STATE(7), 1,
      sym_property_group_open,
    STATE(94), 1,
      sym_project_close,
    STATE(9), 3,
      sym_property_group,
      sym_item_group,
      aux_sym_project_repeat1,
  [177] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(24), 1,
      anon_sym_LT,
    ACTIONS(27), 1,
      anon_sym_LT_SLASH,
    STATE(3), 1,
      sym_item_group_open,
    STATE(7), 1,
      sym_property_group_open,
    STATE(9), 3,
      sym_property_group,
      sym_item_group,
      aux_sym_project_repeat1,
  [198] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_LT,
    ACTIONS(32), 1,
      anon_sym_LT_SLASH,
    STATE(26), 1,
      sym_tag_open,
    STATE(70), 1,
      sym_target_framework_open,
    STATE(10), 3,
      sym_target_framework,
      sym_generic_element,
      aux_sym_property_group_repeat1,
  [219] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(34), 1,
      anon_sym_SLASH_GT,
    ACTIONS(36), 1,
      anon_sym_Version,
    ACTIONS(39), 1,
      anon_sym_Include,
    STATE(11), 3,
      sym_package_reference_version_attribute,
      sym_package_reference_include_attribute,
      aux_sym_package_reference_openclose_repeat1,
  [237] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(42), 1,
      anon_sym_SLASH_GT,
    ACTIONS(44), 1,
      anon_sym_Version,
    ACTIONS(46), 1,
      anon_sym_Include,
    STATE(13), 3,
      sym_package_reference_version_attribute,
      sym_package_reference_include_attribute,
      aux_sym_package_reference_openclose_repeat1,
  [255] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(44), 1,
      anon_sym_Version,
    ACTIONS(46), 1,
      anon_sym_Include,
    ACTIONS(48), 1,
      anon_sym_SLASH_GT,
    STATE(11), 3,
      sym_package_reference_version_attribute,
      sym_package_reference_include_attribute,
      aux_sym_package_reference_openclose_repeat1,
  [273] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(50), 1,
      anon_sym_SLASH_GT,
    ACTIONS(52), 1,
      anon_sym_Include,
    STATE(14), 2,
      sym_project_reference_include_attribute,
      aux_sym_project_reference_openclose_repeat1,
  [287] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 1,
      anon_sym_GT,
    ACTIONS(57), 1,
      sym_attribute_name,
    STATE(22), 1,
      sym_attribute,
    STATE(92), 1,
      sym_non_empty_attributes,
  [303] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym_attribute_name,
    ACTIONS(59), 1,
      anon_sym_GT,
    STATE(22), 1,
      sym_attribute,
    STATE(91), 1,
      sym_non_empty_attributes,
  [319] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      anon_sym_SLASH_GT,
    ACTIONS(63), 1,
      anon_sym_Include,
    STATE(18), 2,
      sym_project_reference_include_attribute,
      aux_sym_project_reference_openclose_repeat1,
  [333] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      anon_sym_Include,
    ACTIONS(65), 1,
      anon_sym_SLASH_GT,
    STATE(14), 2,
      sym_project_reference_include_attribute,
      aux_sym_project_reference_openclose_repeat1,
  [347] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym_attribute_name,
    ACTIONS(67), 1,
      anon_sym_GT,
    STATE(22), 1,
      sym_attribute,
    STATE(74), 1,
      sym_non_empty_attributes,
  [363] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym_attribute_name,
    ACTIONS(69), 1,
      anon_sym_GT,
    STATE(22), 1,
      sym_attribute,
    STATE(71), 1,
      sym_non_empty_attributes,
  [379] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym_attribute_name,
    ACTIONS(71), 1,
      anon_sym_GT,
    STATE(22), 1,
      sym_attribute,
    STATE(75), 1,
      sym_non_empty_attributes,
  [395] = 4,
    ACTIONS(73), 1,
      anon_sym_GT,
    ACTIONS(75), 1,
      anon_sym_SPACE,
    ACTIONS(77), 1,
      sym_comment,
    STATE(25), 1,
      aux_sym_non_empty_attributes_repeat1,
  [408] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 3,
      anon_sym_SLASH_GT,
      anon_sym_Version,
      anon_sym_Include,
  [417] = 4,
    ACTIONS(77), 1,
      sym_comment,
    ACTIONS(81), 1,
      anon_sym_GT,
    ACTIONS(83), 1,
      anon_sym_SPACE,
    STATE(24), 1,
      aux_sym_non_empty_attributes_repeat1,
  [430] = 4,
    ACTIONS(75), 1,
      anon_sym_SPACE,
    ACTIONS(77), 1,
      sym_comment,
    ACTIONS(86), 1,
      anon_sym_GT,
    STATE(24), 1,
      aux_sym_non_empty_attributes_repeat1,
  [443] = 4,
    ACTIONS(77), 1,
      sym_comment,
    ACTIONS(88), 1,
      anon_sym_LT_SLASH,
    ACTIONS(90), 1,
      sym_text,
    STATE(30), 1,
      sym_tag_close,
  [456] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 3,
      anon_sym_SLASH_GT,
      anon_sym_Version,
      anon_sym_Include,
  [465] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(94), 1,
      sym_package_reference_tag_name,
    ACTIONS(96), 1,
      sym_project_reference_tag_name,
    ACTIONS(98), 1,
      sym_tag_name,
  [478] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(100), 3,
      anon_sym_SLASH_GT,
      anon_sym_Version,
      anon_sym_Include,
  [487] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 1,
      anon_sym_LT,
    ACTIONS(104), 1,
      anon_sym_LT_SLASH,
  [497] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      anon_sym_LT,
    ACTIONS(108), 1,
      anon_sym_LT_SLASH,
  [507] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(110), 2,
      anon_sym_SLASH_GT,
      anon_sym_Include,
  [515] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(112), 1,
      anon_sym_LT,
    ACTIONS(114), 1,
      anon_sym_LT_SLASH,
  [525] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 1,
      anon_sym_LT,
    ACTIONS(118), 1,
      anon_sym_LT_SLASH,
  [535] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(120), 1,
      anon_sym_LT,
    ACTIONS(122), 1,
      anon_sym_LT_SLASH,
  [545] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(124), 1,
      sym_property_group_tag_name,
    ACTIONS(126), 1,
      sym_item_group_tag_name,
  [555] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(128), 1,
      anon_sym_DQUOTE,
    STATE(57), 1,
      sym_attribute_value,
  [565] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(130), 1,
      anon_sym_LT,
    ACTIONS(132), 1,
      anon_sym_LT_SLASH,
  [575] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym_attribute_name,
    STATE(58), 1,
      sym_attribute,
  [585] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(134), 1,
      anon_sym_LT,
    ACTIONS(136), 1,
      anon_sym_LT_SLASH,
  [595] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(138), 1,
      anon_sym_LT,
    ACTIONS(140), 1,
      anon_sym_LT_SLASH,
  [605] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(142), 1,
      anon_sym_LT,
    ACTIONS(144), 1,
      anon_sym_LT_SLASH,
  [615] = 3,
    ACTIONS(77), 1,
      sym_comment,
    ACTIONS(79), 1,
      anon_sym_SPACE,
    ACTIONS(146), 1,
      anon_sym_GT,
  [625] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(148), 1,
      anon_sym_LT,
    ACTIONS(150), 1,
      anon_sym_LT_SLASH,
  [635] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(152), 1,
      anon_sym_DQUOTE,
    STATE(32), 1,
      sym_attribute_value,
  [645] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(154), 1,
      anon_sym_LT_SLASH,
    STATE(67), 1,
      sym_target_framework_close,
  [655] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(156), 1,
      anon_sym_LT,
    ACTIONS(158), 1,
      anon_sym_LT_SLASH,
  [665] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(160), 1,
      anon_sym_LT_SLASH,
    STATE(66), 1,
      sym_tag_close,
  [675] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 1,
      anon_sym_LT,
    ACTIONS(164), 1,
      anon_sym_LT_SLASH,
  [685] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(166), 1,
      anon_sym_LT,
    ACTIONS(168), 1,
      anon_sym_LT_SLASH,
  [695] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(170), 1,
      anon_sym_LT,
    ACTIONS(172), 1,
      anon_sym_LT_SLASH,
  [705] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(152), 1,
      anon_sym_DQUOTE,
    STATE(29), 1,
      sym_attribute_value,
  [715] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(152), 1,
      anon_sym_DQUOTE,
    STATE(27), 1,
      sym_attribute_value,
  [725] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(174), 1,
      anon_sym_LT,
    ACTIONS(176), 1,
      anon_sym_LT_SLASH,
  [735] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(98), 1,
      sym_tag_name,
    ACTIONS(178), 1,
      sym_target_framework_tag_name,
  [745] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(180), 1,
      anon_sym_LT,
    ACTIONS(182), 1,
      anon_sym_LT_SLASH,
  [755] = 3,
    ACTIONS(77), 1,
      sym_comment,
    ACTIONS(184), 1,
      anon_sym_GT,
    ACTIONS(186), 1,
      anon_sym_SPACE,
  [765] = 3,
    ACTIONS(77), 1,
      sym_comment,
    ACTIONS(81), 1,
      anon_sym_GT,
    ACTIONS(188), 1,
      anon_sym_SPACE,
  [775] = 3,
    ACTIONS(77), 1,
      sym_comment,
    ACTIONS(190), 1,
      anon_sym_LT_SLASH,
    ACTIONS(192), 1,
      sym_text,
  [785] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(194), 1,
      anon_sym_LT,
    ACTIONS(196), 1,
      anon_sym_LT_SLASH,
  [795] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(198), 1,
      anon_sym_LT,
    ACTIONS(200), 1,
      anon_sym_LT_SLASH,
  [805] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(202), 1,
      anon_sym_LT,
    ACTIONS(204), 1,
      anon_sym_LT_SLASH,
  [815] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_LT,
    ACTIONS(208), 1,
      anon_sym_LT_SLASH,
  [825] = 3,
    ACTIONS(77), 1,
      sym_comment,
    ACTIONS(210), 1,
      anon_sym_LT_SLASH,
    ACTIONS(212), 1,
      sym_text,
  [835] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(214), 1,
      anon_sym_LT,
    ACTIONS(216), 1,
      anon_sym_LT_SLASH,
  [845] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(218), 1,
      anon_sym_LT,
    ACTIONS(220), 1,
      anon_sym_LT_SLASH,
  [855] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(222), 1,
      anon_sym_LT,
    ACTIONS(224), 1,
      anon_sym_LT_SLASH,
  [865] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(226), 1,
      anon_sym_GT,
  [872] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(228), 1,
      anon_sym_GT,
  [879] = 2,
    ACTIONS(77), 1,
      sym_comment,
    ACTIONS(230), 1,
      sym_text,
  [886] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(232), 1,
      anon_sym_GT,
  [893] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(234), 1,
      anon_sym_EQ,
  [900] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(236), 1,
      anon_sym_EQ,
  [907] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(238), 1,
      anon_sym_GT,
  [914] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(240), 1,
      anon_sym_GT,
  [921] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(242), 1,
      anon_sym_EQ,
  [928] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(244), 1,
      anon_sym_EQ,
  [935] = 2,
    ACTIONS(77), 1,
      sym_comment,
    ACTIONS(246), 1,
      sym_text,
  [942] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(248), 1,
      anon_sym_DQUOTE,
  [949] = 2,
    ACTIONS(77), 1,
      sym_comment,
    ACTIONS(250), 1,
      sym_text,
  [956] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(252), 1,
      anon_sym_GT,
  [963] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(254), 1,
      anon_sym_GT,
  [970] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(256), 1,
      sym_target_framework_tag_name,
  [977] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(258), 1,
      sym_project_tag_name,
  [984] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(260), 1,
      sym_property_group_tag_name,
  [991] = 2,
    ACTIONS(77), 1,
      sym_comment,
    ACTIONS(262), 1,
      aux_sym_attribute_value_token1,
  [998] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(264), 1,
      sym_tag_name,
  [1005] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(266), 1,
      anon_sym_GT,
  [1012] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 1,
      ts_builtin_sym_end,
  [1019] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(270), 1,
      ts_builtin_sym_end,
  [1026] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(272), 1,
      anon_sym_GT,
  [1033] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(274), 1,
      anon_sym_GT,
  [1040] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(276), 1,
      sym_project_tag_name,
  [1047] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(278), 1,
      ts_builtin_sym_end,
  [1054] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(280), 1,
      sym_item_group_tag_name,
  [1061] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(282), 1,
      ts_builtin_sym_end,
  [1068] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(284), 1,
      anon_sym_DQUOTE,
  [1075] = 2,
    ACTIONS(77), 1,
      sym_comment,
    ACTIONS(286), 1,
      aux_sym_attribute_value_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 28,
  [SMALL_STATE(4)] = 56,
  [SMALL_STATE(5)] = 81,
  [SMALL_STATE(6)] = 105,
  [SMALL_STATE(7)] = 129,
  [SMALL_STATE(8)] = 153,
  [SMALL_STATE(9)] = 177,
  [SMALL_STATE(10)] = 198,
  [SMALL_STATE(11)] = 219,
  [SMALL_STATE(12)] = 237,
  [SMALL_STATE(13)] = 255,
  [SMALL_STATE(14)] = 273,
  [SMALL_STATE(15)] = 287,
  [SMALL_STATE(16)] = 303,
  [SMALL_STATE(17)] = 319,
  [SMALL_STATE(18)] = 333,
  [SMALL_STATE(19)] = 347,
  [SMALL_STATE(20)] = 363,
  [SMALL_STATE(21)] = 379,
  [SMALL_STATE(22)] = 395,
  [SMALL_STATE(23)] = 408,
  [SMALL_STATE(24)] = 417,
  [SMALL_STATE(25)] = 430,
  [SMALL_STATE(26)] = 443,
  [SMALL_STATE(27)] = 456,
  [SMALL_STATE(28)] = 465,
  [SMALL_STATE(29)] = 478,
  [SMALL_STATE(30)] = 487,
  [SMALL_STATE(31)] = 497,
  [SMALL_STATE(32)] = 507,
  [SMALL_STATE(33)] = 515,
  [SMALL_STATE(34)] = 525,
  [SMALL_STATE(35)] = 535,
  [SMALL_STATE(36)] = 545,
  [SMALL_STATE(37)] = 555,
  [SMALL_STATE(38)] = 565,
  [SMALL_STATE(39)] = 575,
  [SMALL_STATE(40)] = 585,
  [SMALL_STATE(41)] = 595,
  [SMALL_STATE(42)] = 605,
  [SMALL_STATE(43)] = 615,
  [SMALL_STATE(44)] = 625,
  [SMALL_STATE(45)] = 635,
  [SMALL_STATE(46)] = 645,
  [SMALL_STATE(47)] = 655,
  [SMALL_STATE(48)] = 665,
  [SMALL_STATE(49)] = 675,
  [SMALL_STATE(50)] = 685,
  [SMALL_STATE(51)] = 695,
  [SMALL_STATE(52)] = 705,
  [SMALL_STATE(53)] = 715,
  [SMALL_STATE(54)] = 725,
  [SMALL_STATE(55)] = 735,
  [SMALL_STATE(56)] = 745,
  [SMALL_STATE(57)] = 755,
  [SMALL_STATE(58)] = 765,
  [SMALL_STATE(59)] = 775,
  [SMALL_STATE(60)] = 785,
  [SMALL_STATE(61)] = 795,
  [SMALL_STATE(62)] = 805,
  [SMALL_STATE(63)] = 815,
  [SMALL_STATE(64)] = 825,
  [SMALL_STATE(65)] = 835,
  [SMALL_STATE(66)] = 845,
  [SMALL_STATE(67)] = 855,
  [SMALL_STATE(68)] = 865,
  [SMALL_STATE(69)] = 872,
  [SMALL_STATE(70)] = 879,
  [SMALL_STATE(71)] = 886,
  [SMALL_STATE(72)] = 893,
  [SMALL_STATE(73)] = 900,
  [SMALL_STATE(74)] = 907,
  [SMALL_STATE(75)] = 914,
  [SMALL_STATE(76)] = 921,
  [SMALL_STATE(77)] = 928,
  [SMALL_STATE(78)] = 935,
  [SMALL_STATE(79)] = 942,
  [SMALL_STATE(80)] = 949,
  [SMALL_STATE(81)] = 956,
  [SMALL_STATE(82)] = 963,
  [SMALL_STATE(83)] = 970,
  [SMALL_STATE(84)] = 977,
  [SMALL_STATE(85)] = 984,
  [SMALL_STATE(86)] = 991,
  [SMALL_STATE(87)] = 998,
  [SMALL_STATE(88)] = 1005,
  [SMALL_STATE(89)] = 1012,
  [SMALL_STATE(90)] = 1019,
  [SMALL_STATE(91)] = 1026,
  [SMALL_STATE(92)] = 1033,
  [SMALL_STATE(93)] = 1040,
  [SMALL_STATE(94)] = 1047,
  [SMALL_STATE(95)] = 1054,
  [SMALL_STATE(96)] = 1061,
  [SMALL_STATE(97)] = 1068,
  [SMALL_STATE(98)] = 1075,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [11] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_item_group_repeat1, 2, 0, 0), SHIFT_REPEAT(28),
  [14] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_item_group_repeat1, 2, 0, 0),
  [16] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [18] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [20] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [22] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [24] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_project_repeat1, 2, 0, 0), SHIFT_REPEAT(36),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_project_repeat1, 2, 0, 0),
  [29] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_property_group_repeat1, 2, 0, 0), SHIFT_REPEAT(55),
  [32] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_property_group_repeat1, 2, 0, 0),
  [34] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_package_reference_openclose_repeat1, 2, 0, 0),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_package_reference_openclose_repeat1, 2, 0, 0), SHIFT_REPEAT(72),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_package_reference_openclose_repeat1, 2, 0, 0), SHIFT_REPEAT(73),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_project_reference_openclose_repeat1, 2, 0, 0),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_project_reference_openclose_repeat1, 2, 0, 0), SHIFT_REPEAT(76),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_non_empty_attributes, 1, 0, 0),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_value, 3, 0, 0),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_non_empty_attributes_repeat1, 2, 0, 0),
  [83] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_non_empty_attributes_repeat1, 2, 0, 0), SHIFT_REPEAT(39),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_non_empty_attributes, 2, 0, 0),
  [88] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_package_reference_version_attribute, 3, 0, 0),
  [94] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [96] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [98] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_package_reference_include_attribute, 3, 0, 0),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_generic_element, 2, 0, 0),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generic_element, 2, 0, 0),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property_group_close, 3, 0, 0),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_group_close, 3, 0, 0),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project_reference_include_attribute, 3, 0, 0),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_item_group, 2, 0, 0),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item_group, 2, 0, 0),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_package_reference, 1, 0, 0),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_package_reference, 1, 0, 0),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_project_reference, 1, 0, 0),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project_reference, 1, 0, 0),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_project_open, 4, 0, 0),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project_open, 4, 0, 0),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property_group_open, 3, 0, 0),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_group_open, 3, 0, 0),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_target_framework_close, 3, 0, 0),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_framework_close, 3, 0, 0),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_item_group_open, 3, 0, 0),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item_group_open, 3, 0, 0),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_value, 3, 0, 0),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_project_reference_openclose, 4, 0, 0),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project_reference_openclose, 4, 0, 0),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_project_open, 3, 0, 0),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project_open, 3, 0, 0),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [162] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property_group, 3, 0, 0),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_group, 3, 0, 0),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_package_reference_openclose, 4, 0, 0),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_package_reference_openclose, 4, 0, 0),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property_group, 2, 0, 0),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_group, 2, 0, 0),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_item_group, 3, 0, 0),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item_group, 3, 0, 0),
  [178] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag_close, 3, 0, 0),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag_close, 3, 0, 0),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 3, 0, 0),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3, 0, 0),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_non_empty_attributes_repeat1, 2, 0, 0),
  [190] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag_open, 4, 0, 0),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag_open, 4, 0, 0),
  [194] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property_group_open, 4, 0, 0),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_group_open, 4, 0, 0),
  [198] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_item_group_open, 4, 0, 0),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item_group_open, 4, 0, 0),
  [202] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_item_group_close, 3, 0, 0),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item_group_close, 3, 0, 0),
  [206] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_project_reference_openclose, 3, 0, 0),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project_reference_openclose, 3, 0, 0),
  [210] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag_open, 3, 0, 0),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag_open, 3, 0, 0),
  [214] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_package_reference_openclose, 3, 0, 0),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_package_reference_openclose, 3, 0, 0),
  [218] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_generic_element, 3, 0, 0),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generic_element, 3, 0, 0),
  [222] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_target_framework, 3, 0, 0),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_framework, 3, 0, 0),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_framework_open, 3, 0, 0),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_framework_open, 4, 0, 0),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [262] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project_close, 3, 0, 0),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project, 2, 0, 0),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project, 3, 0, 0),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [282] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [286] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
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

TS_PUBLIC const TSLanguage *tree_sitter_csproj(void) {
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
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
