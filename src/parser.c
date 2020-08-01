#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 11
#define STATE_COUNT 30
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 26
#define ALIAS_COUNT 0
#define TOKEN_COUNT 15
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 4

enum {
  anon_sym_LBRACE = 1,
  anon_sym_RBRACE = 2,
  anon_sym_COMMA = 3,
  anon_sym_COLON = 4,
  anon_sym_LBRACK = 5,
  anon_sym_RBRACK = 6,
  sym__digit = 7,
  sym_number = 8,
  anon_sym_DQUOTE = 9,
  aux_sym__codePoint_token1 = 10,
  aux_sym__codePoint_token2 = 11,
  sym_true = 12,
  sym_false = 13,
  sym_null = 14,
  sym_json = 15,
  sym_element = 16,
  sym__value = 17,
  sym_object = 18,
  sym__members = 19,
  sym_member = 20,
  sym_array = 21,
  sym_string = 22,
  aux_sym__codePoint = 23,
  aux_sym__members_repeat1 = 24,
  aux_sym_array_repeat1 = 25,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_COMMA] = ",",
  [anon_sym_COLON] = ":",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [sym__digit] = "_digit",
  [sym_number] = "number",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym__codePoint_token1] = "_codePoint_token1",
  [aux_sym__codePoint_token2] = "_codePoint_token2",
  [sym_true] = "true",
  [sym_false] = "false",
  [sym_null] = "null",
  [sym_json] = "json",
  [sym_element] = "element",
  [sym__value] = "_value",
  [sym_object] = "object",
  [sym__members] = "_members",
  [sym_member] = "member",
  [sym_array] = "array",
  [sym_string] = "string",
  [aux_sym__codePoint] = "_codePoint",
  [aux_sym__members_repeat1] = "_members_repeat1",
  [aux_sym_array_repeat1] = "array_repeat1",
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [sym__digit] = sym__digit,
  [sym_number] = sym_number,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym__codePoint_token1] = aux_sym__codePoint_token1,
  [aux_sym__codePoint_token2] = aux_sym__codePoint_token2,
  [sym_true] = sym_true,
  [sym_false] = sym_false,
  [sym_null] = sym_null,
  [sym_json] = sym_json,
  [sym_element] = sym_element,
  [sym__value] = sym__value,
  [sym_object] = sym_object,
  [sym__members] = sym__members,
  [sym_member] = sym_member,
  [sym_array] = sym_array,
  [sym_string] = sym_string,
  [aux_sym__codePoint] = aux_sym__codePoint,
  [aux_sym__members_repeat1] = aux_sym__members_repeat1,
  [aux_sym_array_repeat1] = aux_sym_array_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [sym__digit] = {
    .visible = false,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__codePoint_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__codePoint_token2] = {
    .visible = false,
    .named = false,
  },
  [sym_true] = {
    .visible = true,
    .named = true,
  },
  [sym_false] = {
    .visible = true,
    .named = true,
  },
  [sym_null] = {
    .visible = true,
    .named = true,
  },
  [sym_json] = {
    .visible = true,
    .named = true,
  },
  [sym_element] = {
    .visible = true,
    .named = true,
  },
  [sym__value] = {
    .visible = false,
    .named = true,
  },
  [sym_object] = {
    .visible = true,
    .named = true,
  },
  [sym__members] = {
    .visible = false,
    .named = true,
  },
  [sym_member] = {
    .visible = true,
    .named = true,
  },
  [sym_array] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__codePoint] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__members_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_array_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_name = 1,
  field_value = 2,
};

