#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 82
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 57
#define ALIAS_COUNT 0
#define TOKEN_COUNT 34
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 10
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 30

enum {
  sym_macro = 1,
  sym__whitespace = 2,
  sym__newline = 3,
  sym_comment = 4,
  anon_sym_BITS = 5,
  anon_sym_LT_EQ = 6,
  anon_sym_EQ_EQ = 7,
  anon_sym_GT_EQ = 8,
  anon_sym_MINREG = 9,
  anon_sym_MINHEAP = 10,
  anon_sym_MINSTACK = 11,
  anon_sym_RUN = 12,
  anon_sym_RAM = 13,
  anon_sym_ROM = 14,
  anon_sym_DW = 15,
  anon_sym_DOT = 16,
  sym_register = 17,
  sym_program_counter = 18,
  sym_stack_pointer = 19,
  anon_sym_LT = 20,
  anon_sym_GT = 21,
  sym_identifier = 22,
  anon_sym_LBRACK = 23,
  anon_sym_RBRACK = 24,
  anon_sym_DQUOTE = 25,
  aux_sym_string_token1 = 26,
  sym_escape_sequence = 27,
  sym_number = 28,
  anon_sym_SQUOTE = 29,
  aux_sym_char_token1 = 30,
  sym_relative = 31,
  sym_memory = 32,
  sym_port = 33,
  sym_source_file = 34,
  sym__header = 35,
  sym_BITS = 36,
  sym_MINREG = 37,
  sym_MINHEAP = 38,
  sym_MINSTACK = 39,
  sym_RUN = 40,
  sym_DW = 41,
  sym_label = 42,
  sym__operand = 43,
  sym_placeholder = 44,
  sym__dw_literal = 45,
  sym_array = 46,
  sym_string = 47,
  sym__immediate_literal = 48,
  sym_char = 49,
  sym_instruction = 50,
  aux_sym_source_file_repeat1 = 51,
  aux_sym_source_file_repeat2 = 52,
  aux_sym_DW_repeat1 = 53,
  aux_sym_array_repeat1 = 54,
  aux_sym_string_repeat1 = 55,
  aux_sym_instruction_repeat1 = 56,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_macro] = "macro",
  [sym__whitespace] = "_whitespace",
  [sym__newline] = "_newline",
  [sym_comment] = "comment",
  [anon_sym_BITS] = "BITS",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_MINREG] = "MINREG",
  [anon_sym_MINHEAP] = "MINHEAP",
  [anon_sym_MINSTACK] = "MINSTACK",
  [anon_sym_RUN] = "RUN",
  [anon_sym_RAM] = "RAM",
  [anon_sym_ROM] = "ROM",
  [anon_sym_DW] = "DW",
  [anon_sym_DOT] = ".",
  [sym_register] = "register",
  [sym_program_counter] = "program_counter",
  [sym_stack_pointer] = "stack_pointer",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [sym_identifier] = "identifier",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_token1] = "string_token1",
  [sym_escape_sequence] = "escape_sequence",
  [sym_number] = "number",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_char_token1] = "char_token1",
  [sym_relative] = "relative",
  [sym_memory] = "memory",
  [sym_port] = "port",
  [sym_source_file] = "source_file",
  [sym__header] = "_header",
  [sym_BITS] = "BITS",
  [sym_MINREG] = "MINREG",
  [sym_MINHEAP] = "MINHEAP",
  [sym_MINSTACK] = "MINSTACK",
  [sym_RUN] = "RUN",
  [sym_DW] = "DW",
  [sym_label] = "label",
  [sym__operand] = "_operand",
  [sym_placeholder] = "placeholder",
  [sym__dw_literal] = "_dw_literal",
  [sym_array] = "array",
  [sym_string] = "string",
  [sym__immediate_literal] = "_immediate_literal",
  [sym_char] = "char",
  [sym_instruction] = "instruction",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_source_file_repeat2] = "source_file_repeat2",
  [aux_sym_DW_repeat1] = "DW_repeat1",
  [aux_sym_array_repeat1] = "array_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
  [aux_sym_instruction_repeat1] = "instruction_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_macro] = sym_macro,
  [sym__whitespace] = sym__whitespace,
  [sym__newline] = sym__newline,
  [sym_comment] = sym_comment,
  [anon_sym_BITS] = anon_sym_BITS,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_MINREG] = anon_sym_MINREG,
  [anon_sym_MINHEAP] = anon_sym_MINHEAP,
  [anon_sym_MINSTACK] = anon_sym_MINSTACK,
  [anon_sym_RUN] = anon_sym_RUN,
  [anon_sym_RAM] = anon_sym_RAM,
  [anon_sym_ROM] = anon_sym_ROM,
  [anon_sym_DW] = anon_sym_DW,
  [anon_sym_DOT] = anon_sym_DOT,
  [sym_register] = sym_register,
  [sym_program_counter] = sym_program_counter,
  [sym_stack_pointer] = sym_stack_pointer,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [sym_identifier] = sym_identifier,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [sym_escape_sequence] = sym_escape_sequence,
  [sym_number] = sym_number,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_char_token1] = aux_sym_char_token1,
  [sym_relative] = sym_relative,
  [sym_memory] = sym_memory,
  [sym_port] = sym_port,
  [sym_source_file] = sym_source_file,
  [sym__header] = sym__header,
  [sym_BITS] = sym_BITS,
  [sym_MINREG] = sym_MINREG,
  [sym_MINHEAP] = sym_MINHEAP,
  [sym_MINSTACK] = sym_MINSTACK,
  [sym_RUN] = sym_RUN,
  [sym_DW] = sym_DW,
  [sym_label] = sym_label,
  [sym__operand] = sym__operand,
  [sym_placeholder] = sym_placeholder,
  [sym__dw_literal] = sym__dw_literal,
  [sym_array] = sym_array,
  [sym_string] = sym_string,
  [sym__immediate_literal] = sym__immediate_literal,
  [sym_char] = sym_char,
  [sym_instruction] = sym_instruction,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_source_file_repeat2] = aux_sym_source_file_repeat2,
  [aux_sym_DW_repeat1] = aux_sym_DW_repeat1,
  [aux_sym_array_repeat1] = aux_sym_array_repeat1,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
  [aux_sym_instruction_repeat1] = aux_sym_instruction_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_macro] = {
    .visible = true,
    .named = true,
  },
  [sym__whitespace] = {
    .visible = false,
    .named = true,
  },
  [sym__newline] = {
    .visible = false,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BITS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_MINREG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_MINHEAP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_MINSTACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RUN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RAM] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ROM] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DW] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [sym_register] = {
    .visible = true,
    .named = true,
  },
  [sym_program_counter] = {
    .visible = true,
    .named = true,
  },
  [sym_stack_pointer] = {
    .visible = true,
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
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_char_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_relative] = {
    .visible = true,
    .named = true,
  },
  [sym_memory] = {
    .visible = true,
    .named = true,
  },
  [sym_port] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__header] = {
    .visible = false,
    .named = true,
  },
  [sym_BITS] = {
    .visible = true,
    .named = true,
  },
  [sym_MINREG] = {
    .visible = true,
    .named = true,
  },
  [sym_MINHEAP] = {
    .visible = true,
    .named = true,
  },
  [sym_MINSTACK] = {
    .visible = true,
    .named = true,
  },
  [sym_RUN] = {
    .visible = true,
    .named = true,
  },
  [sym_DW] = {
    .visible = true,
    .named = true,
  },
  [sym_label] = {
    .visible = true,
    .named = true,
  },
  [sym__operand] = {
    .visible = false,
    .named = true,
  },
  [sym_placeholder] = {
    .visible = true,
    .named = true,
  },
  [sym__dw_literal] = {
    .visible = false,
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
  [sym__immediate_literal] = {
    .visible = false,
    .named = true,
  },
  [sym_char] = {
    .visible = true,
    .named = true,
  },
  [sym_instruction] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_source_file_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_DW_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_array_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_instruction_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_comparison = 1,
  field_define_word = 2,
  field_header = 3,
  field_header_type = 4,
  field_inst = 5,
  field_item = 6,
  field_label = 7,
  field_name = 8,
  field_operand = 9,
  field_value = 10,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_comparison] = "comparison",
  [field_define_word] = "define_word",
  [field_header] = "header",
  [field_header_type] = "header_type",
  [field_inst] = "inst",
  [field_item] = "item",
  [field_label] = "label",
  [field_name] = "name",
  [field_operand] = "operand",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 1},
  [4] = {.index = 3, .length = 1},
  [5] = {.index = 4, .length = 3},
  [6] = {.index = 7, .length = 1},
  [7] = {.index = 8, .length = 2},
  [8] = {.index = 10, .length = 1},
  [9] = {.index = 11, .length = 2},
  [10] = {.index = 13, .length = 1},
  [11] = {.index = 14, .length = 1},
  [12] = {.index = 15, .length = 1},
  [13] = {.index = 16, .length = 1},
  [14] = {.index = 17, .length = 1},
  [15] = {.index = 18, .length = 3},
  [16] = {.index = 21, .length = 4},
  [17] = {.index = 25, .length = 4},
  [18] = {.index = 29, .length = 4},
  [19] = {.index = 33, .length = 6},
  [20] = {.index = 39, .length = 2},
  [21] = {.index = 41, .length = 2},
  [22] = {.index = 43, .length = 2},
  [23] = {.index = 45, .length = 2},
  [24] = {.index = 47, .length = 4},
  [25] = {.index = 51, .length = 4},
  [26] = {.index = 55, .length = 4},
  [27] = {.index = 59, .length = 3},
  [28] = {.index = 62, .length = 2},
  [29] = {.index = 64, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 0},
  [1] =
    {field_header, 0},
  [2] =
    {field_define_word, 0},
  [3] =
    {field_inst, 0},
  [4] =
    {field_define_word, 0, .inherited = true},
    {field_header, 0, .inherited = true},
    {field_inst, 0, .inherited = true},
  [7] =
    {field_operand, 0},
  [8] =
    {field_name, 0},
    {field_operand, 1, .inherited = true},
  [10] =
    {field_value, 1},
  [11] =
    {field_header_type, 0},
    {field_value, 1},
  [13] =
    {field_name, 1},
  [14] =
    {field_label, 0},
  [15] =
    {field_header, 1},
  [16] =
    {field_define_word, 1},
  [17] =
    {field_inst, 1},
  [18] =
    {field_define_word, 1, .inherited = true},
    {field_header, 1, .inherited = true},
    {field_inst, 1, .inherited = true},
  [21] =
    {field_define_word, 0, .inherited = true},
    {field_header, 0, .inherited = true},
    {field_header, 1},
    {field_inst, 0, .inherited = true},
  [25] =
    {field_define_word, 0, .inherited = true},
    {field_define_word, 1},
    {field_header, 0, .inherited = true},
    {field_inst, 0, .inherited = true},
  [29] =
    {field_define_word, 0, .inherited = true},
    {field_header, 0, .inherited = true},
    {field_inst, 0, .inherited = true},
    {field_inst, 1},
  [33] =
    {field_define_word, 0, .inherited = true},
    {field_define_word, 1, .inherited = true},
    {field_header, 0, .inherited = true},
    {field_header, 1, .inherited = true},
    {field_inst, 0, .inherited = true},
    {field_inst, 1, .inherited = true},
  [39] =
    {field_label, 0, .inherited = true},
    {field_name, 1},
  [41] =
    {field_label, 0, .inherited = true},
    {field_label, 1, .inherited = true},
  [43] =
    {field_operand, 0, .inherited = true},
    {field_operand, 1, .inherited = true},
  [45] =
    {field_comparison, 1},
    {field_value, 2},
  [47] =
    {field_define_word, 1, .inherited = true},
    {field_header, 1, .inherited = true},
    {field_header, 2},
    {field_inst, 1, .inherited = true},
  [51] =
    {field_define_word, 1, .inherited = true},
    {field_define_word, 2},
    {field_header, 1, .inherited = true},
    {field_inst, 1, .inherited = true},
  [55] =
    {field_define_word, 1, .inherited = true},
    {field_header, 1, .inherited = true},
    {field_inst, 1, .inherited = true},
    {field_inst, 2},
  [59] =
    {field_label, 0, .inherited = true},
    {field_name, 1},
    {field_operand, 2, .inherited = true},
  [62] =
    {field_label, 0, .inherited = true},
    {field_value, 2},
  [64] =
    {field_item, 1},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static inline bool aux_sym_string_token1_character_set_1(int32_t c) {
  return (c < 8232
    ? (c < 160
      ? (c < ' '
        ? (c >= '\t' && c <= '\f')
        : c <= ' ')
      : (c <= 160 || (c < 8192
        ? c == 5760
        : c <= 8202)))
    : (c <= 8233 || (c < 12288
      ? (c < 8287
        ? c == 8239
        : c <= 8287)
      : (c <= 12288 || c == 65279))));
}

