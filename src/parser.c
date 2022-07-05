#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 88
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 58
#define ALIAS_COUNT 0
#define TOKEN_COUNT 35
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 11
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 33

enum {
  sym_macro = 1,
  sym__whitespace = 2,
  aux_sym__newline_token1 = 3,
  sym_single_comment = 4,
  sym_comment = 5,
  anon_sym_BITS = 6,
  anon_sym_LT_EQ = 7,
  anon_sym_EQ_EQ = 8,
  anon_sym_GT_EQ = 9,
  anon_sym_MINREG = 10,
  anon_sym_MINHEAP = 11,
  anon_sym_MINSTACK = 12,
  anon_sym_RUN = 13,
  anon_sym_RAM = 14,
  anon_sym_ROM = 15,
  anon_sym_DW = 16,
  anon_sym_DOT = 17,
  sym_register = 18,
  sym_program_counter = 19,
  sym_stack_pointer = 20,
  anon_sym_LT = 21,
  anon_sym_GT = 22,
  sym_identifier = 23,
  anon_sym_LBRACK = 24,
  anon_sym_RBRACK = 25,
  anon_sym_DQUOTE = 26,
  aux_sym_string_token1 = 27,
  sym_escape_sequence = 28,
  sym_number = 29,
  anon_sym_SQUOTE = 30,
  aux_sym_char_token1 = 31,
  sym_relative = 32,
  sym_memory = 33,
  sym_port = 34,
  sym_source_file = 35,
  aux_sym__newline = 36,
  sym__header = 37,
  sym_BITS = 38,
  sym_MINREG = 39,
  sym_MINHEAP = 40,
  sym_MINSTACK = 41,
  sym_RUN = 42,
  sym_DW = 43,
  sym_label = 44,
  sym__operand = 45,
  sym_placeholder = 46,
  sym__dw_literal = 47,
  sym_array = 48,
  sym_string = 49,
  sym__immediate_literal = 50,
  sym_char = 51,
  sym_instruction = 52,
  aux_sym_source_file_repeat1 = 53,
  aux_sym_DW_repeat1 = 54,
  aux_sym_array_repeat1 = 55,
  aux_sym_string_repeat1 = 56,
  aux_sym_instruction_repeat1 = 57,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_macro] = "macro",
  [sym__whitespace] = "_whitespace",
  [aux_sym__newline_token1] = "_newline_token1",
  [sym_single_comment] = "comment",
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
  [aux_sym__newline] = "_newline",
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
  [aux_sym_DW_repeat1] = "DW_repeat1",
  [aux_sym_array_repeat1] = "array_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
  [aux_sym_instruction_repeat1] = "instruction_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_macro] = sym_macro,
  [sym__whitespace] = sym__whitespace,
  [aux_sym__newline_token1] = aux_sym__newline_token1,
  [sym_single_comment] = sym_comment,
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
  [aux_sym__newline] = aux_sym__newline,
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
  [aux_sym__newline_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_single_comment] = {
    .visible = true,
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
  [aux_sym__newline] = {
    .visible = false,
    .named = false,
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
  field_string_segment = 10,
  field_value = 11,
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
  [field_string_segment] = "string_segment",
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
  [14] = {.index = 17, .length = 3},
  [15] = {.index = 20, .length = 1},
  [16] = {.index = 21, .length = 4},
  [17] = {.index = 25, .length = 4},
  [18] = {.index = 29, .length = 4},
  [19] = {.index = 33, .length = 6},
  [20] = {.index = 39, .length = 2},
  [21] = {.index = 41, .length = 2},
  [22] = {.index = 43, .length = 2},
  [23] = {.index = 45, .length = 2},
  [24] = {.index = 47, .length = 1},
  [25] = {.index = 48, .length = 4},
  [26] = {.index = 52, .length = 4},
  [27] = {.index = 56, .length = 4},
  [28] = {.index = 60, .length = 3},
  [29] = {.index = 63, .length = 2},
  [30] = {.index = 65, .length = 1},
  [31] = {.index = 66, .length = 1},
  [32] = {.index = 67, .length = 2},
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
    {field_header, 1},
  [15] =
    {field_define_word, 1},
  [16] =
    {field_inst, 1},
  [17] =
    {field_define_word, 1, .inherited = true},
    {field_header, 1, .inherited = true},
    {field_inst, 1, .inherited = true},
  [20] =
    {field_label, 0},
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
    {field_string_segment, 0},
  [48] =
    {field_define_word, 1, .inherited = true},
    {field_header, 1, .inherited = true},
    {field_header, 2},
    {field_inst, 1, .inherited = true},
  [52] =
    {field_define_word, 1, .inherited = true},
    {field_define_word, 2},
    {field_header, 1, .inherited = true},
    {field_inst, 1, .inherited = true},
  [56] =
    {field_define_word, 1, .inherited = true},
    {field_header, 1, .inherited = true},
    {field_inst, 1, .inherited = true},
    {field_inst, 2},
  [60] =
    {field_label, 0, .inherited = true},
    {field_name, 1},
    {field_operand, 2, .inherited = true},
  [63] =
    {field_label, 0, .inherited = true},
    {field_value, 2},
  [65] =
    {field_item, 1},
  [66] =
    {field_string_segment, 1, .inherited = true},
  [67] =
    {field_string_segment, 0, .inherited = true},
    {field_string_segment, 1, .inherited = true},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static inline bool aux_sym_string_token1_character_set_1(int32_t c) {
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

static inline bool aux_sym_char_token1_character_set_1(int32_t c) {
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

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(40);
      if (lookahead == '"') ADVANCE(95);
      if (lookahead == '#') ADVANCE(113);
      if (lookahead == '$') ADVANCE(114);
      if (lookahead == '%') ADVANCE(129);
      if (lookahead == '\'') ADVANCE(110);
      if (lookahead == '.') ADVANCE(59);
      if (lookahead == '/') ADVANCE(112);
      if (lookahead == '0') ADVANCE(125);
      if (lookahead == '<') ADVANCE(67);
      if (lookahead == '=') ADVANCE(120);
      if (lookahead == '>') ADVANCE(69);
      if (lookahead == '@') ADVANCE(130);
      if (lookahead == 'B') ADVANCE(122);
      if (lookahead == 'D') ADVANCE(124);
      if (lookahead == 'M') ADVANCE(115);
      if (lookahead == 'P') ADVANCE(121);
      if (lookahead == 'R') ADVANCE(117);
      if (lookahead == 'S') ADVANCE(123);
      if (lookahead == '[') ADVANCE(93);
      if (lookahead == '\\') ADVANCE(19);
      if (lookahead == ']') ADVANCE(94);
      if (lookahead == 'm') ADVANCE(116);
      if (lookahead == 'r') ADVANCE(118);
      if (lookahead == '~') ADVANCE(126);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(111);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(119);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(127);
      if (aux_sym_char_token1_character_set_1(lookahead)) ADVANCE(128);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      if (lookahead != 0) ADVANCE(111);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(95);
      if (lookahead == '/') ADVANCE(96);
      if (lookahead == '\\') ADVANCE(19);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(99);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(100);
      END_STATE();
    case 2:
      if (lookahead == '*') ADVANCE(5);
      END_STATE();
    case 3:
      if (lookahead == '*') ADVANCE(5);
      if (lookahead == '/') ADVANCE(44);
      END_STATE();
    case 4:
      if (lookahead == '*') ADVANCE(4);
      if (lookahead == '/') ADVANCE(45);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 5:
      if (lookahead == '*') ADVANCE(4);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '.') ADVANCE(59);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == '@') ADVANCE(36);
      if (lookahead == 'D') ADVANCE(91);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(43);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(24);
      if (aux_sym_char_token1_character_set_1(lookahead)) ADVANCE(42);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 7:
      if (lookahead == '/') ADVANCE(112);
      if (lookahead == '\\') ADVANCE(19);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(128);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(111);
      END_STATE();
    case 8:
      if (lookahead == '/') ADVANCE(2);
      if (lookahead == 'R') ADVANCE(15);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(42);
      END_STATE();
    case 9:
      if (lookahead == '0') ADVANCE(133);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(134);
      END_STATE();
    case 10:
      if (lookahead == '0') ADVANCE(60);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(61);
      END_STATE();
    case 11:
      if (lookahead == '0') ADVANCE(136);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(135);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 12:
      if (lookahead == '0') ADVANCE(105);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(108);
      END_STATE();
    case 13:
      if (lookahead == '=') ADVANCE(48);
      END_STATE();
    case 14:
      if (lookahead == '=') ADVANCE(49);
      END_STATE();
    case 15:
      if (lookahead == 'A') ADVANCE(17);
      if (lookahead == 'O') ADVANCE(18);
      END_STATE();
    case 16:
      if (lookahead == 'I') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(24);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 17:
      if (lookahead == 'M') ADVANCE(54);
      END_STATE();
    case 18:
      if (lookahead == 'M') ADVANCE(56);
      END_STATE();
    case 19:
      if (lookahead == 'U') ADVANCE(34);
      if (lookahead == 'u') ADVANCE(30);
      if (lookahead == 'x') ADVANCE(27);
      if (lookahead != 0) ADVANCE(101);
      END_STATE();
    case 20:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(23);
      END_STATE();
    case 21:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(106);
      END_STATE();
    case 22:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(107);
      END_STATE();
    case 23:
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(132);
      END_STATE();
    case 24:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(24);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 25:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(101);
      END_STATE();
    case 26:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(109);
      END_STATE();
    case 27:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(104);
      END_STATE();
    case 28:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(25);
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
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(33);
      END_STATE();
    case 35:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 36:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 37:
      if (eof) ADVANCE(40);
      if (lookahead == '"') ADVANCE(95);
      if (lookahead == '#') ADVANCE(9);
      if (lookahead == '%') ADVANCE(35);
      if (lookahead == '\'') ADVANCE(110);
      if (lookahead == '.') ADVANCE(59);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == '0') ADVANCE(105);
      if (lookahead == '<') ADVANCE(67);
      if (lookahead == '=') ADVANCE(13);
      if (lookahead == '>') ADVANCE(14);
      if (lookahead == '@') ADVANCE(36);
      if (lookahead == '[') ADVANCE(93);
      if (lookahead == ']') ADVANCE(94);
      if (lookahead == '~') ADVANCE(20);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(43);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(12);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(11);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(108);
      if (aux_sym_char_token1_character_set_1(lookahead)) ADVANCE(42);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 38:
      if (eof) ADVANCE(40);
      if (lookahead == '#') ADVANCE(9);
      if (lookahead == '$') ADVANCE(10);
      if (lookahead == '%') ADVANCE(35);
      if (lookahead == '\'') ADVANCE(110);
      if (lookahead == '.') ADVANCE(59);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == '0') ADVANCE(105);
      if (lookahead == '<') ADVANCE(66);
      if (lookahead == '@') ADVANCE(36);
      if (lookahead == 'P') ADVANCE(73);
      if (lookahead == 'S') ADVANCE(85);
      if (lookahead == '~') ADVANCE(20);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(43);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(12);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(11);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(70);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(108);
      if (aux_sym_char_token1_character_set_1(lookahead)) ADVANCE(42);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 39:
      if (eof) ADVANCE(40);
      if (lookahead == '\'') ADVANCE(110);
      if (lookahead == '.') ADVANCE(59);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == '>') ADVANCE(68);
      if (lookahead == '@') ADVANCE(36);
      if (lookahead == 'B') ADVANCE(79);
      if (lookahead == 'D') ADVANCE(91);
      if (lookahead == 'M') ADVANCE(16);
      if (lookahead == 'R') ADVANCE(90);
      if (lookahead == ']') ADVANCE(94);
      if (lookahead == 'm') ADVANCE(24);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(43);
      if (aux_sym_char_token1_character_set_1(lookahead)) ADVANCE(42);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_macro);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym__whitespace);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(42);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym__newline_token1);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_single_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(44);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_BITS);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_MINREG);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_MINHEAP);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_MINSTACK);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_RUN);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_RAM);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_RAM);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_ROM);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_ROM);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_DW);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_register);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == '0') ADVANCE(61);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(61);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == '0') ADVANCE(62);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(62);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_register);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_program_counter);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_stack_pointer);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(47);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(49);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '0') ADVANCE(63);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(62);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'G') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'H') ADVANCE(75);
      if (lookahead == 'R') ADVANCE(76);
      if (lookahead == 'S') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'K') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'W') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '*') ADVANCE(98);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(100);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '*') ADVANCE(97);
      if (lookahead == '/') ADVANCE(100);
      if (lookahead == '\n' ||
          lookahead == '"' ||
          lookahead == '\\') ADVANCE(5);
      if (lookahead != 0) ADVANCE(98);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '*') ADVANCE(97);
      if (lookahead == '\n' ||
          lookahead == '"' ||
          lookahead == '\\') ADVANCE(5);
      if (lookahead != 0) ADVANCE(98);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(99);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(100);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(100);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(101);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(102);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(103);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'b') ADVANCE(21);
      if (lookahead == 'o') ADVANCE(22);
      if (lookahead == 'x') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(108);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(106);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(107);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(108);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(109);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym_char_token1);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(aux_sym_char_token1);
      if (lookahead == '*') ADVANCE(5);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(aux_sym_char_token1);
      if (lookahead == '0') ADVANCE(133);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(134);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(aux_sym_char_token1);
      if (lookahead == '0') ADVANCE(60);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(61);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(aux_sym_char_token1);
      if (lookahead == '0') ADVANCE(136);
      if (lookahead == 'I') ADVANCE(83);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(135);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym_char_token1);
      if (lookahead == '0') ADVANCE(136);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(135);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym_char_token1);
      if (lookahead == '0') ADVANCE(63);
      if (lookahead == 'A') ADVANCE(81);
      if (lookahead == 'O') ADVANCE(82);
      if (lookahead == 'U') ADVANCE(84);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(62);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym_char_token1);
      if (lookahead == '0') ADVANCE(63);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(62);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(aux_sym_char_token1);
      if (lookahead == '0') ADVANCE(105);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(108);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(aux_sym_char_token1);
      if (lookahead == '=') ADVANCE(48);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(aux_sym_char_token1);
      if (lookahead == 'C') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym_char_token1);
      if (lookahead == 'I') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym_char_token1);
      if (lookahead == 'P') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym_char_token1);
      if (lookahead == 'W') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(aux_sym_char_token1);
      if (lookahead == 'b') ADVANCE(21);
      if (lookahead == 'o') ADVANCE(22);
      if (lookahead == 'x') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(108);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym_char_token1);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(23);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym_char_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(108);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym_char_token1);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(42);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym_char_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym_char_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym_char_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_relative);
      if (lookahead == '0') ADVANCE(132);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(132);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_memory);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_memory);
      if (lookahead == '0') ADVANCE(134);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(134);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_memory);
      if (lookahead == '0') ADVANCE(135);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(135);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_memory);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(24);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_port);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 39},
  [2] = {.lex_state = 39},
  [3] = {.lex_state = 37},
  [4] = {.lex_state = 38},
  [5] = {.lex_state = 38},
  [6] = {.lex_state = 39},
  [7] = {.lex_state = 39},
  [8] = {.lex_state = 38},
  [9] = {.lex_state = 38},
  [10] = {.lex_state = 38},
  [11] = {.lex_state = 38},
  [12] = {.lex_state = 39},
  [13] = {.lex_state = 38},
  [14] = {.lex_state = 37},
  [15] = {.lex_state = 37},
  [16] = {.lex_state = 37},
  [17] = {.lex_state = 37},
  [18] = {.lex_state = 37},
  [19] = {.lex_state = 38},
  [20] = {.lex_state = 38},
  [21] = {.lex_state = 38},
  [22] = {.lex_state = 38},
  [23] = {.lex_state = 37},
  [24] = {.lex_state = 37},
  [25] = {.lex_state = 37},
  [26] = {.lex_state = 37},
  [27] = {.lex_state = 37},
  [28] = {.lex_state = 39},
  [29] = {.lex_state = 39},
  [30] = {.lex_state = 39},
  [31] = {.lex_state = 37},
  [32] = {.lex_state = 37},
  [33] = {.lex_state = 37},
  [34] = {.lex_state = 39},
  [35] = {.lex_state = 39},
  [36] = {.lex_state = 37},
  [37] = {.lex_state = 37},
  [38] = {.lex_state = 37},
  [39] = {.lex_state = 37},
  [40] = {.lex_state = 6},
  [41] = {.lex_state = 6},
  [42] = {.lex_state = 6},
  [43] = {.lex_state = 6},
  [44] = {.lex_state = 6},
  [45] = {.lex_state = 39},
  [46] = {.lex_state = 1},
  [47] = {.lex_state = 39},
  [48] = {.lex_state = 39},
  [49] = {.lex_state = 39},
  [50] = {.lex_state = 39},
  [51] = {.lex_state = 39},
  [52] = {.lex_state = 39},
  [53] = {.lex_state = 39},
  [54] = {.lex_state = 39},
  [55] = {.lex_state = 39},
  [56] = {.lex_state = 39},
  [57] = {.lex_state = 1},
  [58] = {.lex_state = 39},
  [59] = {.lex_state = 39},
  [60] = {.lex_state = 1},
  [61] = {.lex_state = 39},
  [62] = {.lex_state = 39},
  [63] = {.lex_state = 39},
  [64] = {.lex_state = 39},
  [65] = {.lex_state = 39},
  [66] = {.lex_state = 39},
  [67] = {.lex_state = 39},
  [68] = {.lex_state = 39},
  [69] = {.lex_state = 39},
  [70] = {.lex_state = 39},
  [71] = {.lex_state = 1},
  [72] = {.lex_state = 39},
  [73] = {.lex_state = 39},
  [74] = {.lex_state = 8},
  [75] = {.lex_state = 7},
  [76] = {.lex_state = 7},
  [77] = {.lex_state = 37},
  [78] = {.lex_state = 39},
  [79] = {.lex_state = 39},
  [80] = {.lex_state = 39},
  [81] = {.lex_state = 37},
  [82] = {.lex_state = 39},
  [83] = {.lex_state = 37},
  [84] = {.lex_state = 39},
  [85] = {.lex_state = 39},
  [86] = {.lex_state = 37},
  [87] = {.lex_state = 39},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_macro] = ACTIONS(1),
    [sym__whitespace] = ACTIONS(3),
    [aux_sym__newline_token1] = ACTIONS(1),
    [sym_comment] = ACTIONS(5),
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
    [sym_escape_sequence] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [aux_sym_char_token1] = ACTIONS(1),
    [sym_relative] = ACTIONS(1),
    [sym_memory] = ACTIONS(1),
    [sym_port] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(80),
    [aux_sym__newline] = STATE(2),
    [sym__header] = STATE(48),
    [sym_BITS] = STATE(48),
    [sym_MINREG] = STATE(48),
    [sym_MINHEAP] = STATE(48),
    [sym_MINSTACK] = STATE(48),
    [sym_RUN] = STATE(48),
    [sym_DW] = STATE(51),
    [sym_label] = STATE(73),
    [sym_instruction] = STATE(54),
    [aux_sym_source_file_repeat1] = STATE(12),
    [aux_sym_DW_repeat1] = STATE(42),
    [ts_builtin_sym_end] = ACTIONS(7),
    [sym_macro] = ACTIONS(9),
    [sym__whitespace] = ACTIONS(5),
    [aux_sym__newline_token1] = ACTIONS(11),
    [sym_single_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(5),
    [anon_sym_BITS] = ACTIONS(15),
    [anon_sym_MINREG] = ACTIONS(17),
    [anon_sym_MINHEAP] = ACTIONS(19),
    [anon_sym_MINSTACK] = ACTIONS(21),
    [anon_sym_RUN] = ACTIONS(23),
    [anon_sym_DW] = ACTIONS(25),
    [anon_sym_DOT] = ACTIONS(27),
    [sym_identifier] = ACTIONS(29),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 20,
    ACTIONS(9), 1,
      sym_macro,
    ACTIONS(13), 1,
      sym_single_comment,
    ACTIONS(15), 1,
      anon_sym_BITS,
    ACTIONS(17), 1,
      anon_sym_MINREG,
    ACTIONS(19), 1,
      anon_sym_MINHEAP,
    ACTIONS(21), 1,
      anon_sym_MINSTACK,
    ACTIONS(23), 1,
      anon_sym_RUN,
    ACTIONS(25), 1,
      anon_sym_DW,
    ACTIONS(27), 1,
      anon_sym_DOT,
    ACTIONS(29), 1,
      sym_identifier,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    ACTIONS(33), 1,
      aux_sym__newline_token1,
    STATE(7), 1,
      aux_sym_source_file_repeat1,
    STATE(28), 1,
      aux_sym__newline,
    STATE(42), 1,
      aux_sym_DW_repeat1,
    STATE(49), 1,
      sym_instruction,
    STATE(50), 1,
      sym_DW,
    STATE(73), 1,
      sym_label,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(53), 6,
      sym__header,
      sym_BITS,
      sym_MINREG,
      sym_MINHEAP,
      sym_MINSTACK,
      sym_RUN,
  [67] = 13,
    ACTIONS(13), 1,
      sym_single_comment,
    ACTIONS(37), 1,
      aux_sym__newline_token1,
    ACTIONS(39), 1,
      anon_sym_DOT,
    ACTIONS(41), 1,
      anon_sym_LT,
    ACTIONS(43), 1,
      anon_sym_LBRACK,
    ACTIONS(45), 1,
      anon_sym_RBRACK,
    ACTIONS(47), 1,
      anon_sym_DQUOTE,
    ACTIONS(49), 1,
      anon_sym_SQUOTE,
    ACTIONS(51), 1,
      sym_memory,
    STATE(56), 1,
      aux_sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(35), 5,
      sym_macro,
      sym_identifier,
      sym_number,
      sym_relative,
      sym_port,
    STATE(14), 8,
      sym_label,
      sym_placeholder,
      sym__dw_literal,
      sym_array,
      sym_string,
      sym__immediate_literal,
      sym_char,
      aux_sym_array_repeat1,
  [119] = 9,
    ACTIONS(27), 1,
      anon_sym_DOT,
    ACTIONS(59), 1,
      anon_sym_LT,
    ACTIONS(61), 1,
      anon_sym_SQUOTE,
    STATE(10), 1,
      aux_sym_instruction_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(53), 3,
      ts_builtin_sym_end,
      aux_sym__newline_token1,
      sym_single_comment,
    ACTIONS(55), 4,
      sym_macro,
      sym_number,
      sym_relative,
      sym_port,
    ACTIONS(57), 5,
      sym_register,
      sym_program_counter,
      sym_stack_pointer,
      sym_identifier,
      sym_memory,
    STATE(21), 5,
      sym_label,
      sym__operand,
      sym_placeholder,
      sym__immediate_literal,
      sym_char,
  [161] = 9,
    ACTIONS(27), 1,
      anon_sym_DOT,
    ACTIONS(59), 1,
      anon_sym_LT,
    ACTIONS(61), 1,
      anon_sym_SQUOTE,
    STATE(4), 1,
      aux_sym_instruction_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(63), 3,
      ts_builtin_sym_end,
      aux_sym__newline_token1,
      sym_single_comment,
    ACTIONS(55), 4,
      sym_macro,
      sym_number,
      sym_relative,
      sym_port,
    ACTIONS(57), 5,
      sym_register,
      sym_program_counter,
      sym_stack_pointer,
      sym_identifier,
      sym_memory,
    STATE(21), 5,
      sym_label,
      sym__operand,
      sym_placeholder,
      sym__immediate_literal,
      sym_char,
  [203] = 17,
    ACTIONS(65), 1,
      ts_builtin_sym_end,
    ACTIONS(67), 1,
      sym_macro,
    ACTIONS(70), 1,
      anon_sym_BITS,
    ACTIONS(73), 1,
      anon_sym_MINREG,
    ACTIONS(76), 1,
      anon_sym_MINHEAP,
    ACTIONS(79), 1,
      anon_sym_MINSTACK,
    ACTIONS(82), 1,
      anon_sym_RUN,
    ACTIONS(85), 1,
      anon_sym_DW,
    ACTIONS(88), 1,
      anon_sym_DOT,
    ACTIONS(91), 1,
      sym_identifier,
    STATE(6), 1,
      aux_sym_source_file_repeat1,
    STATE(42), 1,
      aux_sym_DW_repeat1,
    STATE(64), 1,
      sym_DW,
    STATE(65), 1,
      sym_instruction,
    STATE(73), 1,
      sym_label,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(63), 6,
      sym__header,
      sym_BITS,
      sym_MINREG,
      sym_MINHEAP,
      sym_MINSTACK,
      sym_RUN,
  [261] = 17,
    ACTIONS(9), 1,
      sym_macro,
    ACTIONS(15), 1,
      anon_sym_BITS,
    ACTIONS(17), 1,
      anon_sym_MINREG,
    ACTIONS(19), 1,
      anon_sym_MINHEAP,
    ACTIONS(21), 1,
      anon_sym_MINSTACK,
    ACTIONS(23), 1,
      anon_sym_RUN,
    ACTIONS(25), 1,
      anon_sym_DW,
    ACTIONS(27), 1,
      anon_sym_DOT,
    ACTIONS(29), 1,
      sym_identifier,
    ACTIONS(94), 1,
      ts_builtin_sym_end,
    STATE(6), 1,
      aux_sym_source_file_repeat1,
    STATE(42), 1,
      aux_sym_DW_repeat1,
    STATE(55), 1,
      sym_instruction,
    STATE(58), 1,
      sym_DW,
    STATE(73), 1,
      sym_label,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(59), 6,
      sym__header,
      sym_BITS,
      sym_MINREG,
      sym_MINHEAP,
      sym_MINSTACK,
      sym_RUN,
  [319] = 9,
    ACTIONS(27), 1,
      anon_sym_DOT,
    ACTIONS(59), 1,
      anon_sym_LT,
    ACTIONS(61), 1,
      anon_sym_SQUOTE,
    STATE(13), 1,
      aux_sym_instruction_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(96), 3,
      ts_builtin_sym_end,
      aux_sym__newline_token1,
      sym_single_comment,
    ACTIONS(55), 4,
      sym_macro,
      sym_number,
      sym_relative,
      sym_port,
    ACTIONS(57), 5,
      sym_register,
      sym_program_counter,
      sym_stack_pointer,
      sym_identifier,
      sym_memory,
    STATE(21), 5,
      sym_label,
      sym__operand,
      sym_placeholder,
      sym__immediate_literal,
      sym_char,
  [361] = 9,
    ACTIONS(27), 1,
      anon_sym_DOT,
    ACTIONS(59), 1,
      anon_sym_LT,
    ACTIONS(61), 1,
      anon_sym_SQUOTE,
    STATE(11), 1,
      aux_sym_instruction_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(96), 3,
      ts_builtin_sym_end,
      aux_sym__newline_token1,
      sym_single_comment,
    ACTIONS(55), 4,
      sym_macro,
      sym_number,
      sym_relative,
      sym_port,
    ACTIONS(57), 5,
      sym_register,
      sym_program_counter,
      sym_stack_pointer,
      sym_identifier,
      sym_memory,
    STATE(21), 5,
      sym_label,
      sym__operand,
      sym_placeholder,
      sym__immediate_literal,
      sym_char,
  [403] = 9,
    ACTIONS(103), 1,
      anon_sym_DOT,
    ACTIONS(109), 1,
      anon_sym_LT,
    ACTIONS(112), 1,
      anon_sym_SQUOTE,
    STATE(10), 1,
      aux_sym_instruction_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(98), 3,
      ts_builtin_sym_end,
      aux_sym__newline_token1,
      sym_single_comment,
    ACTIONS(100), 4,
      sym_macro,
      sym_number,
      sym_relative,
      sym_port,
    ACTIONS(106), 5,
      sym_register,
      sym_program_counter,
      sym_stack_pointer,
      sym_identifier,
      sym_memory,
    STATE(21), 5,
      sym_label,
      sym__operand,
      sym_placeholder,
      sym__immediate_literal,
      sym_char,
  [445] = 9,
    ACTIONS(27), 1,
      anon_sym_DOT,
    ACTIONS(59), 1,
      anon_sym_LT,
    ACTIONS(61), 1,
      anon_sym_SQUOTE,
    STATE(10), 1,
      aux_sym_instruction_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(115), 3,
      ts_builtin_sym_end,
      aux_sym__newline_token1,
      sym_single_comment,
    ACTIONS(55), 4,
      sym_macro,
      sym_number,
      sym_relative,
      sym_port,
    ACTIONS(57), 5,
      sym_register,
      sym_program_counter,
      sym_stack_pointer,
      sym_identifier,
      sym_memory,
    STATE(21), 5,
      sym_label,
      sym__operand,
      sym_placeholder,
      sym__immediate_literal,
      sym_char,
  [487] = 17,
    ACTIONS(9), 1,
      sym_macro,
    ACTIONS(15), 1,
      anon_sym_BITS,
    ACTIONS(17), 1,
      anon_sym_MINREG,
    ACTIONS(19), 1,
      anon_sym_MINHEAP,
    ACTIONS(21), 1,
      anon_sym_MINSTACK,
    ACTIONS(23), 1,
      anon_sym_RUN,
    ACTIONS(25), 1,
      anon_sym_DW,
    ACTIONS(27), 1,
      anon_sym_DOT,
    ACTIONS(29), 1,
      sym_identifier,
    ACTIONS(117), 1,
      ts_builtin_sym_end,
    STATE(6), 1,
      aux_sym_source_file_repeat1,
    STATE(42), 1,
      aux_sym_DW_repeat1,
    STATE(45), 1,
      sym_DW,
    STATE(47), 1,
      sym_instruction,
    STATE(73), 1,
      sym_label,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(52), 6,
      sym__header,
      sym_BITS,
      sym_MINREG,
      sym_MINHEAP,
      sym_MINSTACK,
      sym_RUN,
  [545] = 9,
    ACTIONS(27), 1,
      anon_sym_DOT,
    ACTIONS(59), 1,
      anon_sym_LT,
    ACTIONS(61), 1,
      anon_sym_SQUOTE,
    STATE(10), 1,
      aux_sym_instruction_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(115), 3,
      ts_builtin_sym_end,
      aux_sym__newline_token1,
      sym_single_comment,
    ACTIONS(55), 4,
      sym_macro,
      sym_number,
      sym_relative,
      sym_port,
    ACTIONS(57), 5,
      sym_register,
      sym_program_counter,
      sym_stack_pointer,
      sym_identifier,
      sym_memory,
    STATE(21), 5,
      sym_label,
      sym__operand,
      sym_placeholder,
      sym__immediate_literal,
      sym_char,
  [587] = 10,
    ACTIONS(39), 1,
      anon_sym_DOT,
    ACTIONS(41), 1,
      anon_sym_LT,
    ACTIONS(43), 1,
      anon_sym_LBRACK,
    ACTIONS(47), 1,
      anon_sym_DQUOTE,
    ACTIONS(49), 1,
      anon_sym_SQUOTE,
    ACTIONS(121), 1,
      anon_sym_RBRACK,
    ACTIONS(123), 1,
      sym_memory,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(119), 5,
      sym_macro,
      sym_identifier,
      sym_number,
      sym_relative,
      sym_port,
    STATE(15), 8,
      sym_label,
      sym_placeholder,
      sym__dw_literal,
      sym_array,
      sym_string,
      sym__immediate_literal,
      sym_char,
      aux_sym_array_repeat1,
  [630] = 10,
    ACTIONS(128), 1,
      anon_sym_DOT,
    ACTIONS(131), 1,
      anon_sym_LT,
    ACTIONS(134), 1,
      anon_sym_LBRACK,
    ACTIONS(137), 1,
      anon_sym_RBRACK,
    ACTIONS(139), 1,
      anon_sym_DQUOTE,
    ACTIONS(142), 1,
      anon_sym_SQUOTE,
    ACTIONS(145), 1,
      sym_memory,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(125), 5,
      sym_macro,
      sym_identifier,
      sym_number,
      sym_relative,
      sym_port,
    STATE(15), 8,
      sym_label,
      sym_placeholder,
      sym__dw_literal,
      sym_array,
      sym_string,
      sym__immediate_literal,
      sym_char,
      aux_sym_array_repeat1,
  [673] = 9,
    ACTIONS(27), 1,
      anon_sym_DOT,
    ACTIONS(43), 1,
      anon_sym_LBRACK,
    ACTIONS(47), 1,
      anon_sym_DQUOTE,
    ACTIONS(59), 1,
      anon_sym_LT,
    ACTIONS(61), 1,
      anon_sym_SQUOTE,
    ACTIONS(150), 1,
      sym_memory,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(148), 5,
      sym_macro,
      sym_identifier,
      sym_number,
      sym_relative,
      sym_port,
    STATE(67), 7,
      sym_label,
      sym_placeholder,
      sym__dw_literal,
      sym_array,
      sym_string,
      sym__immediate_literal,
      sym_char,
  [712] = 9,
    ACTIONS(27), 1,
      anon_sym_DOT,
    ACTIONS(43), 1,
      anon_sym_LBRACK,
    ACTIONS(47), 1,
      anon_sym_DQUOTE,
    ACTIONS(59), 1,
      anon_sym_LT,
    ACTIONS(61), 1,
      anon_sym_SQUOTE,
    ACTIONS(154), 1,
      sym_memory,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(152), 5,
      sym_macro,
      sym_identifier,
      sym_number,
      sym_relative,
      sym_port,
    STATE(62), 7,
      sym_label,
      sym_placeholder,
      sym__dw_literal,
      sym_array,
      sym_string,
      sym__immediate_literal,
      sym_char,
  [751] = 8,
    ACTIONS(27), 1,
      anon_sym_DOT,
    ACTIONS(61), 1,
      anon_sym_SQUOTE,
    ACTIONS(160), 1,
      anon_sym_LT,
    ACTIONS(162), 1,
      sym_memory,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(158), 3,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
    STATE(70), 4,
      sym_label,
      sym_placeholder,
      sym__immediate_literal,
      sym_char,
    ACTIONS(156), 5,
      sym_macro,
      sym_identifier,
      sym_number,
      sym_relative,
      sym_port,
  [786] = 3,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(166), 5,
      sym_register,
      sym_program_counter,
      sym_stack_pointer,
      sym_identifier,
      sym_memory,
    ACTIONS(164), 10,
      ts_builtin_sym_end,
      sym_macro,
      aux_sym__newline_token1,
      sym_single_comment,
      anon_sym_DOT,
      anon_sym_LT,
      sym_number,
      anon_sym_SQUOTE,
      sym_relative,
      sym_port,
  [810] = 3,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(170), 5,
      sym_register,
      sym_program_counter,
      sym_stack_pointer,
      sym_identifier,
      sym_memory,
    ACTIONS(168), 10,
      ts_builtin_sym_end,
      sym_macro,
      aux_sym__newline_token1,
      sym_single_comment,
      anon_sym_DOT,
      anon_sym_LT,
      sym_number,
      anon_sym_SQUOTE,
      sym_relative,
      sym_port,
  [834] = 3,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(174), 5,
      sym_register,
      sym_program_counter,
      sym_stack_pointer,
      sym_identifier,
      sym_memory,
    ACTIONS(172), 10,
      ts_builtin_sym_end,
      sym_macro,
      aux_sym__newline_token1,
      sym_single_comment,
      anon_sym_DOT,
      anon_sym_LT,
      sym_number,
      anon_sym_SQUOTE,
      sym_relative,
      sym_port,
  [858] = 3,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(178), 5,
      sym_register,
      sym_program_counter,
      sym_stack_pointer,
      sym_identifier,
      sym_memory,
    ACTIONS(176), 10,
      ts_builtin_sym_end,
      sym_macro,
      aux_sym__newline_token1,
      sym_single_comment,
      anon_sym_DOT,
      anon_sym_LT,
      sym_number,
      anon_sym_SQUOTE,
      sym_relative,
      sym_port,
  [882] = 3,
    ACTIONS(182), 1,
      sym_memory,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(180), 14,
      ts_builtin_sym_end,
      sym_macro,
      aux_sym__newline_token1,
      sym_single_comment,
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
  [906] = 3,
    ACTIONS(186), 1,
      sym_memory,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(184), 14,
      ts_builtin_sym_end,
      sym_macro,
      aux_sym__newline_token1,
      sym_single_comment,
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
  [930] = 3,
    ACTIONS(190), 1,
      sym_memory,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(188), 14,
      ts_builtin_sym_end,
      sym_macro,
      aux_sym__newline_token1,
      sym_single_comment,
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
    ACTIONS(194), 1,
      sym_memory,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(192), 14,
      ts_builtin_sym_end,
      sym_macro,
      aux_sym__newline_token1,
      sym_single_comment,
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
  [978] = 3,
    ACTIONS(198), 1,
      sym_memory,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(196), 14,
      ts_builtin_sym_end,
      sym_macro,
      aux_sym__newline_token1,
      sym_single_comment,
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
  [1002] = 6,
    ACTIONS(202), 1,
      aux_sym__newline_token1,
    ACTIONS(205), 1,
      sym_single_comment,
    STATE(28), 1,
      aux_sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(200), 4,
      ts_builtin_sym_end,
      sym_macro,
      anon_sym_DOT,
      anon_sym_RBRACK,
    ACTIONS(208), 7,
      anon_sym_BITS,
      anon_sym_MINREG,
      anon_sym_MINHEAP,
      anon_sym_MINSTACK,
      anon_sym_RUN,
      anon_sym_DW,
      sym_identifier,
  [1031] = 6,
    ACTIONS(13), 1,
      sym_single_comment,
    ACTIONS(33), 1,
      aux_sym__newline_token1,
    STATE(28), 1,
      aux_sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(210), 3,
      ts_builtin_sym_end,
      sym_macro,
      anon_sym_DOT,
    ACTIONS(212), 7,
      anon_sym_BITS,
      anon_sym_MINREG,
      anon_sym_MINHEAP,
      anon_sym_MINSTACK,
      anon_sym_RUN,
      anon_sym_DW,
      sym_identifier,
  [1059] = 3,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(200), 6,
      ts_builtin_sym_end,
      sym_macro,
      aux_sym__newline_token1,
      sym_single_comment,
      anon_sym_DOT,
      anon_sym_RBRACK,
    ACTIONS(208), 7,
      anon_sym_BITS,
      anon_sym_MINREG,
      anon_sym_MINHEAP,
      anon_sym_MINSTACK,
      anon_sym_RUN,
      anon_sym_DW,
      sym_identifier,
  [1081] = 7,
    ACTIONS(27), 1,
      anon_sym_DOT,
    ACTIONS(59), 1,
      anon_sym_LT,
    ACTIONS(61), 1,
      anon_sym_SQUOTE,
    ACTIONS(216), 1,
      sym_memory,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(72), 4,
      sym_label,
      sym_placeholder,
      sym__immediate_literal,
      sym_char,
    ACTIONS(214), 5,
      sym_macro,
      sym_identifier,
      sym_number,
      sym_relative,
      sym_port,
  [1111] = 7,
    ACTIONS(27), 1,
      anon_sym_DOT,
    ACTIONS(59), 1,
      anon_sym_LT,
    ACTIONS(61), 1,
      anon_sym_SQUOTE,
    ACTIONS(220), 1,
      sym_memory,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(69), 4,
      sym_label,
      sym_placeholder,
      sym__immediate_literal,
      sym_char,
    ACTIONS(218), 5,
      sym_macro,
      sym_identifier,
      sym_number,
      sym_relative,
      sym_port,
  [1141] = 7,
    ACTIONS(27), 1,
      anon_sym_DOT,
    ACTIONS(59), 1,
      anon_sym_LT,
    ACTIONS(61), 1,
      anon_sym_SQUOTE,
    ACTIONS(224), 1,
      sym_memory,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(68), 4,
      sym_label,
      sym_placeholder,
      sym__immediate_literal,
      sym_char,
    ACTIONS(222), 5,
      sym_macro,
      sym_identifier,
      sym_number,
      sym_relative,
      sym_port,
  [1171] = 6,
    ACTIONS(13), 1,
      sym_single_comment,
    ACTIONS(33), 1,
      aux_sym__newline_token1,
    STATE(28), 1,
      aux_sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(226), 3,
      ts_builtin_sym_end,
      sym_macro,
      anon_sym_DOT,
    ACTIONS(228), 7,
      anon_sym_BITS,
      anon_sym_MINREG,
      anon_sym_MINHEAP,
      anon_sym_MINSTACK,
      anon_sym_RUN,
      anon_sym_DW,
      sym_identifier,
  [1199] = 6,
    ACTIONS(13), 1,
      sym_single_comment,
    ACTIONS(33), 1,
      aux_sym__newline_token1,
    STATE(28), 1,
      aux_sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(230), 3,
      ts_builtin_sym_end,
      sym_macro,
      anon_sym_DOT,
    ACTIONS(232), 7,
      anon_sym_BITS,
      anon_sym_MINREG,
      anon_sym_MINHEAP,
      anon_sym_MINSTACK,
      anon_sym_RUN,
      anon_sym_DW,
      sym_identifier,
  [1227] = 7,
    ACTIONS(27), 1,
      anon_sym_DOT,
    ACTIONS(59), 1,
      anon_sym_LT,
    ACTIONS(61), 1,
      anon_sym_SQUOTE,
    ACTIONS(236), 1,
      sym_memory,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(66), 4,
      sym_label,
      sym_placeholder,
      sym__immediate_literal,
      sym_char,
    ACTIONS(234), 5,
      sym_macro,
      sym_identifier,
      sym_number,
      sym_relative,
      sym_port,
  [1257] = 3,
    ACTIONS(170), 1,
      sym_memory,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(168), 11,
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
  [1278] = 3,
    ACTIONS(178), 1,
      sym_memory,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(176), 11,
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
  [1299] = 3,
    ACTIONS(166), 1,
      sym_memory,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(164), 11,
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
  [1320] = 6,
    ACTIONS(238), 1,
      aux_sym__newline_token1,
    ACTIONS(241), 1,
      sym_single_comment,
    STATE(40), 1,
      aux_sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(200), 2,
      sym_macro,
      anon_sym_DOT,
    ACTIONS(208), 2,
      anon_sym_DW,
      sym_identifier,
  [1342] = 6,
    ACTIONS(246), 1,
      aux_sym__newline_token1,
    ACTIONS(248), 1,
      sym_single_comment,
    STATE(40), 1,
      aux_sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(244), 2,
      sym_macro,
      anon_sym_DOT,
    ACTIONS(250), 2,
      anon_sym_DW,
      sym_identifier,
  [1364] = 7,
    ACTIONS(27), 1,
      anon_sym_DOT,
    ACTIONS(252), 1,
      sym_macro,
    ACTIONS(254), 1,
      anon_sym_DW,
    ACTIONS(256), 1,
      sym_identifier,
    STATE(43), 1,
      aux_sym_DW_repeat1,
    STATE(73), 1,
      sym_label,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [1387] = 6,
    ACTIONS(258), 1,
      sym_macro,
    ACTIONS(262), 1,
      anon_sym_DOT,
    STATE(43), 1,
      aux_sym_DW_repeat1,
    STATE(73), 1,
      sym_label,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(260), 2,
      anon_sym_DW,
      sym_identifier,
  [1408] = 3,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(208), 2,
      anon_sym_DW,
      sym_identifier,
    ACTIONS(200), 4,
      sym_macro,
      aux_sym__newline_token1,
      sym_single_comment,
      anon_sym_DOT,
  [1423] = 5,
    ACTIONS(13), 1,
      sym_single_comment,
    ACTIONS(265), 1,
      ts_builtin_sym_end,
    ACTIONS(267), 1,
      aux_sym__newline_token1,
    STATE(35), 1,
      aux_sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [1440] = 5,
    ACTIONS(269), 1,
      anon_sym_DQUOTE,
    ACTIONS(271), 1,
      aux_sym_string_token1,
    ACTIONS(274), 1,
      sym_escape_sequence,
    STATE(46), 1,
      aux_sym_string_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [1457] = 5,
    ACTIONS(13), 1,
      sym_single_comment,
    ACTIONS(277), 1,
      ts_builtin_sym_end,
    ACTIONS(279), 1,
      aux_sym__newline_token1,
    STATE(34), 1,
      aux_sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [1474] = 5,
    ACTIONS(13), 1,
      sym_single_comment,
    ACTIONS(281), 1,
      ts_builtin_sym_end,
    ACTIONS(283), 1,
      aux_sym__newline_token1,
    STATE(29), 1,
      aux_sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [1491] = 5,
    ACTIONS(13), 1,
      sym_single_comment,
    ACTIONS(279), 1,
      aux_sym__newline_token1,
    ACTIONS(285), 1,
      ts_builtin_sym_end,
    STATE(34), 1,
      aux_sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [1508] = 5,
    ACTIONS(13), 1,
      sym_single_comment,
    ACTIONS(267), 1,
      aux_sym__newline_token1,
    ACTIONS(287), 1,
      ts_builtin_sym_end,
    STATE(35), 1,
      aux_sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [1525] = 5,
    ACTIONS(13), 1,
      sym_single_comment,
    ACTIONS(267), 1,
      aux_sym__newline_token1,
    ACTIONS(289), 1,
      ts_builtin_sym_end,
    STATE(35), 1,
      aux_sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [1542] = 5,
    ACTIONS(13), 1,
      sym_single_comment,
    ACTIONS(283), 1,
      aux_sym__newline_token1,
    ACTIONS(291), 1,
      ts_builtin_sym_end,
    STATE(29), 1,
      aux_sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [1559] = 5,
    ACTIONS(13), 1,
      sym_single_comment,
    ACTIONS(283), 1,
      aux_sym__newline_token1,
    ACTIONS(293), 1,
      ts_builtin_sym_end,
    STATE(29), 1,
      aux_sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [1576] = 5,
    ACTIONS(13), 1,
      sym_single_comment,
    ACTIONS(279), 1,
      aux_sym__newline_token1,
    ACTIONS(295), 1,
      ts_builtin_sym_end,
    STATE(34), 1,
      aux_sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [1593] = 5,
    ACTIONS(13), 1,
      sym_single_comment,
    ACTIONS(279), 1,
      aux_sym__newline_token1,
    ACTIONS(297), 1,
      ts_builtin_sym_end,
    STATE(34), 1,
      aux_sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [1610] = 5,
    ACTIONS(13), 1,
      sym_single_comment,
    ACTIONS(33), 1,
      aux_sym__newline_token1,
    ACTIONS(299), 1,
      anon_sym_RBRACK,
    STATE(28), 1,
      aux_sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [1627] = 5,
    ACTIONS(301), 1,
      anon_sym_DQUOTE,
    ACTIONS(303), 1,
      aux_sym_string_token1,
    ACTIONS(305), 1,
      sym_escape_sequence,
    STATE(60), 1,
      aux_sym_string_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [1644] = 5,
    ACTIONS(13), 1,
      sym_single_comment,
    ACTIONS(267), 1,
      aux_sym__newline_token1,
    ACTIONS(307), 1,
      ts_builtin_sym_end,
    STATE(35), 1,
      aux_sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [1661] = 5,
    ACTIONS(13), 1,
      sym_single_comment,
    ACTIONS(283), 1,
      aux_sym__newline_token1,
    ACTIONS(309), 1,
      ts_builtin_sym_end,
    STATE(29), 1,
      aux_sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [1678] = 5,
    ACTIONS(303), 1,
      aux_sym_string_token1,
    ACTIONS(305), 1,
      sym_escape_sequence,
    ACTIONS(311), 1,
      anon_sym_DQUOTE,
    STATE(46), 1,
      aux_sym_string_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [1695] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(313), 3,
      ts_builtin_sym_end,
      aux_sym__newline_token1,
      sym_single_comment,
  [1705] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(315), 3,
      ts_builtin_sym_end,
      aux_sym__newline_token1,
      sym_single_comment,
  [1715] = 4,
    ACTIONS(13), 1,
      sym_single_comment,
    ACTIONS(283), 1,
      aux_sym__newline_token1,
    STATE(29), 1,
      aux_sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [1729] = 4,
    ACTIONS(13), 1,
      sym_single_comment,
    ACTIONS(267), 1,
      aux_sym__newline_token1,
    STATE(35), 1,
      aux_sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [1743] = 4,
    ACTIONS(13), 1,
      sym_single_comment,
    ACTIONS(279), 1,
      aux_sym__newline_token1,
    STATE(34), 1,
      aux_sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [1757] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(317), 3,
      ts_builtin_sym_end,
      aux_sym__newline_token1,
      sym_single_comment,
  [1767] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(319), 3,
      ts_builtin_sym_end,
      aux_sym__newline_token1,
      sym_single_comment,
  [1777] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(321), 3,
      ts_builtin_sym_end,
      aux_sym__newline_token1,
      sym_single_comment,
  [1787] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(323), 3,
      ts_builtin_sym_end,
      aux_sym__newline_token1,
      sym_single_comment,
  [1797] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(325), 3,
      ts_builtin_sym_end,
      aux_sym__newline_token1,
      sym_single_comment,
  [1807] = 3,
    ACTIONS(329), 1,
      aux_sym_string_token1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(327), 2,
      anon_sym_DQUOTE,
      sym_escape_sequence,
  [1819] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(331), 3,
      ts_builtin_sym_end,
      aux_sym__newline_token1,
      sym_single_comment,
  [1829] = 4,
    ACTIONS(248), 1,
      sym_single_comment,
    ACTIONS(333), 1,
      aux_sym__newline_token1,
    STATE(41), 1,
      aux_sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [1843] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(335), 2,
      anon_sym_RAM,
      anon_sym_ROM,
  [1852] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(337), 1,
      sym_escape_sequence,
    ACTIONS(339), 1,
      aux_sym_char_token1,
  [1865] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(341), 1,
      sym_escape_sequence,
    ACTIONS(343), 1,
      aux_sym_char_token1,
  [1878] = 2,
    ACTIONS(345), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [1886] = 2,
    ACTIONS(347), 1,
      anon_sym_GT,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [1894] = 2,
    ACTIONS(349), 1,
      aux_sym__newline_token1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [1902] = 2,
    ACTIONS(351), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [1910] = 2,
    ACTIONS(353), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [1918] = 2,
    ACTIONS(355), 1,
      aux_sym__newline_token1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [1926] = 2,
    ACTIONS(357), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [1934] = 2,
    ACTIONS(359), 1,
      anon_sym_GT,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [1942] = 2,
    ACTIONS(361), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [1950] = 2,
    ACTIONS(363), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [1958] = 2,
    ACTIONS(365), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 67,
  [SMALL_STATE(4)] = 119,
  [SMALL_STATE(5)] = 161,
  [SMALL_STATE(6)] = 203,
  [SMALL_STATE(7)] = 261,
  [SMALL_STATE(8)] = 319,
  [SMALL_STATE(9)] = 361,
  [SMALL_STATE(10)] = 403,
  [SMALL_STATE(11)] = 445,
  [SMALL_STATE(12)] = 487,
  [SMALL_STATE(13)] = 545,
  [SMALL_STATE(14)] = 587,
  [SMALL_STATE(15)] = 630,
  [SMALL_STATE(16)] = 673,
  [SMALL_STATE(17)] = 712,
  [SMALL_STATE(18)] = 751,
  [SMALL_STATE(19)] = 786,
  [SMALL_STATE(20)] = 810,
  [SMALL_STATE(21)] = 834,
  [SMALL_STATE(22)] = 858,
  [SMALL_STATE(23)] = 882,
  [SMALL_STATE(24)] = 906,
  [SMALL_STATE(25)] = 930,
  [SMALL_STATE(26)] = 954,
  [SMALL_STATE(27)] = 978,
  [SMALL_STATE(28)] = 1002,
  [SMALL_STATE(29)] = 1031,
  [SMALL_STATE(30)] = 1059,
  [SMALL_STATE(31)] = 1081,
  [SMALL_STATE(32)] = 1111,
  [SMALL_STATE(33)] = 1141,
  [SMALL_STATE(34)] = 1171,
  [SMALL_STATE(35)] = 1199,
  [SMALL_STATE(36)] = 1227,
  [SMALL_STATE(37)] = 1257,
  [SMALL_STATE(38)] = 1278,
  [SMALL_STATE(39)] = 1299,
  [SMALL_STATE(40)] = 1320,
  [SMALL_STATE(41)] = 1342,
  [SMALL_STATE(42)] = 1364,
  [SMALL_STATE(43)] = 1387,
  [SMALL_STATE(44)] = 1408,
  [SMALL_STATE(45)] = 1423,
  [SMALL_STATE(46)] = 1440,
  [SMALL_STATE(47)] = 1457,
  [SMALL_STATE(48)] = 1474,
  [SMALL_STATE(49)] = 1491,
  [SMALL_STATE(50)] = 1508,
  [SMALL_STATE(51)] = 1525,
  [SMALL_STATE(52)] = 1542,
  [SMALL_STATE(53)] = 1559,
  [SMALL_STATE(54)] = 1576,
  [SMALL_STATE(55)] = 1593,
  [SMALL_STATE(56)] = 1610,
  [SMALL_STATE(57)] = 1627,
  [SMALL_STATE(58)] = 1644,
  [SMALL_STATE(59)] = 1661,
  [SMALL_STATE(60)] = 1678,
  [SMALL_STATE(61)] = 1695,
  [SMALL_STATE(62)] = 1705,
  [SMALL_STATE(63)] = 1715,
  [SMALL_STATE(64)] = 1729,
  [SMALL_STATE(65)] = 1743,
  [SMALL_STATE(66)] = 1757,
  [SMALL_STATE(67)] = 1767,
  [SMALL_STATE(68)] = 1777,
  [SMALL_STATE(69)] = 1787,
  [SMALL_STATE(70)] = 1797,
  [SMALL_STATE(71)] = 1807,
  [SMALL_STATE(72)] = 1819,
  [SMALL_STATE(73)] = 1829,
  [SMALL_STATE(74)] = 1843,
  [SMALL_STATE(75)] = 1852,
  [SMALL_STATE(76)] = 1865,
  [SMALL_STATE(77)] = 1878,
  [SMALL_STATE(78)] = 1886,
  [SMALL_STATE(79)] = 1894,
  [SMALL_STATE(80)] = 1902,
  [SMALL_STATE(81)] = 1910,
  [SMALL_STATE(82)] = 1918,
  [SMALL_STATE(83)] = 1926,
  [SMALL_STATE(84)] = 1934,
  [SMALL_STATE(85)] = 1942,
  [SMALL_STATE(86)] = 1950,
  [SMALL_STATE(87)] = 1958,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 2, .production_id = 7),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 1, .production_id = 1),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, .production_id = 19),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, .production_id = 19), SHIFT_REPEAT(5),
  [70] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, .production_id = 19), SHIFT_REPEAT(18),
  [73] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, .production_id = 19), SHIFT_REPEAT(32),
  [76] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, .production_id = 19), SHIFT_REPEAT(33),
  [79] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, .production_id = 19), SHIFT_REPEAT(36),
  [82] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, .production_id = 19), SHIFT_REPEAT(74),
  [85] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, .production_id = 19), SHIFT_REPEAT(17),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, .production_id = 19), SHIFT_REPEAT(81),
  [91] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, .production_id = 19), SHIFT_REPEAT(5),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, .production_id = 14),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 2, .production_id = 20),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_instruction_repeat1, 2, .production_id = 22),
  [100] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_instruction_repeat1, 2, .production_id = 22), SHIFT_REPEAT(21),
  [103] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_instruction_repeat1, 2, .production_id = 22), SHIFT_REPEAT(81),
  [106] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_instruction_repeat1, 2, .production_id = 22), SHIFT_REPEAT(21),
  [109] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_instruction_repeat1, 2, .production_id = 22), SHIFT_REPEAT(77),
  [112] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_instruction_repeat1, 2, .production_id = 22), SHIFT_REPEAT(75),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 3, .production_id = 28),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, .production_id = 5),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [125] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(15),
  [128] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(83),
  [131] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(86),
  [134] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(3),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2),
  [139] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(57),
  [142] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(76),
  [145] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(15),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [150] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [154] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [160] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [162] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 2, .production_id = 10),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label, 2, .production_id = 10),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char, 3),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_char, 3),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_instruction_repeat1, 1, .production_id = 6),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_instruction_repeat1, 1, .production_id = 6),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_placeholder, 3),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_placeholder, 3),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 3),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 3),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 3, .production_id = 30),
  [190] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 3, .production_id = 30),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, .production_id = 31),
  [194] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3, .production_id = 31),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 2),
  [198] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 2),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__newline, 2),
  [202] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__newline, 2), SHIFT_REPEAT(28),
  [205] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__newline, 2), SHIFT_REPEAT(79),
  [208] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__newline, 2),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, .production_id = 2),
  [212] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, .production_id = 2),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [216] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [220] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [224] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, .production_id = 4),
  [228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, .production_id = 4),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, .production_id = 3),
  [232] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, .production_id = 3),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [236] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [238] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__newline, 2), SHIFT_REPEAT(40),
  [241] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__newline, 2), SHIFT_REPEAT(82),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_DW_repeat1, 2, .production_id = 15),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [250] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_DW_repeat1, 2, .production_id = 15),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [254] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [256] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_DW_repeat1, 2, .production_id = 21),
  [260] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_DW_repeat1, 2, .production_id = 21),
  [262] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_DW_repeat1, 2, .production_id = 21), SHIFT_REPEAT(81),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, .production_id = 17),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2, .production_id = 32),
  [271] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, .production_id = 32), SHIFT_REPEAT(71),
  [274] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2, .production_id = 32), SHIFT_REPEAT(71),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, .production_id = 18),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, .production_id = 2),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, .production_id = 13),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, .production_id = 12),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, .production_id = 3),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, .production_id = 16),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, .production_id = 11),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, .production_id = 4),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 3, .production_id = 27),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [303] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 3, .production_id = 26),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 3, .production_id = 25),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_RUN, 2, .production_id = 9),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_DW, 2, .production_id = 8),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_MINSTACK, 2, .production_id = 8),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_DW, 3, .production_id = 29),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_MINHEAP, 2, .production_id = 8),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_MINREG, 2, .production_id = 8),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_BITS, 2, .production_id = 8),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 1, .production_id = 24),
  [329] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 1, .production_id = 24),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_BITS, 3, .production_id = 23),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [339] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [343] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [351] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
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