static const char *ts_field_names[] = {
  [0] = NULL,
  [field_name] = "name",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[2] = {
  [1] = {.index = 0, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 0},
    {field_value, 2},
};

static TSSymbol ts_alias_sequences[2][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(20);
      if (lookahead == '"') ADVANCE(33);
      if (lookahead == ',') ADVANCE(23);
      if (lookahead == '-') ADVANCE(4);
      if (lookahead == '0') ADVANCE(27);
      if (lookahead == ':') ADVANCE(24);
      if (lookahead == '[') ADVANCE(25);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == ']') ADVANCE(26);
      if (lookahead == 'f') ADVANCE(5);
      if (lookahead == 'n') ADVANCE(14);
      if (lookahead == 't') ADVANCE(11);
      if (lookahead == '{') ADVANCE(21);
      if (lookahead == '}') ADVANCE(22);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(19)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(28);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(3)
      if (lookahead == '"') ADVANCE(33);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(34);
      if (lookahead != 0) ADVANCE(35);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(33);
      if (lookahead == '-') ADVANCE(4);
      if (lookahead == '0') ADVANCE(29);
      if (lookahead == '[') ADVANCE(25);
      if (lookahead == 'f') ADVANCE(5);
      if (lookahead == 'n') ADVANCE(14);
      if (lookahead == 't') ADVANCE(11);
      if (lookahead == '{') ADVANCE(21);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(30);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(33);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      END_STATE();
    case 4:
      if (lookahead == '0') ADVANCE(29);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(30);
      END_STATE();
    case 5:
      if (lookahead == 'a') ADVANCE(8);
      END_STATE();
    case 6:
      if (lookahead == 'e') ADVANCE(37);
      END_STATE();
    case 7:
      if (lookahead == 'e') ADVANCE(38);
      END_STATE();
    case 8:
      if (lookahead == 'l') ADVANCE(12);
      END_STATE();
    case 9:
      if (lookahead == 'l') ADVANCE(39);
      END_STATE();
    case 10:
      if (lookahead == 'l') ADVANCE(9);
      END_STATE();
    case 11:
      if (lookahead == 'r') ADVANCE(13);
      END_STATE();
    case 12:
      if (lookahead == 's') ADVANCE(7);
      END_STATE();
    case 13:
      if (lookahead == 'u') ADVANCE(6);
      END_STATE();
    case 14:
      if (lookahead == 'u') ADVANCE(10);
      END_STATE();
    case 15:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(32);
      END_STATE();
    case 16:
      if (lookahead == '"' ||
          lookahead == '/' ||
          lookahead == '\\' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't') ADVANCE(36);
      END_STATE();
    case 17:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(31);
      END_STATE();
    case 18:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(32);
      END_STATE();
    case 19:
      if (eof) ADVANCE(20);
      if (lookahead == '"') ADVANCE(33);
      if (lookahead == ',') ADVANCE(23);
      if (lookahead == '-') ADVANCE(4);
      if (lookahead == '0') ADVANCE(27);
      if (lookahead == ':') ADVANCE(24);
      if (lookahead == '[') ADVANCE(25);
      if (lookahead == ']') ADVANCE(26);
      if (lookahead == 'f') ADVANCE(5);
      if (lookahead == 'n') ADVANCE(14);
      if (lookahead == 't') ADVANCE(11);
      if (lookahead == '{') ADVANCE(21);
      if (lookahead == '}') ADVANCE(22);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(19)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(28);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym__digit);
      if (lookahead == '.') ADVANCE(17);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(15);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym__digit);
      if (lookahead == '.') ADVANCE(17);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(30);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(17);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(15);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(17);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(30);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(31);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(32);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym__codePoint_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(34);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(35);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym__codePoint_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(35);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym__codePoint_token2);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_true);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_false);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_null);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 2},
  [2] = {.lex_state = 2},
  [3] = {.lex_state = 2},
  [4] = {.lex_state = 2},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 1},
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
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [sym__digit] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [aux_sym__codePoint_token2] = ACTIONS(1),
    [sym_true] = ACTIONS(1),
    [sym_false] = ACTIONS(1),
    [sym_null] = ACTIONS(1),
  },
  [1] = {
    [sym_json] = STATE(25),
    [sym_element] = STATE(29),
    [sym__value] = STATE(28),
    [sym_object] = STATE(28),
    [sym_array] = STATE(28),
    [sym_string] = STATE(28),
    [anon_sym_LBRACE] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(5),
    [sym_number] = ACTIONS(7),
    [anon_sym_DQUOTE] = ACTIONS(9),
    [sym_true] = ACTIONS(7),
    [sym_false] = ACTIONS(7),
    [sym_null] = ACTIONS(7),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE,
    ACTIONS(5), 1,
      anon_sym_LBRACK,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(11), 4,
      sym_number,
      sym_true,
      sym_false,
      sym_null,
    STATE(18), 4,
      sym__value,
      sym_object,
      sym_array,
      sym_string,
  [22] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE,
    ACTIONS(5), 1,
      anon_sym_LBRACK,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(13), 4,
      sym_number,
      sym_true,
      sym_false,
      sym_null,
    STATE(24), 4,
      sym__value,
      sym_object,
      sym_array,
      sym_string,
  [44] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE,
    ACTIONS(5), 1,
      anon_sym_LBRACK,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 4,
      sym_number,
      sym_true,
      sym_false,
      sym_null,
    STATE(23), 4,
      sym__value,
      sym_object,
      sym_array,
      sym_string,
  [66] = 5,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_RBRACE,
    STATE(19), 1,
      sym_member,
    STATE(26), 1,
      sym_string,
    STATE(27), 1,
      sym__members,
  [82] = 1,
    ACTIONS(19), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_RBRACK,
  [90] = 1,
    ACTIONS(21), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_RBRACK,
  [98] = 1,
    ACTIONS(23), 4,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [105] = 3,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    STATE(14), 1,
      aux_sym__codePoint,
    ACTIONS(27), 2,
      aux_sym__codePoint_token1,
      aux_sym__codePoint_token2,
  [116] = 1,
    ACTIONS(29), 4,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [123] = 3,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    STATE(11), 1,
      aux_sym__codePoint,
    ACTIONS(33), 2,
      aux_sym__codePoint_token1,
      aux_sym__codePoint_token2,
  [134] = 1,
    ACTIONS(36), 4,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [141] = 1,
    ACTIONS(38), 4,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [148] = 3,
    ACTIONS(40), 1,
      anon_sym_DQUOTE,
    STATE(11), 1,
      aux_sym__codePoint,
    ACTIONS(42), 2,
      aux_sym__codePoint_token1,
      aux_sym__codePoint_token2,
  [159] = 3,
    ACTIONS(44), 1,
      anon_sym_COMMA,
    ACTIONS(46), 1,
      anon_sym_RBRACK,
    STATE(21), 1,
      aux_sym_array_repeat1,
  [169] = 3,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    STATE(22), 1,
      sym_member,
    STATE(26), 1,
      sym_string,
  [179] = 3,
    ACTIONS(48), 1,
      anon_sym_RBRACE,
    ACTIONS(50), 1,
      anon_sym_COMMA,
    STATE(20), 1,
      aux_sym__members_repeat1,
  [189] = 3,
    ACTIONS(44), 1,
      anon_sym_COMMA,
    ACTIONS(52), 1,
      anon_sym_RBRACK,
    STATE(15), 1,
      aux_sym_array_repeat1,
  [199] = 3,
    ACTIONS(50), 1,
      anon_sym_COMMA,
    ACTIONS(54), 1,
      anon_sym_RBRACE,
    STATE(17), 1,
      aux_sym__members_repeat1,
  [209] = 3,
    ACTIONS(56), 1,
      anon_sym_RBRACE,
    ACTIONS(58), 1,
      anon_sym_COMMA,
    STATE(20), 1,
      aux_sym__members_repeat1,
  [219] = 3,
    ACTIONS(61), 1,
      anon_sym_COMMA,
    ACTIONS(64), 1,
      anon_sym_RBRACK,
    STATE(21), 1,
      aux_sym_array_repeat1,
  [229] = 1,
    ACTIONS(56), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [234] = 1,
    ACTIONS(66), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [239] = 1,
    ACTIONS(64), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [244] = 1,
    ACTIONS(68), 1,
      ts_builtin_sym_end,
  [248] = 1,
    ACTIONS(70), 1,
      anon_sym_COLON,
  [252] = 1,
    ACTIONS(72), 1,
      anon_sym_RBRACE,
  [256] = 1,
    ACTIONS(74), 1,
      ts_builtin_sym_end,
  [260] = 1,
    ACTIONS(76), 1,
      ts_builtin_sym_end,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 22,
  [SMALL_STATE(4)] = 44,
  [SMALL_STATE(5)] = 66,
  [SMALL_STATE(6)] = 82,
  [SMALL_STATE(7)] = 90,
  [SMALL_STATE(8)] = 98,
  [SMALL_STATE(9)] = 105,
  [SMALL_STATE(10)] = 116,
  [SMALL_STATE(11)] = 123,
  [SMALL_STATE(12)] = 134,
  [SMALL_STATE(13)] = 141,
  [SMALL_STATE(14)] = 148,
  [SMALL_STATE(15)] = 159,
  [SMALL_STATE(16)] = 169,
  [SMALL_STATE(17)] = 179,
  [SMALL_STATE(18)] = 189,
  [SMALL_STATE(19)] = 199,
  [SMALL_STATE(20)] = 209,
  [SMALL_STATE(21)] = 219,
  [SMALL_STATE(22)] = 229,
  [SMALL_STATE(23)] = 234,
  [SMALL_STATE(24)] = 239,
  [SMALL_STATE(25)] = 244,
  [SMALL_STATE(26)] = 248,
  [SMALL_STATE(27)] = 252,
  [SMALL_STATE(28)] = 256,
  [SMALL_STATE(29)] = 260,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 3),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 4),
  [31] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__codePoint, 2),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__codePoint, 2), SHIFT_REPEAT(11),
  [36] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 2),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 3),
  [40] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__members, 2),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__members, 1),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__members_repeat1, 2),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__members_repeat1, 2), SHIFT_REPEAT(16),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(3),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member, 3, .production_id = 1),
  [68] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 1),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json, 1),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_json(void) {
  static TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .symbol_metadata = ts_symbol_metadata,
    .parse_table = (const unsigned short *)ts_parse_table,
    .small_parse_table = (const uint16_t *)ts_small_parse_table,
    .small_parse_table_map = (const uint32_t *)ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .lex_modes = ts_lex_modes,
    .symbol_names = ts_symbol_names,
    .public_symbol_map = ts_symbol_map,
    .alias_sequences = (const TSSymbol *)ts_alias_sequences,
    .field_count = FIELD_COUNT,
    .field_names = ts_field_names,
    .field_map_slices = (const TSFieldMapSlice *)ts_field_map_slices,
    .field_map_entries = (const TSFieldMapEntry *)ts_field_map_entries,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