static inline bool aux_sym_string_token1_character_set_2(int32_t c) {
  return (c < 8192
    ? (c < ' '
      ? (c < 11
        ? c == '\t'
        : c <= '\f')
      : (c <= ' ' || (c < 5760
        ? c == 160
        : c <= 5760)))
    : (c <= 8202 || (c < 8287
      ? (c < 8239
        ? (c >= 8232 && c <= 8233)
        : c <= 8239)
      : (c <= 8287 || (c < 65279
        ? c == 12288
        : c <= 65279)))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(39);
      if (lookahead == '\n') ADVANCE(145);
      if (lookahead == '\r') ADVANCE(90);
      if (lookahead == '"') ADVANCE(89);
      if (lookahead == '#') ADVANCE(97);
      if (lookahead == '$') ADVANCE(97);
      if (lookahead == '%') ADVANCE(131);
      if (lookahead == '\'') ADVANCE(132);
      if (lookahead == '.') ADVANCE(132);
      if (lookahead == '/') ADVANCE(92);
      if (lookahead == '0') ADVANCE(122);
      if (lookahead == '<') ADVANCE(103);
      if (lookahead == '=') ADVANCE(103);
      if (lookahead == '>') ADVANCE(103);
      if (lookahead == '@') ADVANCE(131);
      if (lookahead == 'B') ADVANCE(112);
      if (lookahead == 'D') ADVANCE(121);
      if (lookahead == 'M') ADVANCE(99);
      if (lookahead == 'P') ADVANCE(106);
      if (lookahead == 'R') ADVANCE(95);
      if (lookahead == 'S') ADVANCE(117);
      if (lookahead == '[') ADVANCE(132);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead == ']') ADVANCE(132);
      if (lookahead == 'm') ADVANCE(100);
      if (lookahead == 'r') ADVANCE(96);
      if (lookahead == '~') ADVANCE(123);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(98);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(127);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(130);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      if (lookahead != 0) ADVANCE(132);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(89);
      if (lookahead == '/') ADVANCE(92);
      if (lookahead == '\\') ADVANCE(18);
      if (aux_sym_string_token1_character_set_2(lookahead)) ADVANCE(130);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(132);
      END_STATE();
    case 2:
      if (lookahead == '*') ADVANCE(4);
      if (lookahead == '/') ADVANCE(44);
      END_STATE();
    case 3:
      if (lookahead == '*') ADVANCE(3);
      if (lookahead == '/') ADVANCE(43);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 4:
      if (lookahead == '*') ADVANCE(3);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '.') ADVANCE(56);
      if (lookahead == '/') ADVANCE(2);
      if (lookahead == '@') ADVANCE(34);
      if (lookahead == 'D') ADVANCE(85);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(23);
      if (aux_sym_string_token1_character_set_2(lookahead)) ADVANCE(41);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 6:
      if (lookahead == '/') ADVANCE(2);
      if (lookahead == 'R') ADVANCE(14);
      if (aux_sym_string_token1_character_set_2(lookahead)) ADVANCE(41);
      END_STATE();
    case 7:
      if (lookahead == '/') ADVANCE(144);
      if (lookahead == '\\') ADVANCE(18);
      if (aux_sym_string_token1_character_set_2(lookahead)) ADVANCE(146);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(143);
      END_STATE();
    case 8:
      if (lookahead == '0') ADVANCE(137);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(140);
      END_STATE();
    case 9:
      if (lookahead == '0') ADVANCE(148);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(149);
      END_STATE();
    case 10:
      if (lookahead == '0') ADVANCE(151);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(150);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 11:
      if (lookahead == '0') ADVANCE(57);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(58);
      END_STATE();
    case 12:
      if (lookahead == '=') ADVANCE(47);
      END_STATE();
    case 13:
      if (lookahead == '=') ADVANCE(48);
      END_STATE();
    case 14:
      if (lookahead == 'A') ADVANCE(16);
      if (lookahead == 'O') ADVANCE(17);
      END_STATE();
    case 15:
      if (lookahead == 'I') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(23);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 16:
      if (lookahead == 'M') ADVANCE(53);
      END_STATE();
    case 17:
      if (lookahead == 'M') ADVANCE(54);
      END_STATE();
    case 18:
      if (lookahead == 'U') ADVANCE(33);
      if (lookahead == 'u') ADVANCE(29);
      if (lookahead == 'x') ADVANCE(25);
      if (lookahead != 0) ADVANCE(133);
      END_STATE();
    case 19:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(22);
      END_STATE();
    case 20:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(138);
      END_STATE();
    case 21:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(139);
      END_STATE();
    case 22:
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(147);
      END_STATE();
    case 23:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(23);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 24:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(133);
      END_STATE();
    case 25:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(136);
      END_STATE();
    case 26:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(141);
      END_STATE();
    case 27:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(24);
      END_STATE();
    case 28:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(27);
      END_STATE();
    case 29:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(28);
      END_STATE();
    case 30:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(29);
      END_STATE();
    case 31:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(30);
      END_STATE();
    case 32:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(31);
      END_STATE();
    case 33:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(32);
      END_STATE();
    case 34:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 35:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 36:
      if (eof) ADVANCE(39);
      if (lookahead == '"') ADVANCE(89);
      if (lookahead == '#') ADVANCE(9);
      if (lookahead == '%') ADVANCE(35);
      if (lookahead == '\'') ADVANCE(142);
      if (lookahead == '.') ADVANCE(56);
      if (lookahead == '/') ADVANCE(2);
      if (lookahead == '0') ADVANCE(137);
      if (lookahead == '<') ADVANCE(64);
      if (lookahead == '=') ADVANCE(12);
      if (lookahead == '>') ADVANCE(13);
      if (lookahead == '@') ADVANCE(34);
      if (lookahead == '[') ADVANCE(87);
      if (lookahead == ']') ADVANCE(88);
      if (lookahead == '~') ADVANCE(19);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(42);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(8);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(10);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(140);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(41);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 37:
      if (eof) ADVANCE(39);
      if (lookahead == '#') ADVANCE(9);
      if (lookahead == '$') ADVANCE(11);
      if (lookahead == '%') ADVANCE(35);
      if (lookahead == '\'') ADVANCE(142);
      if (lookahead == '.') ADVANCE(56);
      if (lookahead == '/') ADVANCE(2);
      if (lookahead == '0') ADVANCE(137);
      if (lookahead == '<') ADVANCE(63);
      if (lookahead == '@') ADVANCE(34);
      if (lookahead == 'P') ADVANCE(70);
      if (lookahead == 'S') ADVANCE(80);
      if (lookahead == '~') ADVANCE(19);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(42);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(8);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(10);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(66);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(140);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(41);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 38:
      if (eof) ADVANCE(39);
      if (lookahead == '\'') ADVANCE(142);
      if (lookahead == '.') ADVANCE(56);
      if (lookahead == '/') ADVANCE(2);
      if (lookahead == '>') ADVANCE(65);
      if (lookahead == '@') ADVANCE(34);
      if (lookahead == 'B') ADVANCE(75);
      if (lookahead == 'D') ADVANCE(85);
      if (lookahead == 'M') ADVANCE(15);
      if (lookahead == 'R') ADVANCE(84);
      if (lookahead == ']') ADVANCE(88);
      if (lookahead == 'm') ADVANCE(23);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(42);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(41);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_macro);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym__whitespace);
      if (aux_sym_string_token1_character_set_2(lookahead)) ADVANCE(41);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(42);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(44);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_BITS);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_MINREG);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_MINHEAP);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_MINSTACK);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_RUN);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_RAM);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_ROM);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_DW);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_register);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == '0') ADVANCE(58);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(58);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == '0') ADVANCE(59);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(59);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_register);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_program_counter);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_stack_pointer);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(46);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '0') ADVANCE(60);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(59);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C') ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'G') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'H') ADVANCE(71);
      if (lookahead == 'R') ADVANCE(72);
      if (lookahead == 'S') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'K') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'W') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\r') ADVANCE(90);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(132);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\r') ADVANCE(132);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(91);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '*') ADVANCE(94);
      if (lookahead == '/') ADVANCE(91);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(132);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '*') ADVANCE(93);
      if (lookahead == '/') ADVANCE(132);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(94);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '*') ADVANCE(93);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(94);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '0') ADVANCE(131);
      if (lookahead == 'A') ADVANCE(114);
      if (lookahead == 'O') ADVANCE(114);
      if (lookahead == 'U') ADVANCE(115);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(102);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(132);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '0') ADVANCE(131);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(102);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(132);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '0') ADVANCE(132);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(101);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(132);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '0') ADVANCE(122);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(127);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(132);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '0') ADVANCE(128);
      if (lookahead == 'I') ADVANCE(116);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(102);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(132);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '0') ADVANCE(128);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(102);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(132);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '0') ADVANCE(101);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(101);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(132);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '0') ADVANCE(102);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(102);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(132);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '=') ADVANCE(132);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(132);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'A') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(132);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'A') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(132);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'C') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(132);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'C') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(132);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'E') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(132);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'E') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(132);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'G') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(132);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'H') ADVANCE(108);
      if (lookahead == 'R') ADVANCE(109);
      if (lookahead == 'S') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(132);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'I') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(132);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'K') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(132);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'M') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(132);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'N') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(132);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'N') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(132);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'P') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(132);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'S') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(132);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'T') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(132);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'T') ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(132);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'W') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(132);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'b') ADVANCE(124);
      if (lookahead == 'o') ADVANCE(125);
      if (lookahead == 'x') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(127);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(132);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(126);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(132);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(124);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(132);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(125);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(132);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(101);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(132);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(127);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(132);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(128);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(132);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(129);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(132);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (aux_sym_string_token1_character_set_2(lookahead)) ADVANCE(130);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(132);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(132);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(132);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(133);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(134);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(135);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'b') ADVANCE(20);
      if (lookahead == 'o') ADVANCE(21);
      if (lookahead == 'x') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(140);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(138);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(139);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(140);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(141);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym_char_token1);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym_char_token1);
      if (lookahead == '*') ADVANCE(4);
      if (lookahead == '/') ADVANCE(44);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym_char_token1);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(42);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym_char_token1);
      if (aux_sym_string_token1_character_set_2(lookahead)) ADVANCE(41);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_relative);
      if (lookahead == '0') ADVANCE(147);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(147);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_memory);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_memory);
      if (lookahead == '0') ADVANCE(149);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(149);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_memory);
      if (lookahead == '0') ADVANCE(150);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(150);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_memory);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(23);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_port);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 38},
  [2] = {.lex_state = 38},
  [3] = {.lex_state = 38},
  [4] = {.lex_state = 38},
  [5] = {.lex_state = 36},
  [6] = {.lex_state = 38},
  [7] = {.lex_state = 37},
  [8] = {.lex_state = 36},
  [9] = {.lex_state = 36},
  [10] = {.lex_state = 37},
  [11] = {.lex_state = 37},
  [12] = {.lex_state = 37},
  [13] = {.lex_state = 37},
  [14] = {.lex_state = 37},
  [15] = {.lex_state = 37},
  [16] = {.lex_state = 36},
  [17] = {.lex_state = 36},
  [18] = {.lex_state = 36},
  [19] = {.lex_state = 37},
  [20] = {.lex_state = 37},
  [21] = {.lex_state = 36},
  [22] = {.lex_state = 36},
  [23] = {.lex_state = 36},
  [24] = {.lex_state = 36},
  [25] = {.lex_state = 37},
  [26] = {.lex_state = 36},
  [27] = {.lex_state = 37},
  [28] = {.lex_state = 36},
  [29] = {.lex_state = 36},
  [30] = {.lex_state = 36},
  [31] = {.lex_state = 36},
  [32] = {.lex_state = 38},
  [33] = {.lex_state = 36},
  [34] = {.lex_state = 36},
  [35] = {.lex_state = 36},
  [36] = {.lex_state = 38},
  [37] = {.lex_state = 38},
  [38] = {.lex_state = 38},
  [39] = {.lex_state = 5},
  [40] = {.lex_state = 5},
  [41] = {.lex_state = 1},
  [42] = {.lex_state = 1},
  [43] = {.lex_state = 1},
  [44] = {.lex_state = 5},
  [45] = {.lex_state = 38},
  [46] = {.lex_state = 7},
  [47] = {.lex_state = 38},
  [48] = {.lex_state = 38},
  [49] = {.lex_state = 7},
  [50] = {.lex_state = 38},
  [51] = {.lex_state = 38},
  [52] = {.lex_state = 38},
  [53] = {.lex_state = 38},
  [54] = {.lex_state = 38},
  [55] = {.lex_state = 38},
  [56] = {.lex_state = 38},
  [57] = {.lex_state = 38},
  [58] = {.lex_state = 38},
  [59] = {.lex_state = 38},
  [60] = {.lex_state = 38},
  [61] = {.lex_state = 38},
  [62] = {.lex_state = 38},
  [63] = {.lex_state = 38},
  [64] = {.lex_state = 38},
  [65] = {.lex_state = 38},
  [66] = {.lex_state = 6},
  [67] = {.lex_state = 38},
  [68] = {.lex_state = 38},
  [69] = {.lex_state = 38},
  [70] = {.lex_state = 38},
  [71] = {.lex_state = 38},
  [72] = {.lex_state = 36},
  [73] = {.lex_state = 36},
  [74] = {.lex_state = 38},
  [75] = {.lex_state = 38},
  [76] = {.lex_state = 38},
  [77] = {.lex_state = 36},
  [78] = {.lex_state = 38},
  [79] = {.lex_state = 38},
  [80] = {.lex_state = 36},
  [81] = {.lex_state = 38},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_macro] = ACTIONS(1),
    [sym__whitespace] = ACTIONS(3),
    [sym__newline] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [anon_sym_BITS] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_MINREG] = ACTIONS(1),
    [anon_sym_MINHEAP] = ACTIONS(1),
    [anon_sym_MINSTACK] = ACTIONS(1),
    [anon_sym_RUN] = ACTIONS(1),
    [anon_sym_RAM] = ACTIONS(1),
    [anon_sym_ROM] = ACTIONS(1),
    [anon_sym_DW] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [sym_register] = ACTIONS(1),
    [sym_program_counter] = ACTIONS(1),
    [sym_stack_pointer] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [aux_sym_string_token1] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [aux_sym_char_token1] = ACTIONS(1),
    [sym_relative] = ACTIONS(1),
    [sym_memory] = ACTIONS(1),
    [sym_port] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(71),
    [sym__header] = STATE(64),
    [sym_BITS] = STATE(64),
    [sym_MINREG] = STATE(64),
    [sym_MINHEAP] = STATE(64),
    [sym_MINSTACK] = STATE(64),
    [sym_RUN] = STATE(64),
    [sym_DW] = STATE(54),
    [sym_label] = STATE(69),
    [sym_instruction] = STATE(67),
    [aux_sym_source_file_repeat1] = STATE(2),
    [aux_sym_source_file_repeat2] = STATE(6),
    [aux_sym_DW_repeat1] = STATE(40),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_macro] = ACTIONS(7),
    [sym__whitespace] = ACTIONS(9),
    [sym__newline] = ACTIONS(11),
    [sym_comment] = ACTIONS(9),
    [anon_sym_BITS] = ACTIONS(13),
    [anon_sym_MINREG] = ACTIONS(15),
    [anon_sym_MINHEAP] = ACTIONS(17),
    [anon_sym_MINSTACK] = ACTIONS(19),
    [anon_sym_RUN] = ACTIONS(21),
    [anon_sym_DW] = ACTIONS(23),
    [anon_sym_DOT] = ACTIONS(25),
    [sym_identifier] = ACTIONS(27),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 19,
    ACTIONS(7), 1,
      sym_macro,
    ACTIONS(13), 1,
      anon_sym_BITS,
    ACTIONS(15), 1,
      anon_sym_MINREG,
    ACTIONS(17), 1,
      anon_sym_MINHEAP,
    ACTIONS(19), 1,
      anon_sym_MINSTACK,
    ACTIONS(21), 1,
      anon_sym_RUN,
    ACTIONS(23), 1,
      anon_sym_DW,
    ACTIONS(25), 1,
      anon_sym_DOT,
    ACTIONS(27), 1,
      sym_identifier,
    ACTIONS(29), 1,
      ts_builtin_sym_end,
    ACTIONS(31), 1,
      sym__newline,
    STATE(3), 1,
      aux_sym_source_file_repeat2,
    STATE(32), 1,
      aux_sym_source_file_repeat1,
    STATE(40), 1,
      aux_sym_DW_repeat1,
    STATE(53), 1,
      sym_DW,
    STATE(61), 1,
      sym_instruction,
    STATE(69), 1,
      sym_label,
    ACTIONS(9), 2,
      sym__whitespace,
      sym_comment,
    STATE(50), 6,
      sym__header,
      sym_BITS,
      sym_MINREG,
      sym_MINHEAP,
      sym_MINSTACK,
      sym_RUN,
  [64] = 17,
    ACTIONS(7), 1,
      sym_macro,
    ACTIONS(13), 1,
      anon_sym_BITS,
    ACTIONS(15), 1,
      anon_sym_MINREG,
    ACTIONS(17), 1,
      anon_sym_MINHEAP,
    ACTIONS(19), 1,
      anon_sym_MINSTACK,
    ACTIONS(21), 1,
      anon_sym_RUN,
    ACTIONS(23), 1,
      anon_sym_DW,
    ACTIONS(25), 1,
      anon_sym_DOT,
    ACTIONS(27), 1,
      sym_identifier,
    ACTIONS(33), 1,
      ts_builtin_sym_end,
    STATE(4), 1,
      aux_sym_source_file_repeat2,
    STATE(40), 1,
      aux_sym_DW_repeat1,
    STATE(59), 1,
      sym_DW,
    STATE(60), 1,
      sym_instruction,
    STATE(69), 1,
      sym_label,
    ACTIONS(9), 2,
      sym__whitespace,
      sym_comment,
    STATE(58), 6,
      sym__header,
      sym_BITS,
      sym_MINREG,
      sym_MINHEAP,
      sym_MINSTACK,
      sym_RUN,
  [122] = 17,
    ACTIONS(35), 1,
      ts_builtin_sym_end,
    ACTIONS(37), 1,
      sym_macro,
    ACTIONS(40), 1,
      anon_sym_BITS,
    ACTIONS(43), 1,
      anon_sym_MINREG,
    ACTIONS(46), 1,
      anon_sym_MINHEAP,
    ACTIONS(49), 1,
      anon_sym_MINSTACK,
    ACTIONS(52), 1,
      anon_sym_RUN,
    ACTIONS(55), 1,
      anon_sym_DW,
    ACTIONS(58), 1,
      anon_sym_DOT,
    ACTIONS(61), 1,
      sym_identifier,
    STATE(4), 1,
      aux_sym_source_file_repeat2,
    STATE(40), 1,
      aux_sym_DW_repeat1,
    STATE(68), 1,
      sym_DW,
    STATE(69), 1,
      sym_label,
    STATE(74), 1,
      sym_instruction,
    ACTIONS(9), 2,
      sym__whitespace,
      sym_comment,
    STATE(75), 6,
      sym__header,
      sym_BITS,
      sym_MINREG,
      sym_MINHEAP,
      sym_MINSTACK,
      sym_RUN,
  [180] = 11,
    ACTIONS(66), 1,
      sym__newline,
    ACTIONS(68), 1,
      anon_sym_DOT,
    ACTIONS(70), 1,
      anon_sym_LT,
    ACTIONS(72), 1,
      anon_sym_LBRACK,
    ACTIONS(74), 1,
      anon_sym_RBRACK,
    ACTIONS(76), 1,
      anon_sym_DQUOTE,
    ACTIONS(78), 1,
      anon_sym_SQUOTE,
    ACTIONS(80), 1,
      sym_memory,
    ACTIONS(9), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(64), 5,
      sym_macro,
      sym_identifier,
      sym_number,
      sym_relative,
      sym_port,
    STATE(8), 8,
      sym_label,
      sym_placeholder,
      sym__dw_literal,
      sym_array,
      sym_string,
      sym__immediate_literal,
      sym_char,
      aux_sym_array_repeat1,
  [226] = 17,
    ACTIONS(7), 1,
      sym_macro,
    ACTIONS(13), 1,
      anon_sym_BITS,
    ACTIONS(15), 1,
      anon_sym_MINREG,
    ACTIONS(17), 1,
      anon_sym_MINHEAP,
    ACTIONS(19), 1,
      anon_sym_MINSTACK,
    ACTIONS(21), 1,
      anon_sym_RUN,
    ACTIONS(23), 1,
      anon_sym_DW,
    ACTIONS(25), 1,
      anon_sym_DOT,
    ACTIONS(27), 1,
      sym_identifier,
    ACTIONS(82), 1,
      ts_builtin_sym_end,
    STATE(4), 1,
      aux_sym_source_file_repeat2,
    STATE(40), 1,
      aux_sym_DW_repeat1,
    STATE(57), 1,
      sym_DW,
    STATE(63), 1,
      sym_instruction,
    STATE(69), 1,
      sym_label,
    ACTIONS(9), 2,
      sym__whitespace,
      sym_comment,
    STATE(62), 6,
      sym__header,
      sym_BITS,
      sym_MINREG,
      sym_MINHEAP,
      sym_MINSTACK,
      sym_RUN,
  [284] = 9,
    ACTIONS(89), 1,
      anon_sym_DOT,
    ACTIONS(95), 1,
      anon_sym_LT,
    ACTIONS(98), 1,
      anon_sym_SQUOTE,
    STATE(7), 1,
      aux_sym_instruction_repeat1,
    ACTIONS(9), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(84), 2,
      ts_builtin_sym_end,
      sym__newline,
    ACTIONS(86), 4,
      sym_macro,
      sym_number,
      sym_relative,
      sym_port,
    ACTIONS(92), 5,
      sym_register,
      sym_program_counter,
      sym_stack_pointer,
      sym_identifier,
      sym_memory,
    STATE(20), 5,
      sym_label,
      sym__operand,
      sym_placeholder,
      sym__immediate_literal,
      sym_char,
  [325] = 10,
    ACTIONS(68), 1,
      anon_sym_DOT,
    ACTIONS(70), 1,
      anon_sym_LT,
    ACTIONS(72), 1,
      anon_sym_LBRACK,
    ACTIONS(76), 1,
      anon_sym_DQUOTE,
    ACTIONS(78), 1,
      anon_sym_SQUOTE,
    ACTIONS(103), 1,
      anon_sym_RBRACK,
    ACTIONS(105), 1,
      sym_memory,
    ACTIONS(9), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(101), 5,
      sym_macro,
      sym_identifier,
      sym_number,
      sym_relative,
      sym_port,
    STATE(9), 8,
      sym_label,
      sym_placeholder,
      sym__dw_literal,
      sym_array,
      sym_string,
      sym__immediate_literal,
      sym_char,
      aux_sym_array_repeat1,
  [368] = 10,
    ACTIONS(110), 1,
      anon_sym_DOT,
    ACTIONS(113), 1,
      anon_sym_LT,
    ACTIONS(116), 1,
      anon_sym_LBRACK,
    ACTIONS(119), 1,
      anon_sym_RBRACK,
    ACTIONS(121), 1,
      anon_sym_DQUOTE,
    ACTIONS(124), 1,
      anon_sym_SQUOTE,
    ACTIONS(127), 1,
      sym_memory,
    ACTIONS(9), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(107), 5,
      sym_macro,
      sym_identifier,
      sym_number,
      sym_relative,
      sym_port,
    STATE(9), 8,
      sym_label,
      sym_placeholder,
      sym__dw_literal,
      sym_array,
      sym_string,
      sym__immediate_literal,
      sym_char,
      aux_sym_array_repeat1,
  [411] = 9,
    ACTIONS(25), 1,
      anon_sym_DOT,
    ACTIONS(136), 1,
      anon_sym_LT,
    ACTIONS(138), 1,
      anon_sym_SQUOTE,
    STATE(14), 1,
      aux_sym_instruction_repeat1,
    ACTIONS(9), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(130), 2,
      ts_builtin_sym_end,
      sym__newline,
    ACTIONS(132), 4,
      sym_macro,
      sym_number,
      sym_relative,
      sym_port,
    ACTIONS(134), 5,
      sym_register,
      sym_program_counter,
      sym_stack_pointer,
      sym_identifier,
      sym_memory,
    STATE(20), 5,
      sym_label,
      sym__operand,
      sym_placeholder,
      sym__immediate_literal,
      sym_char,
  [452] = 9,
    ACTIONS(25), 1,
      anon_sym_DOT,
    ACTIONS(136), 1,
      anon_sym_LT,
    ACTIONS(138), 1,
      anon_sym_SQUOTE,
    STATE(12), 1,
      aux_sym_instruction_repeat1,
    ACTIONS(9), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(130), 2,
      ts_builtin_sym_end,
      sym__newline,
    ACTIONS(132), 4,
      sym_macro,
      sym_number,
      sym_relative,
      sym_port,
    ACTIONS(134), 5,
      sym_register,
      sym_program_counter,
      sym_stack_pointer,
      sym_identifier,
      sym_memory,
    STATE(20), 5,
      sym_label,
      sym__operand,
      sym_placeholder,
      sym__immediate_literal,
      sym_char,
  [493] = 9,
    ACTIONS(25), 1,
      anon_sym_DOT,
    ACTIONS(136), 1,
      anon_sym_LT,
    ACTIONS(138), 1,
      anon_sym_SQUOTE,
    STATE(7), 1,
      aux_sym_instruction_repeat1,
    ACTIONS(9), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(140), 2,
      ts_builtin_sym_end,
      sym__newline,
    ACTIONS(132), 4,
      sym_macro,
      sym_number,
      sym_relative,
      sym_port,
    ACTIONS(134), 5,
      sym_register,
      sym_program_counter,
      sym_stack_pointer,
      sym_identifier,
      sym_memory,
    STATE(20), 5,
      sym_label,
      sym__operand,
      sym_placeholder,
      sym__immediate_literal,
      sym_char,
  [534] = 9,
    ACTIONS(25), 1,
      anon_sym_DOT,
    ACTIONS(136), 1,
      anon_sym_LT,
    ACTIONS(138), 1,
      anon_sym_SQUOTE,
    STATE(15), 1,
      aux_sym_instruction_repeat1,
    ACTIONS(9), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(142), 2,
      ts_builtin_sym_end,
      sym__newline,
    ACTIONS(132), 4,
      sym_macro,
      sym_number,
      sym_relative,
      sym_port,
    ACTIONS(134), 5,
      sym_register,
      sym_program_counter,
      sym_stack_pointer,
      sym_identifier,
      sym_memory,
    STATE(20), 5,
      sym_label,
      sym__operand,
      sym_placeholder,
      sym__immediate_literal,
      sym_char,
  [575] = 9,
    ACTIONS(25), 1,
      anon_sym_DOT,
    ACTIONS(136), 1,
      anon_sym_LT,
    ACTIONS(138), 1,
      anon_sym_SQUOTE,
    STATE(7), 1,
      aux_sym_instruction_repeat1,
    ACTIONS(9), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(140), 2,
      ts_builtin_sym_end,
      sym__newline,
    ACTIONS(132), 4,
      sym_macro,
      sym_number,
      sym_relative,
      sym_port,
    ACTIONS(134), 5,
      sym_register,
      sym_program_counter,
      sym_stack_pointer,
      sym_identifier,
      sym_memory,
    STATE(20), 5,
      sym_label,
      sym__operand,
      sym_placeholder,
      sym__immediate_literal,
      sym_char,
  [616] = 9,
    ACTIONS(25), 1,
      anon_sym_DOT,
    ACTIONS(136), 1,
      anon_sym_LT,
    ACTIONS(138), 1,
      anon_sym_SQUOTE,
    STATE(7), 1,
      aux_sym_instruction_repeat1,
    ACTIONS(9), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(144), 2,
      ts_builtin_sym_end,
      sym__newline,
    ACTIONS(132), 4,
      sym_macro,
      sym_number,
      sym_relative,
      sym_port,
    ACTIONS(134), 5,
      sym_register,
      sym_program_counter,
      sym_stack_pointer,
      sym_identifier,
      sym_memory,
    STATE(20), 5,
      sym_label,
      sym__operand,
      sym_placeholder,
      sym__immediate_literal,
      sym_char,
  [657] = 9,
    ACTIONS(25), 1,
      anon_sym_DOT,
    ACTIONS(72), 1,
      anon_sym_LBRACK,
    ACTIONS(76), 1,
      anon_sym_DQUOTE,
    ACTIONS(136), 1,
      anon_sym_LT,
    ACTIONS(138), 1,
      anon_sym_SQUOTE,
    ACTIONS(148), 1,
      sym_memory,
    ACTIONS(9), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(146), 5,
      sym_macro,
      sym_identifier,
      sym_number,
      sym_relative,
      sym_port,
    STATE(56), 7,
      sym_label,
      sym_placeholder,
      sym__dw_literal,
      sym_array,
      sym_string,
      sym__immediate_literal,
      sym_char,
  [696] = 9,
    ACTIONS(25), 1,
      anon_sym_DOT,
    ACTIONS(72), 1,
      anon_sym_LBRACK,
    ACTIONS(76), 1,
      anon_sym_DQUOTE,
    ACTIONS(136), 1,
      anon_sym_LT,
    ACTIONS(138), 1,
      anon_sym_SQUOTE,
    ACTIONS(152), 1,
      sym_memory,
    ACTIONS(9), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(150), 5,
      sym_macro,
      sym_identifier,
      sym_number,
      sym_relative,
      sym_port,
    STATE(65), 7,
      sym_label,
      sym_placeholder,
      sym__dw_literal,
      sym_array,
      sym_string,
      sym__immediate_literal,
      sym_char,
  [735] = 8,
    ACTIONS(25), 1,
      anon_sym_DOT,
    ACTIONS(138), 1,
      anon_sym_SQUOTE,
    ACTIONS(158), 1,
      anon_sym_LT,
    ACTIONS(160), 1,
      sym_memory,
    ACTIONS(9), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(156), 3,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
    STATE(55), 4,
      sym_label,
      sym_placeholder,
      sym__immediate_literal,
      sym_char,
    ACTIONS(154), 5,
      sym_macro,
      sym_identifier,
      sym_number,
      sym_relative,
      sym_port,
  [770] = 3,
    ACTIONS(9), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(164), 5,
      sym_register,
      sym_program_counter,
      sym_stack_pointer,
      sym_identifier,
      sym_memory,
    ACTIONS(162), 9,
      ts_builtin_sym_end,
      sym_macro,
      sym__newline,
      anon_sym_DOT,
      anon_sym_LT,
      sym_number,
      anon_sym_SQUOTE,
      sym_relative,
      sym_port,
  [793] = 3,
    ACTIONS(9), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(168), 5,
      sym_register,
      sym_program_counter,
      sym_stack_pointer,
      sym_identifier,
      sym_memory,
    ACTIONS(166), 9,
      ts_builtin_sym_end,
      sym_macro,
      sym__newline,
      anon_sym_DOT,
      anon_sym_LT,
      sym_number,
      anon_sym_SQUOTE,
      sym_relative,
      sym_port,
  [816] = 3,
    ACTIONS(172), 1,
      sym_memory,
    ACTIONS(9), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(170), 13,
      ts_builtin_sym_end,
      sym_macro,
      sym__newline,
      anon_sym_DOT,
      anon_sym_LT,
      sym_identifier,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      sym_number,
      anon_sym_SQUOTE,
      sym_relative,
      sym_port,
  [839] = 3,
    ACTIONS(176), 1,
      sym_memory,
    ACTIONS(9), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(174), 13,
      ts_builtin_sym_end,
      sym_macro,
      sym__newline,
      anon_sym_DOT,
      anon_sym_LT,
      sym_identifier,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      sym_number,
      anon_sym_SQUOTE,
      sym_relative,
      sym_port,
  [862] = 3,
    ACTIONS(180), 1,
      sym_memory,
    ACTIONS(9), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(178), 13,
      ts_builtin_sym_end,
      sym_macro,
      sym__newline,
      anon_sym_DOT,
      anon_sym_LT,
      sym_identifier,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      sym_number,
      anon_sym_SQUOTE,
      sym_relative,
      sym_port,
  [885] = 3,
    ACTIONS(184), 1,
      sym_memory,
    ACTIONS(9), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(182), 13,
      ts_builtin_sym_end,
      sym_macro,
      sym__newline,
      anon_sym_DOT,
      anon_sym_LT,
      sym_identifier,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      sym_number,
      anon_sym_SQUOTE,
      sym_relative,
      sym_port,
  [908] = 3,
    ACTIONS(9), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(188), 5,
      sym_register,
      sym_program_counter,
      sym_stack_pointer,
      sym_identifier,
      sym_memory,
    ACTIONS(186), 9,
      ts_builtin_sym_end,
      sym_macro,
      sym__newline,
      anon_sym_DOT,
      anon_sym_LT,
      sym_number,
      anon_sym_SQUOTE,
      sym_relative,
      sym_port,
  [931] = 3,
    ACTIONS(192), 1,
      sym_memory,
    ACTIONS(9), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(190), 13,
      ts_builtin_sym_end,
      sym_macro,
      sym__newline,
      anon_sym_DOT,
      anon_sym_LT,
      sym_identifier,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      sym_number,
      anon_sym_SQUOTE,
      sym_relative,
      sym_port,
  [954] = 3,
    ACTIONS(9), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(196), 5,
      sym_register,
      sym_program_counter,
      sym_stack_pointer,
      sym_identifier,
      sym_memory,
    ACTIONS(194), 9,
      ts_builtin_sym_end,
      sym_macro,
      sym__newline,
      anon_sym_DOT,
      anon_sym_LT,
      sym_number,
      anon_sym_SQUOTE,
      sym_relative,
      sym_port,
  [977] = 7,
    ACTIONS(25), 1,
      anon_sym_DOT,
    ACTIONS(136), 1,
      anon_sym_LT,
    ACTIONS(138), 1,
      anon_sym_SQUOTE,
    ACTIONS(200), 1,
      sym_memory,
    ACTIONS(9), 2,
      sym__whitespace,
      sym_comment,
    STATE(52), 4,
      sym_label,
      sym_placeholder,
      sym__immediate_literal,
      sym_char,
    ACTIONS(198), 5,
      sym_macro,
      sym_identifier,
      sym_number,
      sym_relative,
      sym_port,
  [1007] = 7,
    ACTIONS(25), 1,
      anon_sym_DOT,
    ACTIONS(136), 1,
      anon_sym_LT,
    ACTIONS(138), 1,
      anon_sym_SQUOTE,
    ACTIONS(204), 1,
      sym_memory,
    ACTIONS(9), 2,
      sym__whitespace,
      sym_comment,
    STATE(48), 4,
      sym_label,
      sym_placeholder,
      sym__immediate_literal,
      sym_char,
    ACTIONS(202), 5,
      sym_macro,
      sym_identifier,
      sym_number,
      sym_relative,
      sym_port,
  [1037] = 7,
    ACTIONS(25), 1,
      anon_sym_DOT,
    ACTIONS(136), 1,
      anon_sym_LT,
    ACTIONS(138), 1,
      anon_sym_SQUOTE,
    ACTIONS(208), 1,
      sym_memory,
    ACTIONS(9), 2,
      sym__whitespace,
      sym_comment,
    STATE(51), 4,
      sym_label,
      sym_placeholder,
      sym__immediate_literal,
      sym_char,
    ACTIONS(206), 5,
      sym_macro,
      sym_identifier,
      sym_number,
      sym_relative,
      sym_port,
  [1067] = 7,
    ACTIONS(25), 1,
      anon_sym_DOT,
    ACTIONS(136), 1,
      anon_sym_LT,
    ACTIONS(138), 1,
      anon_sym_SQUOTE,
    ACTIONS(212), 1,
      sym_memory,
    ACTIONS(9), 2,
      sym__whitespace,
      sym_comment,
    STATE(45), 4,
      sym_label,
      sym_placeholder,
      sym__immediate_literal,
      sym_char,
    ACTIONS(210), 5,
      sym_macro,
      sym_identifier,
      sym_number,
      sym_relative,
      sym_port,
  [1097] = 5,
    ACTIONS(216), 1,
      sym__newline,
    STATE(32), 1,
      aux_sym_source_file_repeat1,
    ACTIONS(9), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(214), 3,
      ts_builtin_sym_end,
      sym_macro,
      anon_sym_DOT,
    ACTIONS(219), 7,
      anon_sym_BITS,
      anon_sym_MINREG,
      anon_sym_MINHEAP,
      anon_sym_MINSTACK,
      anon_sym_RUN,
      anon_sym_DW,
      sym_identifier,
  [1122] = 3,
    ACTIONS(188), 1,
      sym_memory,
    ACTIONS(9), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(186), 11,
      sym_macro,
      anon_sym_DOT,
      anon_sym_LT,
      sym_identifier,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      sym_number,
      anon_sym_SQUOTE,
      sym_relative,
      sym_port,
  [1143] = 3,
    ACTIONS(164), 1,
      sym_memory,
    ACTIONS(9), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(162), 11,
      sym_macro,
      anon_sym_DOT,
      anon_sym_LT,
      sym_identifier,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      sym_number,
      anon_sym_SQUOTE,
      sym_relative,
      sym_port,
  [1164] = 3,
    ACTIONS(196), 1,
      sym_memory,
    ACTIONS(9), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(194), 11,
      sym_macro,
      anon_sym_DOT,
      anon_sym_LT,
      sym_identifier,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      sym_number,
      anon_sym_SQUOTE,
      sym_relative,
      sym_port,
  [1185] = 3,
    ACTIONS(9), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(221), 3,
      ts_builtin_sym_end,
      sym_macro,
      anon_sym_DOT,
    ACTIONS(223), 7,
      anon_sym_BITS,
      anon_sym_MINREG,
      anon_sym_MINHEAP,
      anon_sym_MINSTACK,
      anon_sym_RUN,
      anon_sym_DW,
      sym_identifier,
  [1204] = 3,
    ACTIONS(9), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(225), 3,
      ts_builtin_sym_end,
      sym_macro,
      anon_sym_DOT,
    ACTIONS(227), 7,
      anon_sym_BITS,
      anon_sym_MINREG,
      anon_sym_MINHEAP,
      anon_sym_MINSTACK,
      anon_sym_RUN,
      anon_sym_DW,
      sym_identifier,
  [1223] = 3,
    ACTIONS(9), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(229), 3,
      ts_builtin_sym_end,
      sym_macro,
      anon_sym_DOT,
    ACTIONS(231), 7,
      anon_sym_BITS,
      anon_sym_MINREG,
      anon_sym_MINHEAP,
      anon_sym_MINSTACK,
      anon_sym_RUN,
      anon_sym_DW,
      sym_identifier,
  [1242] = 6,
    ACTIONS(233), 1,
      sym_macro,
    ACTIONS(237), 1,
      anon_sym_DOT,
    STATE(39), 1,
      aux_sym_DW_repeat1,
    STATE(69), 1,
      sym_label,
    ACTIONS(9), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(235), 2,
      anon_sym_DW,
      sym_identifier,
  [1263] = 7,
    ACTIONS(25), 1,
      anon_sym_DOT,
    ACTIONS(240), 1,
      sym_macro,
    ACTIONS(242), 1,
      anon_sym_DW,
    ACTIONS(244), 1,
      sym_identifier,
    STATE(39), 1,
      aux_sym_DW_repeat1,
    STATE(69), 1,
      sym_label,
    ACTIONS(9), 2,
      sym__whitespace,
      sym_comment,
  [1286] = 4,
    ACTIONS(246), 1,
      anon_sym_DQUOTE,
    STATE(43), 1,
      aux_sym_string_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(248), 2,
      aux_sym_string_token1,
      sym_escape_sequence,
  [1301] = 4,
    ACTIONS(250), 1,
      anon_sym_DQUOTE,
    STATE(41), 1,
      aux_sym_string_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(252), 2,
      aux_sym_string_token1,
      sym_escape_sequence,
  [1316] = 4,
    ACTIONS(254), 1,
      anon_sym_DQUOTE,
    STATE(43), 1,
      aux_sym_string_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(256), 2,
      aux_sym_string_token1,
      sym_escape_sequence,
  [1331] = 3,
    ACTIONS(9), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(259), 2,
      sym_macro,
      anon_sym_DOT,
    ACTIONS(261), 2,
      anon_sym_DW,
      sym_identifier,
  [1344] = 2,
    ACTIONS(9), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(263), 2,
      ts_builtin_sym_end,
      sym__newline,
  [1353] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(265), 1,
      sym_escape_sequence,
    ACTIONS(267), 1,
      aux_sym_char_token1,
  [1366] = 2,
    ACTIONS(9), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(269), 2,
      ts_builtin_sym_end,
      sym__newline,
  [1375] = 2,
    ACTIONS(9), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(271), 2,
      ts_builtin_sym_end,
      sym__newline,
  [1384] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(273), 1,
      sym_escape_sequence,
    ACTIONS(275), 1,
      aux_sym_char_token1,
  [1397] = 3,
    ACTIONS(277), 1,
      ts_builtin_sym_end,
    ACTIONS(279), 1,
      sym__newline,
    ACTIONS(9), 2,
      sym__whitespace,
      sym_comment,
  [1408] = 2,
    ACTIONS(9), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(281), 2,
      ts_builtin_sym_end,
      sym__newline,
  [1417] = 2,
    ACTIONS(9), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(283), 2,
      ts_builtin_sym_end,
      sym__newline,
  [1426] = 3,
    ACTIONS(285), 1,
      ts_builtin_sym_end,
    ACTIONS(287), 1,
      sym__newline,
    ACTIONS(9), 2,
      sym__whitespace,
      sym_comment,
  [1437] = 3,
    ACTIONS(287), 1,
      sym__newline,
    ACTIONS(289), 1,
      ts_builtin_sym_end,
    ACTIONS(9), 2,
      sym__whitespace,
      sym_comment,
  [1448] = 2,
    ACTIONS(9), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(291), 2,
      ts_builtin_sym_end,
      sym__newline,
  [1457] = 2,
    ACTIONS(9), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(293), 2,
      ts_builtin_sym_end,
      sym__newline,
  [1466] = 3,
    ACTIONS(287), 1,
      sym__newline,
    ACTIONS(295), 1,
      ts_builtin_sym_end,
    ACTIONS(9), 2,
      sym__whitespace,
      sym_comment,
  [1477] = 3,
    ACTIONS(279), 1,
      sym__newline,
    ACTIONS(297), 1,
      ts_builtin_sym_end,
    ACTIONS(9), 2,
      sym__whitespace,
      sym_comment,
  [1488] = 3,
    ACTIONS(287), 1,
      sym__newline,
    ACTIONS(299), 1,
      ts_builtin_sym_end,
    ACTIONS(9), 2,
      sym__whitespace,
      sym_comment,
  [1499] = 3,
    ACTIONS(301), 1,
      ts_builtin_sym_end,
    ACTIONS(303), 1,
      sym__newline,
    ACTIONS(9), 2,
      sym__whitespace,
      sym_comment,
  [1510] = 3,
    ACTIONS(303), 1,
      sym__newline,
    ACTIONS(305), 1,
      ts_builtin_sym_end,
    ACTIONS(9), 2,
      sym__whitespace,
      sym_comment,
  [1521] = 3,
    ACTIONS(279), 1,
      sym__newline,
    ACTIONS(307), 1,
      ts_builtin_sym_end,
    ACTIONS(9), 2,
      sym__whitespace,
      sym_comment,
  [1532] = 3,
    ACTIONS(303), 1,
      sym__newline,
    ACTIONS(309), 1,
      ts_builtin_sym_end,
    ACTIONS(9), 2,
      sym__whitespace,
      sym_comment,
  [1543] = 3,
    ACTIONS(279), 1,
      sym__newline,
    ACTIONS(311), 1,
      ts_builtin_sym_end,
    ACTIONS(9), 2,
      sym__whitespace,
      sym_comment,
  [1554] = 2,
    ACTIONS(9), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(313), 2,
      ts_builtin_sym_end,
      sym__newline,
  [1563] = 2,
    ACTIONS(9), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(315), 2,
      anon_sym_RAM,
      anon_sym_ROM,
  [1572] = 3,
    ACTIONS(303), 1,
      sym__newline,
    ACTIONS(317), 1,
      ts_builtin_sym_end,
    ACTIONS(9), 2,
      sym__whitespace,
      sym_comment,
  [1583] = 2,
    ACTIONS(287), 1,
      sym__newline,
    ACTIONS(9), 2,
      sym__whitespace,
      sym_comment,
  [1591] = 2,
    ACTIONS(319), 1,
      sym__newline,
    ACTIONS(9), 2,
      sym__whitespace,
      sym_comment,
  [1599] = 2,
    ACTIONS(321), 1,
      anon_sym_GT,
    ACTIONS(9), 2,
      sym__whitespace,
      sym_comment,
  [1607] = 2,
    ACTIONS(323), 1,
      ts_builtin_sym_end,
    ACTIONS(9), 2,
      sym__whitespace,
      sym_comment,
  [1615] = 2,
    ACTIONS(325), 1,
      sym_identifier,
    ACTIONS(9), 2,
      sym__whitespace,
      sym_comment,
  [1623] = 2,
    ACTIONS(327), 1,
      sym_identifier,
    ACTIONS(9), 2,
      sym__whitespace,
      sym_comment,
  [1631] = 2,
    ACTIONS(303), 1,
      sym__newline,
    ACTIONS(9), 2,
      sym__whitespace,
      sym_comment,
  [1639] = 2,
    ACTIONS(279), 1,
      sym__newline,
    ACTIONS(9), 2,
      sym__whitespace,
      sym_comment,
  [1647] = 2,
    ACTIONS(329), 1,
      anon_sym_RBRACK,
    ACTIONS(9), 2,
      sym__whitespace,
      sym_comment,
  [1655] = 2,
    ACTIONS(331), 1,
      sym_identifier,
    ACTIONS(9), 2,
      sym__whitespace,
      sym_comment,
  [1663] = 2,
    ACTIONS(333), 1,
      anon_sym_GT,
    ACTIONS(9), 2,
      sym__whitespace,
      sym_comment,
  [1671] = 2,
    ACTIONS(335), 1,
      anon_sym_SQUOTE,
    ACTIONS(9), 2,
      sym__whitespace,
      sym_comment,
  [1679] = 2,
    ACTIONS(337), 1,
      sym_identifier,
    ACTIONS(9), 2,
      sym__whitespace,
      sym_comment,
  [1687] = 2,
    ACTIONS(339), 1,
      anon_sym_SQUOTE,
    ACTIONS(9), 2,
      sym__whitespace,
      sym_comment,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 64,
  [SMALL_STATE(4)] = 122,
  [SMALL_STATE(5)] = 180,
  [SMALL_STATE(6)] = 226,
  [SMALL_STATE(7)] = 284,
  [SMALL_STATE(8)] = 325,
  [SMALL_STATE(9)] = 368,
  [SMALL_STATE(10)] = 411,
  [SMALL_STATE(11)] = 452,
  [SMALL_STATE(12)] = 493,
  [SMALL_STATE(13)] = 534,
  [SMALL_STATE(14)] = 575,
  [SMALL_STATE(15)] = 616,
  [SMALL_STATE(16)] = 657,
  [SMALL_STATE(17)] = 696,
  [SMALL_STATE(18)] = 735,
  [SMALL_STATE(19)] = 770,
  [SMALL_STATE(20)] = 793,
  [SMALL_STATE(21)] = 816,
  [SMALL_STATE(22)] = 839,
  [SMALL_STATE(23)] = 862,
  [SMALL_STATE(24)] = 885,
  [SMALL_STATE(25)] = 908,
  [SMALL_STATE(26)] = 931,
  [SMALL_STATE(27)] = 954,
  [SMALL_STATE(28)] = 977,
  [SMALL_STATE(29)] = 1007,
  [SMALL_STATE(30)] = 1037,
  [SMALL_STATE(31)] = 1067,
  [SMALL_STATE(32)] = 1097,
  [SMALL_STATE(33)] = 1122,
  [SMALL_STATE(34)] = 1143,
  [SMALL_STATE(35)] = 1164,
  [SMALL_STATE(36)] = 1185,
  [SMALL_STATE(37)] = 1204,
  [SMALL_STATE(38)] = 1223,
  [SMALL_STATE(39)] = 1242,
  [SMALL_STATE(40)] = 1263,
  [SMALL_STATE(41)] = 1286,
  [SMALL_STATE(42)] = 1301,
  [SMALL_STATE(43)] = 1316,
  [SMALL_STATE(44)] = 1331,
  [SMALL_STATE(45)] = 1344,
  [SMALL_STATE(46)] = 1353,
  [SMALL_STATE(47)] = 1366,
  [SMALL_STATE(48)] = 1375,
  [SMALL_STATE(49)] = 1384,
  [SMALL_STATE(50)] = 1397,
  [SMALL_STATE(51)] = 1408,
  [SMALL_STATE(52)] = 1417,
  [SMALL_STATE(53)] = 1426,
  [SMALL_STATE(54)] = 1437,
  [SMALL_STATE(55)] = 1448,
  [SMALL_STATE(56)] = 1457,
  [SMALL_STATE(57)] = 1466,
  [SMALL_STATE(58)] = 1477,
  [SMALL_STATE(59)] = 1488,
  [SMALL_STATE(60)] = 1499,
  [SMALL_STATE(61)] = 1510,
  [SMALL_STATE(62)] = 1521,
  [SMALL_STATE(63)] = 1532,
  [SMALL_STATE(64)] = 1543,
  [SMALL_STATE(65)] = 1554,
  [SMALL_STATE(66)] = 1563,
  [SMALL_STATE(67)] = 1572,
  [SMALL_STATE(68)] = 1583,
  [SMALL_STATE(69)] = 1591,
  [SMALL_STATE(70)] = 1599,
  [SMALL_STATE(71)] = 1607,
  [SMALL_STATE(72)] = 1615,
  [SMALL_STATE(73)] = 1623,
  [SMALL_STATE(74)] = 1631,
  [SMALL_STATE(75)] = 1639,
  [SMALL_STATE(76)] = 1647,
  [SMALL_STATE(77)] = 1655,
  [SMALL_STATE(78)] = 1663,
  [SMALL_STATE(79)] = 1671,
  [SMALL_STATE(80)] = 1679,
  [SMALL_STATE(81)] = 1687,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, .production_id = 15),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2, .production_id = 19),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2, .production_id = 19), SHIFT_REPEAT(13),
  [40] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2, .production_id = 19), SHIFT_REPEAT(18),
  [43] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2, .production_id = 19), SHIFT_REPEAT(31),
  [46] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2, .production_id = 19), SHIFT_REPEAT(30),
  [49] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2, .production_id = 19), SHIFT_REPEAT(29),
  [52] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2, .production_id = 19), SHIFT_REPEAT(66),
  [55] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2, .production_id = 19), SHIFT_REPEAT(16),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2, .production_id = 19), SHIFT_REPEAT(72),
  [61] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2, .production_id = 19), SHIFT_REPEAT(13),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [80] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, .production_id = 5),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_instruction_repeat1, 2, .production_id = 22),
  [86] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_instruction_repeat1, 2, .production_id = 22), SHIFT_REPEAT(20),
  [89] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_instruction_repeat1, 2, .production_id = 22), SHIFT_REPEAT(72),
  [92] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_instruction_repeat1, 2, .production_id = 22), SHIFT_REPEAT(20),
  [95] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_instruction_repeat1, 2, .production_id = 22), SHIFT_REPEAT(73),
  [98] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_instruction_repeat1, 2, .production_id = 22), SHIFT_REPEAT(46),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [107] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(9),
  [110] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(77),
  [113] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(80),
  [116] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(5),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2),
  [121] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(42),
  [124] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(49),
  [127] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(9),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 2, .production_id = 20),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [134] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 3, .production_id = 27),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 1, .production_id = 1),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 2, .production_id = 7),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [148] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [152] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [158] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [160] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_placeholder, 3),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_placeholder, 3),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_instruction_repeat1, 1, .production_id = 6),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_instruction_repeat1, 1, .production_id = 6),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 3, .production_id = 29),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 3, .production_id = 29),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 2),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 2),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char, 3),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_char, 3),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 3),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 3),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 2, .production_id = 10),
  [196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label, 2, .production_id = 10),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [200] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [204] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [208] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [212] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [216] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(32),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2, .production_id = 3),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2, .production_id = 3),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2, .production_id = 4),
  [227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2, .production_id = 4),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2, .production_id = 2),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2, .production_id = 2),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_DW_repeat1, 2, .production_id = 21),
  [235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_DW_repeat1, 2, .production_id = 21),
  [237] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_DW_repeat1, 2, .production_id = 21), SHIFT_REPEAT(72),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [242] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [244] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2),
  [256] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(43),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_DW_repeat1, 2, .production_id = 11),
  [261] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_DW_repeat1, 2, .production_id = 11),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_MINREG, 2, .production_id = 8),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [267] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_RUN, 2, .production_id = 9),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_MINSTACK, 2, .production_id = 8),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [275] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, .production_id = 12),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_MINHEAP, 2, .production_id = 8),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_BITS, 3, .production_id = 23),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, .production_id = 13),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, .production_id = 3),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_BITS, 2, .production_id = 8),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_DW, 2, .production_id = 8),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, .production_id = 17),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 3, .production_id = 24),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 3, .production_id = 25),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 3, .production_id = 26),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, .production_id = 14),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, .production_id = 16),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, .production_id = 18),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, .production_id = 2),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_DW, 3, .production_id = 28),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, .production_id = 4),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [323] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_URCL(void) {
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
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
