#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 91
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 59
#define ALIAS_COUNT 0
#define TOKEN_COUNT 35
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 10
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 28

enum {
  sym_macro = 1,
  sym__whitespace = 2,
  sym__newline = 3,
  aux_sym_comment_token1 = 4,
  aux_sym_comment_token2 = 5,
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
  sym__string_literal_fragment = 27,
  sym_escape_sequence = 28,
  sym_number = 29,
  anon_sym_SQUOTE = 30,
  aux_sym_char_token1 = 31,
  sym_relative = 32,
  sym_memory = 33,
  sym_port = 34,
  sym_source_file = 35,
  sym_comment = 36,
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
  aux_sym_source_file_repeat2 = 54,
  aux_sym_DW_repeat1 = 55,
  aux_sym_array_repeat1 = 56,
  aux_sym_string_repeat1 = 57,
  aux_sym_instruction_repeat1 = 58,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_macro] = "macro",
  [sym__whitespace] = "_whitespace",
  [sym__newline] = "_newline",
  [aux_sym_comment_token1] = "comment_token1",
  [aux_sym_comment_token2] = "comment_token2",
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
  [sym__string_literal_fragment] = "_string_literal_fragment",
  [sym_escape_sequence] = "escape_sequence",
  [sym_number] = "number",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_char_token1] = "char_token1",
  [sym_relative] = "relative",
  [sym_memory] = "memory",
  [sym_port] = "port",
  [sym_source_file] = "source_file",
  [sym_comment] = "comment",
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
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [aux_sym_comment_token2] = aux_sym_comment_token2,
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
  [sym__string_literal_fragment] = sym__string_literal_fragment,
  [sym_escape_sequence] = sym_escape_sequence,
  [sym_number] = sym_number,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_char_token1] = aux_sym_char_token1,
  [sym_relative] = sym_relative,
  [sym_memory] = sym_memory,
  [sym_port] = sym_port,
  [sym_source_file] = sym_source_file,
  [sym_comment] = sym_comment,
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
  [aux_sym_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_comment_token2] = {
    .visible = false,
    .named = false,
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
  [sym__string_literal_fragment] = {
    .visible = false,
    .named = true,
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
  [sym_comment] = {
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
  [6] = {.index = 7, .length = 2},
  [7] = {.index = 9, .length = 1},
  [8] = {.index = 10, .length = 2},
  [9] = {.index = 12, .length = 1},
  [10] = {.index = 13, .length = 1},
  [11] = {.index = 14, .length = 1},
  [12] = {.index = 15, .length = 1},
  [13] = {.index = 16, .length = 1},
  [14] = {.index = 17, .length = 3},
  [15] = {.index = 20, .length = 4},
  [16] = {.index = 24, .length = 4},
  [17] = {.index = 28, .length = 4},
  [18] = {.index = 32, .length = 6},
  [19] = {.index = 38, .length = 2},
  [20] = {.index = 40, .length = 2},
  [21] = {.index = 42, .length = 2},
  [22] = {.index = 44, .length = 4},
  [23] = {.index = 48, .length = 4},
  [24] = {.index = 52, .length = 4},
  [25] = {.index = 56, .length = 3},
  [26] = {.index = 59, .length = 2},
  [27] = {.index = 61, .length = 1},
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
    {field_name, 0},
    {field_operand, 1},
  [9] =
    {field_value, 1},
  [10] =
    {field_header_type, 0},
    {field_value, 1},
  [12] =
    {field_name, 1},
  [13] =
    {field_label, 0},
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
    {field_define_word, 0, .inherited = true},
    {field_header, 0, .inherited = true},
    {field_header, 1},
    {field_inst, 0, .inherited = true},
  [24] =
    {field_define_word, 0, .inherited = true},
    {field_define_word, 1},
    {field_header, 0, .inherited = true},
    {field_inst, 0, .inherited = true},
  [28] =
    {field_define_word, 0, .inherited = true},
    {field_header, 0, .inherited = true},
    {field_inst, 0, .inherited = true},
    {field_inst, 1},
  [32] =
    {field_define_word, 0, .inherited = true},
    {field_define_word, 1, .inherited = true},
    {field_header, 0, .inherited = true},
    {field_header, 1, .inherited = true},
    {field_inst, 0, .inherited = true},
    {field_inst, 1, .inherited = true},
  [38] =
    {field_label, 0, .inherited = true},
    {field_name, 1},
  [40] =
    {field_label, 0, .inherited = true},
    {field_label, 1, .inherited = true},
  [42] =
    {field_comparison, 1},
    {field_value, 2},
  [44] =
    {field_define_word, 1, .inherited = true},
    {field_header, 1, .inherited = true},
    {field_header, 2},
    {field_inst, 1, .inherited = true},
  [48] =
    {field_define_word, 1, .inherited = true},
    {field_define_word, 2},
    {field_header, 1, .inherited = true},
    {field_inst, 1, .inherited = true},
  [52] =
    {field_define_word, 1, .inherited = true},
    {field_header, 1, .inherited = true},
    {field_inst, 1, .inherited = true},
    {field_inst, 2},
  [56] =
    {field_label, 0, .inherited = true},
    {field_name, 1},
    {field_operand, 2},
  [59] =
    {field_label, 0, .inherited = true},
    {field_value, 2},
  [61] =
    {field_item, 1},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static inline bool sym__string_literal_fragment_character_set_1(int32_t c) {
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

static inline bool sym__string_literal_fragment_character_set_2(int32_t c) {
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
      if (lookahead == '\n') ADVANCE(141);
      if (lookahead == '\r') ADVANCE(130);
      if (lookahead == '"') ADVANCE(89);
      if (lookahead == '#') ADVANCE(94);
      if (lookahead == '$') ADVANCE(94);
      if (lookahead == '%') ADVANCE(129);
      if (lookahead == '\'') ADVANCE(130);
      if (lookahead == '.') ADVANCE(130);
      if (lookahead == '/') ADVANCE(91);
      if (lookahead == '0') ADVANCE(121);
      if (lookahead == '<') ADVANCE(102);
      if (lookahead == '=') ADVANCE(102);
      if (lookahead == '>') ADVANCE(102);
      if (lookahead == '@') ADVANCE(129);
      if (lookahead == 'B') ADVANCE(111);
      if (lookahead == 'D') ADVANCE(120);
      if (lookahead == 'M') ADVANCE(98);
      if (lookahead == 'P') ADVANCE(105);
      if (lookahead == 'R') ADVANCE(95);
      if (lookahead == 'S') ADVANCE(116);
      if (lookahead == '[') ADVANCE(130);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead == ']') ADVANCE(130);
      if (lookahead == 'm') ADVANCE(99);
      if (lookahead == 'r') ADVANCE(96);
      if (lookahead == '~') ADVANCE(122);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(97);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(126);
      if (sym__string_literal_fragment_character_set_1(lookahead)) ADVANCE(130);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      if (lookahead != 0) ADVANCE(130);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(89);
      if (lookahead == '/') ADVANCE(91);
      if (lookahead == '\\') ADVANCE(18);
      if (sym__string_literal_fragment_character_set_2(lookahead)) ADVANCE(130);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(130);
      END_STATE();
    case 2:
      if (lookahead == '*') ADVANCE(4);
      if (lookahead == '/') ADVANCE(43);
      END_STATE();
    case 3:
      if (lookahead == '*') ADVANCE(3);
      if (lookahead == '/') ADVANCE(44);
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
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(42);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(23);
      if (sym__string_literal_fragment_character_set_1(lookahead)) ADVANCE(41);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 6:
      if (lookahead == '/') ADVANCE(2);
      if (lookahead == 'R') ADVANCE(14);
      if (sym__string_literal_fragment_character_set_2(lookahead)) ADVANCE(41);
      END_STATE();
    case 7:
      if (lookahead == '/') ADVANCE(142);
      if (lookahead == '\\') ADVANCE(18);
      if (sym__string_literal_fragment_character_set_2(lookahead)) ADVANCE(141);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(141);
      END_STATE();
    case 8:
      if (lookahead == '0') ADVANCE(135);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(138);
      END_STATE();
    case 9:
      if (lookahead == '0') ADVANCE(144);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(145);
      END_STATE();
    case 10:
      if (lookahead == '0') ADVANCE(57);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(58);
      END_STATE();
    case 11:
      if (lookahead == '0') ADVANCE(147);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(146);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
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
      if (lookahead != 0) ADVANCE(131);
      END_STATE();
    case 19:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(22);
      END_STATE();
    case 20:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(136);
      END_STATE();
    case 21:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(137);
      END_STATE();
    case 22:
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(143);
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
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(131);
      END_STATE();
    case 25:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(134);
      END_STATE();
    case 26:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(139);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 36:
      if (eof) ADVANCE(39);
      if (lookahead == '"') ADVANCE(89);
      if (lookahead == '#') ADVANCE(9);
      if (lookahead == '%') ADVANCE(35);
      if (lookahead == '\'') ADVANCE(140);
      if (lookahead == '.') ADVANCE(56);
      if (lookahead == '/') ADVANCE(2);
      if (lookahead == '0') ADVANCE(135);
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
          lookahead == 'm') ADVANCE(11);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(138);
      if (sym__string_literal_fragment_character_set_1(lookahead)) ADVANCE(41);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 37:
      if (eof) ADVANCE(39);
      if (lookahead == '#') ADVANCE(9);
      if (lookahead == '$') ADVANCE(10);
      if (lookahead == '%') ADVANCE(35);
      if (lookahead == '\'') ADVANCE(140);
      if (lookahead == '.') ADVANCE(56);
      if (lookahead == '/') ADVANCE(2);
      if (lookahead == '0') ADVANCE(135);
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
          lookahead == 'm') ADVANCE(11);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(66);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(138);
      if (sym__string_literal_fragment_character_set_1(lookahead)) ADVANCE(41);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 38:
      if (eof) ADVANCE(39);
      if (lookahead == '\'') ADVANCE(140);
      if (lookahead == '.') ADVANCE(56);
      if (lookahead == '/') ADVANCE(2);
      if (lookahead == '>') ADVANCE(65);
      if (lookahead == '@') ADVANCE(34);
      if (lookahead == 'B') ADVANCE(75);
      if (lookahead == 'D') ADVANCE(85);
      if (lookahead == 'M') ADVANCE(15);
      if (lookahead == 'R') ADVANCE(84);
      if (lookahead == 'm') ADVANCE(23);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(42);
      if (sym__string_literal_fragment_character_set_1(lookahead)) ADVANCE(41);
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
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym__newline);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(43);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_comment_token2);
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
      ACCEPT_TOKEN(sym__string_literal_fragment);
      if (lookahead == '\r') ADVANCE(130);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(90);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym__string_literal_fragment);
      if (lookahead == '*') ADVANCE(93);
      if (lookahead == '/') ADVANCE(90);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(130);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym__string_literal_fragment);
      if (lookahead == '*') ADVANCE(92);
      if (lookahead == '/') ADVANCE(130);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(93);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym__string_literal_fragment);
      if (lookahead == '*') ADVANCE(92);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(93);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym__string_literal_fragment);
      if (lookahead == '0') ADVANCE(130);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(100);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(130);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym__string_literal_fragment);
      if (lookahead == '0') ADVANCE(129);
      if (lookahead == 'A') ADVANCE(113);
      if (lookahead == 'O') ADVANCE(113);
      if (lookahead == 'U') ADVANCE(114);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(101);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(130);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym__string_literal_fragment);
      if (lookahead == '0') ADVANCE(129);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(101);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(130);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym__string_literal_fragment);
      if (lookahead == '0') ADVANCE(121);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(126);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(130);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym__string_literal_fragment);
      if (lookahead == '0') ADVANCE(127);
      if (lookahead == 'I') ADVANCE(115);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(101);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(130);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym__string_literal_fragment);
      if (lookahead == '0') ADVANCE(127);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(101);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(130);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym__string_literal_fragment);
      if (lookahead == '0') ADVANCE(100);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(100);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(130);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym__string_literal_fragment);
      if (lookahead == '0') ADVANCE(101);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(101);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(130);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym__string_literal_fragment);
      if (lookahead == '=') ADVANCE(130);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(130);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym__string_literal_fragment);
      if (lookahead == 'A') ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(130);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym__string_literal_fragment);
      if (lookahead == 'A') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(130);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym__string_literal_fragment);
      if (lookahead == 'C') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(130);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym__string_literal_fragment);
      if (lookahead == 'C') ADVANCE(112);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(130);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym__string_literal_fragment);
      if (lookahead == 'E') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(130);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym__string_literal_fragment);
      if (lookahead == 'E') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(130);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym__string_literal_fragment);
      if (lookahead == 'G') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(130);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym__string_literal_fragment);
      if (lookahead == 'H') ADVANCE(107);
      if (lookahead == 'R') ADVANCE(108);
      if (lookahead == 'S') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(130);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym__string_literal_fragment);
      if (lookahead == 'I') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(130);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym__string_literal_fragment);
      if (lookahead == 'K') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(130);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym__string_literal_fragment);
      if (lookahead == 'M') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(130);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym__string_literal_fragment);
      if (lookahead == 'N') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(130);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym__string_literal_fragment);
      if (lookahead == 'N') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(130);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym__string_literal_fragment);
      if (lookahead == 'P') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(130);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym__string_literal_fragment);
      if (lookahead == 'S') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(130);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym__string_literal_fragment);
      if (lookahead == 'T') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(130);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym__string_literal_fragment);
      if (lookahead == 'T') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(130);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym__string_literal_fragment);
      if (lookahead == 'W') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(130);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym__string_literal_fragment);
      if (lookahead == 'b') ADVANCE(123);
      if (lookahead == 'o') ADVANCE(124);
      if (lookahead == 'x') ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(126);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(130);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym__string_literal_fragment);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(125);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(130);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym__string_literal_fragment);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(123);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(130);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym__string_literal_fragment);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(124);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(130);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym__string_literal_fragment);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(100);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(130);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym__string_literal_fragment);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(126);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(130);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym__string_literal_fragment);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(127);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(130);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym__string_literal_fragment);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(128);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(130);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym__string_literal_fragment);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(130);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym__string_literal_fragment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(130);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(131);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(132);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(133);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'b') ADVANCE(20);
      if (lookahead == 'o') ADVANCE(21);
      if (lookahead == 'x') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(138);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(136);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(137);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(138);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(139);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym_char_token1);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym_char_token1);
      if (lookahead == '*') ADVANCE(4);
      if (lookahead == '/') ADVANCE(43);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_relative);
      if (lookahead == '0') ADVANCE(143);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(143);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_memory);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_memory);
      if (lookahead == '0') ADVANCE(145);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(145);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_memory);
      if (lookahead == '0') ADVANCE(146);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(146);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_memory);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(23);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_port);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
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
  [5] = {.lex_state = 38},
  [6] = {.lex_state = 37},
  [7] = {.lex_state = 37},
  [8] = {.lex_state = 37},
  [9] = {.lex_state = 36},
  [10] = {.lex_state = 36},
  [11] = {.lex_state = 37},
  [12] = {.lex_state = 37},
  [13] = {.lex_state = 37},
  [14] = {.lex_state = 37},
  [15] = {.lex_state = 36},
  [16] = {.lex_state = 36},
  [17] = {.lex_state = 36},
  [18] = {.lex_state = 36},
  [19] = {.lex_state = 37},
  [20] = {.lex_state = 37},
  [21] = {.lex_state = 37},
  [22] = {.lex_state = 37},
  [23] = {.lex_state = 36},
  [24] = {.lex_state = 36},
  [25] = {.lex_state = 37},
  [26] = {.lex_state = 37},
  [27] = {.lex_state = 36},
  [28] = {.lex_state = 36},
  [29] = {.lex_state = 36},
  [30] = {.lex_state = 36},
  [31] = {.lex_state = 36},
  [32] = {.lex_state = 36},
  [33] = {.lex_state = 36},
  [34] = {.lex_state = 36},
  [35] = {.lex_state = 36},
  [36] = {.lex_state = 38},
  [37] = {.lex_state = 38},
  [38] = {.lex_state = 38},
  [39] = {.lex_state = 36},
  [40] = {.lex_state = 38},
  [41] = {.lex_state = 36},
  [42] = {.lex_state = 36},
  [43] = {.lex_state = 38},
  [44] = {.lex_state = 5},
  [45] = {.lex_state = 5},
  [46] = {.lex_state = 5},
  [47] = {.lex_state = 5},
  [48] = {.lex_state = 5},
  [49] = {.lex_state = 1},
  [50] = {.lex_state = 1},
  [51] = {.lex_state = 1},
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
  [63] = {.lex_state = 1},
  [64] = {.lex_state = 38},
  [65] = {.lex_state = 38},
  [66] = {.lex_state = 38},
  [67] = {.lex_state = 38},
  [68] = {.lex_state = 38},
  [69] = {.lex_state = 38},
  [70] = {.lex_state = 38},
  [71] = {.lex_state = 38},
  [72] = {.lex_state = 38},
  [73] = {.lex_state = 38},
  [74] = {.lex_state = 38},
  [75] = {.lex_state = 38},
  [76] = {.lex_state = 7},
  [77] = {.lex_state = 7},
  [78] = {.lex_state = 6},
  [79] = {.lex_state = 38},
  [80] = {.lex_state = 38},
  [81] = {.lex_state = 38},
  [82] = {.lex_state = 38},
  [83] = {.lex_state = 38},
  [84] = {.lex_state = 36},
  [85] = {.lex_state = 36},
  [86] = {.lex_state = 36},
  [87] = {.lex_state = 38},
  [88] = {.lex_state = 38},
  [89] = {.lex_state = 36},
  [90] = {(TSStateId)(-1)},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_comment] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_macro] = ACTIONS(1),
    [sym__whitespace] = ACTIONS(3),
    [sym__newline] = ACTIONS(1),
    [aux_sym_comment_token1] = ACTIONS(5),
    [aux_sym_comment_token2] = ACTIONS(7),
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
    [sym__string_literal_fragment] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [aux_sym_char_token1] = ACTIONS(1),
    [sym_relative] = ACTIONS(1),
    [sym_memory] = ACTIONS(1),
    [sym_port] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(83),
    [sym_comment] = STATE(1),
    [sym__header] = STATE(55),
    [sym_BITS] = STATE(66),
    [sym_MINREG] = STATE(66),
    [sym_MINHEAP] = STATE(66),
    [sym_MINSTACK] = STATE(66),
    [sym_RUN] = STATE(66),
    [sym_DW] = STATE(56),
    [sym_label] = STATE(79),
    [sym_instruction] = STATE(58),
    [aux_sym_source_file_repeat1] = STATE(2),
    [aux_sym_source_file_repeat2] = STATE(3),
    [aux_sym_DW_repeat1] = STATE(45),
    [ts_builtin_sym_end] = ACTIONS(9),
    [sym_macro] = ACTIONS(11),
    [sym__whitespace] = ACTIONS(13),
    [sym__newline] = ACTIONS(15),
    [aux_sym_comment_token1] = ACTIONS(17),
    [aux_sym_comment_token2] = ACTIONS(11),
    [anon_sym_BITS] = ACTIONS(19),
    [anon_sym_MINREG] = ACTIONS(21),
    [anon_sym_MINHEAP] = ACTIONS(23),
    [anon_sym_MINSTACK] = ACTIONS(25),
    [anon_sym_RUN] = ACTIONS(27),
    [anon_sym_DW] = ACTIONS(29),
    [anon_sym_DOT] = ACTIONS(31),
    [sym_identifier] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 22,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(13), 1,
      sym__whitespace,
    ACTIONS(15), 1,
      sym__newline,
    ACTIONS(17), 1,
      aux_sym_comment_token1,
    ACTIONS(19), 1,
      anon_sym_BITS,
    ACTIONS(21), 1,
      anon_sym_MINREG,
    ACTIONS(23), 1,
      anon_sym_MINHEAP,
    ACTIONS(25), 1,
      anon_sym_MINSTACK,
    ACTIONS(27), 1,
      anon_sym_RUN,
    ACTIONS(29), 1,
      anon_sym_DW,
    ACTIONS(31), 1,
      anon_sym_DOT,
    ACTIONS(33), 1,
      ts_builtin_sym_end,
    STATE(2), 1,
      sym_comment,
    STATE(5), 1,
      aux_sym_source_file_repeat2,
    STATE(40), 1,
      aux_sym_source_file_repeat1,
    STATE(45), 1,
      aux_sym_DW_repeat1,
    STATE(52), 1,
      sym_DW,
    STATE(54), 1,
      sym_instruction,
    STATE(61), 1,
      sym__header,
    STATE(79), 1,
      sym_label,
    ACTIONS(11), 2,
      sym_macro,
      aux_sym_comment_token2,
    STATE(66), 5,
      sym_BITS,
      sym_MINREG,
      sym_MINHEAP,
      sym_MINSTACK,
      sym_RUN,
  [72] = 20,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(13), 1,
      sym__whitespace,
    ACTIONS(17), 1,
      aux_sym_comment_token1,
    ACTIONS(19), 1,
      anon_sym_BITS,
    ACTIONS(21), 1,
      anon_sym_MINREG,
    ACTIONS(23), 1,
      anon_sym_MINHEAP,
    ACTIONS(25), 1,
      anon_sym_MINSTACK,
    ACTIONS(27), 1,
      anon_sym_RUN,
    ACTIONS(29), 1,
      anon_sym_DW,
    ACTIONS(31), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      ts_builtin_sym_end,
    STATE(3), 1,
      sym_comment,
    STATE(4), 1,
      aux_sym_source_file_repeat2,
    STATE(45), 1,
      aux_sym_DW_repeat1,
    STATE(57), 1,
      sym__header,
    STATE(59), 1,
      sym_DW,
    STATE(62), 1,
      sym_instruction,
    STATE(79), 1,
      sym_label,
    ACTIONS(11), 2,
      sym_macro,
      aux_sym_comment_token2,
    STATE(66), 5,
      sym_BITS,
      sym_MINREG,
      sym_MINHEAP,
      sym_MINSTACK,
      sym_RUN,
  [138] = 20,
    ACTIONS(11), 1,
      aux_sym_comment_token2,
    ACTIONS(13), 1,
      sym__whitespace,
    ACTIONS(17), 1,
      aux_sym_comment_token1,
    ACTIONS(37), 1,
      ts_builtin_sym_end,
    ACTIONS(39), 1,
      sym_macro,
    ACTIONS(42), 1,
      anon_sym_BITS,
    ACTIONS(45), 1,
      anon_sym_MINREG,
    ACTIONS(48), 1,
      anon_sym_MINHEAP,
    ACTIONS(51), 1,
      anon_sym_MINSTACK,
    ACTIONS(54), 1,
      anon_sym_RUN,
    ACTIONS(57), 1,
      anon_sym_DW,
    ACTIONS(60), 1,
      anon_sym_DOT,
    ACTIONS(63), 1,
      sym_identifier,
    STATE(45), 1,
      aux_sym_DW_repeat1,
    STATE(68), 1,
      sym__header,
    STATE(69), 1,
      sym_DW,
    STATE(70), 1,
      sym_instruction,
    STATE(79), 1,
      sym_label,
    STATE(4), 2,
      sym_comment,
      aux_sym_source_file_repeat2,
    STATE(66), 5,
      sym_BITS,
      sym_MINREG,
      sym_MINHEAP,
      sym_MINSTACK,
      sym_RUN,
  [204] = 20,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(13), 1,
      sym__whitespace,
    ACTIONS(17), 1,
      aux_sym_comment_token1,
    ACTIONS(19), 1,
      anon_sym_BITS,
    ACTIONS(21), 1,
      anon_sym_MINREG,
    ACTIONS(23), 1,
      anon_sym_MINHEAP,
    ACTIONS(25), 1,
      anon_sym_MINSTACK,
    ACTIONS(27), 1,
      anon_sym_RUN,
    ACTIONS(29), 1,
      anon_sym_DW,
    ACTIONS(31), 1,
      anon_sym_DOT,
    ACTIONS(66), 1,
      ts_builtin_sym_end,
    STATE(4), 1,
      aux_sym_source_file_repeat2,
    STATE(5), 1,
      sym_comment,
    STATE(45), 1,
      aux_sym_DW_repeat1,
    STATE(53), 1,
      sym__header,
    STATE(60), 1,
      sym_DW,
    STATE(64), 1,
      sym_instruction,
    STATE(79), 1,
      sym_label,
    ACTIONS(11), 2,
      sym_macro,
      aux_sym_comment_token2,
    STATE(66), 5,
      sym_BITS,
      sym_MINREG,
      sym_MINHEAP,
      sym_MINSTACK,
      sym_RUN,
  [270] = 14,
    ACTIONS(11), 1,
      aux_sym_comment_token2,
    ACTIONS(13), 1,
      sym__whitespace,
    ACTIONS(17), 1,
      aux_sym_comment_token1,
    ACTIONS(73), 1,
      anon_sym_DOT,
    ACTIONS(79), 1,
      anon_sym_LT,
    ACTIONS(85), 1,
      anon_sym_SQUOTE,
    STATE(22), 1,
      sym__immediate_literal,
    STATE(25), 1,
      sym__operand,
    ACTIONS(68), 2,
      ts_builtin_sym_end,
      sym__newline,
    ACTIONS(82), 2,
      sym_identifier,
      sym_memory,
    STATE(6), 2,
      sym_comment,
      aux_sym_instruction_repeat1,
    ACTIONS(76), 3,
      sym_register,
      sym_program_counter,
      sym_stack_pointer,
    STATE(21), 3,
      sym_label,
      sym_placeholder,
      sym_char,
    ACTIONS(70), 4,
      sym_macro,
      sym_number,
      sym_relative,
      sym_port,
  [323] = 15,
    ACTIONS(11), 1,
      aux_sym_comment_token2,
    ACTIONS(13), 1,
      sym__whitespace,
    ACTIONS(17), 1,
      aux_sym_comment_token1,
    ACTIONS(31), 1,
      anon_sym_DOT,
    ACTIONS(94), 1,
      anon_sym_LT,
    ACTIONS(98), 1,
      anon_sym_SQUOTE,
    STATE(7), 1,
      sym_comment,
    STATE(14), 1,
      aux_sym_instruction_repeat1,
    STATE(22), 1,
      sym__immediate_literal,
    STATE(25), 1,
      sym__operand,
    ACTIONS(88), 2,
      ts_builtin_sym_end,
      sym__newline,
    ACTIONS(96), 2,
      sym_identifier,
      sym_memory,
    ACTIONS(92), 3,
      sym_register,
      sym_program_counter,
      sym_stack_pointer,
    STATE(21), 3,
      sym_label,
      sym_placeholder,
      sym_char,
    ACTIONS(90), 4,
      sym_macro,
      sym_number,
      sym_relative,
      sym_port,
  [378] = 15,
    ACTIONS(11), 1,
      aux_sym_comment_token2,
    ACTIONS(13), 1,
      sym__whitespace,
    ACTIONS(17), 1,
      aux_sym_comment_token1,
    ACTIONS(31), 1,
      anon_sym_DOT,
    ACTIONS(94), 1,
      anon_sym_LT,
    ACTIONS(98), 1,
      anon_sym_SQUOTE,
    STATE(8), 1,
      sym_comment,
    STATE(13), 1,
      aux_sym_instruction_repeat1,
    STATE(22), 1,
      sym__immediate_literal,
    STATE(25), 1,
      sym__operand,
    ACTIONS(96), 2,
      sym_identifier,
      sym_memory,
    ACTIONS(100), 2,
      ts_builtin_sym_end,
      sym__newline,
    ACTIONS(92), 3,
      sym_register,
      sym_program_counter,
      sym_stack_pointer,
    STATE(21), 3,
      sym_label,
      sym_placeholder,
      sym_char,
    ACTIONS(90), 4,
      sym_macro,
      sym_number,
      sym_relative,
      sym_port,
  [433] = 16,
    ACTIONS(11), 1,
      aux_sym_comment_token2,
    ACTIONS(13), 1,
      sym__whitespace,
    ACTIONS(17), 1,
      aux_sym_comment_token1,
    ACTIONS(104), 1,
      anon_sym_DOT,
    ACTIONS(106), 1,
      anon_sym_LT,
    ACTIONS(108), 1,
      anon_sym_LBRACK,
    ACTIONS(110), 1,
      anon_sym_RBRACK,
    ACTIONS(112), 1,
      anon_sym_DQUOTE,
    ACTIONS(114), 1,
      anon_sym_SQUOTE,
    ACTIONS(116), 1,
      sym_memory,
    STATE(9), 1,
      sym_comment,
    STATE(15), 1,
      aux_sym_array_repeat1,
    STATE(39), 1,
      sym__dw_literal,
    STATE(24), 3,
      sym_array,
      sym_string,
      sym__immediate_literal,
    STATE(34), 3,
      sym_label,
      sym_placeholder,
      sym_char,
    ACTIONS(102), 5,
      sym_macro,
      sym_identifier,
      sym_number,
      sym_relative,
      sym_port,
  [490] = 16,
    ACTIONS(11), 1,
      aux_sym_comment_token2,
    ACTIONS(13), 1,
      sym__whitespace,
    ACTIONS(17), 1,
      aux_sym_comment_token1,
    ACTIONS(104), 1,
      anon_sym_DOT,
    ACTIONS(106), 1,
      anon_sym_LT,
    ACTIONS(108), 1,
      anon_sym_LBRACK,
    ACTIONS(112), 1,
      anon_sym_DQUOTE,
    ACTIONS(114), 1,
      anon_sym_SQUOTE,
    ACTIONS(116), 1,
      sym_memory,
    ACTIONS(118), 1,
      anon_sym_RBRACK,
    STATE(9), 1,
      aux_sym_array_repeat1,
    STATE(10), 1,
      sym_comment,
    STATE(39), 1,
      sym__dw_literal,
    STATE(24), 3,
      sym_array,
      sym_string,
      sym__immediate_literal,
    STATE(34), 3,
      sym_label,
      sym_placeholder,
      sym_char,
    ACTIONS(102), 5,
      sym_macro,
      sym_identifier,
      sym_number,
      sym_relative,
      sym_port,
  [547] = 15,
    ACTIONS(11), 1,
      aux_sym_comment_token2,
    ACTIONS(13), 1,
      sym__whitespace,
    ACTIONS(17), 1,
      aux_sym_comment_token1,
    ACTIONS(31), 1,
      anon_sym_DOT,
    ACTIONS(94), 1,
      anon_sym_LT,
    ACTIONS(98), 1,
      anon_sym_SQUOTE,
    STATE(6), 1,
      aux_sym_instruction_repeat1,
    STATE(11), 1,
      sym_comment,
    STATE(22), 1,
      sym__immediate_literal,
    STATE(25), 1,
      sym__operand,
    ACTIONS(96), 2,
      sym_identifier,
      sym_memory,
    ACTIONS(120), 2,
      ts_builtin_sym_end,
      sym__newline,
    ACTIONS(92), 3,
      sym_register,
      sym_program_counter,
      sym_stack_pointer,
    STATE(21), 3,
      sym_label,
      sym_placeholder,
      sym_char,
    ACTIONS(90), 4,
      sym_macro,
      sym_number,
      sym_relative,
      sym_port,
  [602] = 15,
    ACTIONS(11), 1,
      aux_sym_comment_token2,
    ACTIONS(13), 1,
      sym__whitespace,
    ACTIONS(17), 1,
      aux_sym_comment_token1,
    ACTIONS(31), 1,
      anon_sym_DOT,
    ACTIONS(94), 1,
      anon_sym_LT,
    ACTIONS(98), 1,
      anon_sym_SQUOTE,
    STATE(11), 1,
      aux_sym_instruction_repeat1,
    STATE(12), 1,
      sym_comment,
    STATE(22), 1,
      sym__immediate_literal,
    STATE(25), 1,
      sym__operand,
    ACTIONS(96), 2,
      sym_identifier,
      sym_memory,
    ACTIONS(100), 2,
      ts_builtin_sym_end,
      sym__newline,
    ACTIONS(92), 3,
      sym_register,
      sym_program_counter,
      sym_stack_pointer,
    STATE(21), 3,
      sym_label,
      sym_placeholder,
      sym_char,
    ACTIONS(90), 4,
      sym_macro,
      sym_number,
      sym_relative,
      sym_port,
  [657] = 15,
    ACTIONS(11), 1,
      aux_sym_comment_token2,
    ACTIONS(13), 1,
      sym__whitespace,
    ACTIONS(17), 1,
      aux_sym_comment_token1,
    ACTIONS(31), 1,
      anon_sym_DOT,
    ACTIONS(94), 1,
      anon_sym_LT,
    ACTIONS(98), 1,
      anon_sym_SQUOTE,
    STATE(6), 1,
      aux_sym_instruction_repeat1,
    STATE(13), 1,
      sym_comment,
    STATE(22), 1,
      sym__immediate_literal,
    STATE(25), 1,
      sym__operand,
    ACTIONS(96), 2,
      sym_identifier,
      sym_memory,
    ACTIONS(120), 2,
      ts_builtin_sym_end,
      sym__newline,
    ACTIONS(92), 3,
      sym_register,
      sym_program_counter,
      sym_stack_pointer,
    STATE(21), 3,
      sym_label,
      sym_placeholder,
      sym_char,
    ACTIONS(90), 4,
      sym_macro,
      sym_number,
      sym_relative,
      sym_port,
  [712] = 15,
    ACTIONS(11), 1,
      aux_sym_comment_token2,
    ACTIONS(13), 1,
      sym__whitespace,
    ACTIONS(17), 1,
      aux_sym_comment_token1,
    ACTIONS(31), 1,
      anon_sym_DOT,
    ACTIONS(94), 1,
      anon_sym_LT,
    ACTIONS(98), 1,
      anon_sym_SQUOTE,
    STATE(6), 1,
      aux_sym_instruction_repeat1,
    STATE(14), 1,
      sym_comment,
    STATE(22), 1,
      sym__immediate_literal,
    STATE(25), 1,
      sym__operand,
    ACTIONS(96), 2,
      sym_identifier,
      sym_memory,
    ACTIONS(122), 2,
      ts_builtin_sym_end,
      sym__newline,
    ACTIONS(92), 3,
      sym_register,
      sym_program_counter,
      sym_stack_pointer,
    STATE(21), 3,
      sym_label,
      sym_placeholder,
      sym_char,
    ACTIONS(90), 4,
      sym_macro,
      sym_number,
      sym_relative,
      sym_port,
  [767] = 15,
    ACTIONS(11), 1,
      aux_sym_comment_token2,
    ACTIONS(13), 1,
      sym__whitespace,
    ACTIONS(17), 1,
      aux_sym_comment_token1,
    ACTIONS(127), 1,
      anon_sym_DOT,
    ACTIONS(130), 1,
      anon_sym_LT,
    ACTIONS(133), 1,
      anon_sym_LBRACK,
    ACTIONS(136), 1,
      anon_sym_RBRACK,
    ACTIONS(138), 1,
      anon_sym_DQUOTE,
    ACTIONS(141), 1,
      anon_sym_SQUOTE,
    ACTIONS(144), 1,
      sym_memory,
    STATE(39), 1,
      sym__dw_literal,
    STATE(15), 2,
      sym_comment,
      aux_sym_array_repeat1,
    STATE(24), 3,
      sym_array,
      sym_string,
      sym__immediate_literal,
    STATE(34), 3,
      sym_label,
      sym_placeholder,
      sym_char,
    ACTIONS(124), 5,
      sym_macro,
      sym_identifier,
      sym_number,
      sym_relative,
      sym_port,
  [822] = 14,
    ACTIONS(11), 1,
      aux_sym_comment_token2,
    ACTIONS(13), 1,
      sym__whitespace,
    ACTIONS(17), 1,
      aux_sym_comment_token1,
    ACTIONS(31), 1,
      anon_sym_DOT,
    ACTIONS(94), 1,
      anon_sym_LT,
    ACTIONS(96), 1,
      sym_memory,
    ACTIONS(98), 1,
      anon_sym_SQUOTE,
    ACTIONS(108), 1,
      anon_sym_LBRACK,
    ACTIONS(112), 1,
      anon_sym_DQUOTE,
    STATE(16), 1,
      sym_comment,
    STATE(72), 1,
      sym__dw_literal,
    STATE(21), 3,
      sym_label,
      sym_placeholder,
      sym_char,
    STATE(24), 3,
      sym_array,
      sym_string,
      sym__immediate_literal,
    ACTIONS(90), 5,
      sym_macro,
      sym_identifier,
      sym_number,
      sym_relative,
      sym_port,
  [873] = 14,
    ACTIONS(11), 1,
      aux_sym_comment_token2,
    ACTIONS(13), 1,
      sym__whitespace,
    ACTIONS(17), 1,
      aux_sym_comment_token1,
    ACTIONS(31), 1,
      anon_sym_DOT,
    ACTIONS(94), 1,
      anon_sym_LT,
    ACTIONS(96), 1,
      sym_memory,
    ACTIONS(98), 1,
      anon_sym_SQUOTE,
    ACTIONS(108), 1,
      anon_sym_LBRACK,
    ACTIONS(112), 1,
      anon_sym_DQUOTE,
    STATE(17), 1,
      sym_comment,
    STATE(65), 1,
      sym__dw_literal,
    STATE(21), 3,
      sym_label,
      sym_placeholder,
      sym_char,
    STATE(24), 3,
      sym_array,
      sym_string,
      sym__immediate_literal,
    ACTIONS(90), 5,
      sym_macro,
      sym_identifier,
      sym_number,
      sym_relative,
      sym_port,
  [924] = 12,
    ACTIONS(11), 1,
      aux_sym_comment_token2,
    ACTIONS(13), 1,
      sym__whitespace,
    ACTIONS(17), 1,
      aux_sym_comment_token1,
    ACTIONS(31), 1,
      anon_sym_DOT,
    ACTIONS(96), 1,
      sym_memory,
    ACTIONS(98), 1,
      anon_sym_SQUOTE,
    ACTIONS(149), 1,
      anon_sym_LT,
    STATE(18), 1,
      sym_comment,
    STATE(75), 1,
      sym__immediate_literal,
    ACTIONS(147), 3,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
    STATE(21), 3,
      sym_label,
      sym_placeholder,
      sym_char,
    ACTIONS(90), 5,
      sym_macro,
      sym_identifier,
      sym_number,
      sym_relative,
      sym_port,
  [969] = 6,
    ACTIONS(11), 1,
      aux_sym_comment_token2,
    ACTIONS(13), 1,
      sym__whitespace,
    ACTIONS(17), 1,
      aux_sym_comment_token1,
    STATE(19), 1,
      sym_comment,
    ACTIONS(153), 5,
      sym_register,
      sym_program_counter,
      sym_stack_pointer,
      sym_identifier,
      sym_memory,
    ACTIONS(151), 9,
      ts_builtin_sym_end,
      sym_macro,
      sym__newline,
      anon_sym_DOT,
      anon_sym_LT,
      sym_number,
      anon_sym_SQUOTE,
      sym_relative,
      sym_port,
  [1000] = 6,
    ACTIONS(11), 1,
      aux_sym_comment_token2,
    ACTIONS(13), 1,
      sym__whitespace,
    ACTIONS(17), 1,
      aux_sym_comment_token1,
    STATE(20), 1,
      sym_comment,
    ACTIONS(157), 5,
      sym_register,
      sym_program_counter,
      sym_stack_pointer,
      sym_identifier,
      sym_memory,
    ACTIONS(155), 9,
      ts_builtin_sym_end,
      sym_macro,
      sym__newline,
      anon_sym_DOT,
      anon_sym_LT,
      sym_number,
      anon_sym_SQUOTE,
      sym_relative,
      sym_port,
  [1031] = 6,
    ACTIONS(11), 1,
      aux_sym_comment_token2,
    ACTIONS(13), 1,
      sym__whitespace,
    ACTIONS(17), 1,
      aux_sym_comment_token1,
    STATE(21), 1,
      sym_comment,
    ACTIONS(161), 5,
      sym_register,
      sym_program_counter,
      sym_stack_pointer,
      sym_identifier,
      sym_memory,
    ACTIONS(159), 9,
      ts_builtin_sym_end,
      sym_macro,
      sym__newline,
      anon_sym_DOT,
      anon_sym_LT,
      sym_number,
      anon_sym_SQUOTE,
      sym_relative,
      sym_port,
  [1062] = 6,
    ACTIONS(11), 1,
      aux_sym_comment_token2,
    ACTIONS(13), 1,
      sym__whitespace,
    ACTIONS(17), 1,
      aux_sym_comment_token1,
    STATE(22), 1,
      sym_comment,
    ACTIONS(165), 5,
      sym_register,
      sym_program_counter,
      sym_stack_pointer,
      sym_identifier,
      sym_memory,
    ACTIONS(163), 9,
      ts_builtin_sym_end,
      sym_macro,
      sym__newline,
      anon_sym_DOT,
      anon_sym_LT,
      sym_number,
      anon_sym_SQUOTE,
      sym_relative,
      sym_port,
  [1093] = 6,
    ACTIONS(11), 1,
      aux_sym_comment_token2,
    ACTIONS(13), 1,
      sym__whitespace,
    ACTIONS(17), 1,
      aux_sym_comment_token1,
    ACTIONS(169), 1,
      sym_memory,
    STATE(23), 1,
      sym_comment,
    ACTIONS(167), 13,
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
  [1124] = 6,
    ACTIONS(11), 1,
      aux_sym_comment_token2,
    ACTIONS(13), 1,
      sym__whitespace,
    ACTIONS(17), 1,
      aux_sym_comment_token1,
    ACTIONS(173), 1,
      sym_memory,
    STATE(24), 1,
      sym_comment,
    ACTIONS(171), 13,
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
  [1155] = 6,
    ACTIONS(11), 1,
      aux_sym_comment_token2,
    ACTIONS(13), 1,
      sym__whitespace,
    ACTIONS(17), 1,
      aux_sym_comment_token1,
    STATE(25), 1,
      sym_comment,
    ACTIONS(177), 5,
      sym_register,
      sym_program_counter,
      sym_stack_pointer,
      sym_identifier,
      sym_memory,
    ACTIONS(175), 9,
      ts_builtin_sym_end,
      sym_macro,
      sym__newline,
      anon_sym_DOT,
      anon_sym_LT,
      sym_number,
      anon_sym_SQUOTE,
      sym_relative,
      sym_port,
  [1186] = 6,
    ACTIONS(11), 1,
      aux_sym_comment_token2,
    ACTIONS(13), 1,
      sym__whitespace,
    ACTIONS(17), 1,
      aux_sym_comment_token1,
    STATE(26), 1,
      sym_comment,
    ACTIONS(181), 5,
      sym_register,
      sym_program_counter,
      sym_stack_pointer,
      sym_identifier,
      sym_memory,
    ACTIONS(179), 9,
      ts_builtin_sym_end,
      sym_macro,
      sym__newline,
      anon_sym_DOT,
      anon_sym_LT,
      sym_number,
      anon_sym_SQUOTE,
      sym_relative,
      sym_port,
  [1217] = 6,
    ACTIONS(11), 1,
      aux_sym_comment_token2,
    ACTIONS(13), 1,
      sym__whitespace,
    ACTIONS(17), 1,
      aux_sym_comment_token1,
    ACTIONS(185), 1,
      sym_memory,
    STATE(27), 1,
      sym_comment,
    ACTIONS(183), 13,
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
  [1248] = 6,
    ACTIONS(11), 1,
      aux_sym_comment_token2,
    ACTIONS(13), 1,
      sym__whitespace,
    ACTIONS(17), 1,
      aux_sym_comment_token1,
    ACTIONS(189), 1,
      sym_memory,
    STATE(28), 1,
      sym_comment,
    ACTIONS(187), 13,
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
  [1279] = 6,
    ACTIONS(11), 1,
      aux_sym_comment_token2,
    ACTIONS(13), 1,
      sym__whitespace,
    ACTIONS(17), 1,
      aux_sym_comment_token1,
    ACTIONS(193), 1,
      sym_memory,
    STATE(29), 1,
      sym_comment,
    ACTIONS(191), 13,
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
  [1310] = 11,
    ACTIONS(11), 1,
      aux_sym_comment_token2,
    ACTIONS(13), 1,
      sym__whitespace,
    ACTIONS(17), 1,
      aux_sym_comment_token1,
    ACTIONS(31), 1,
      anon_sym_DOT,
    ACTIONS(94), 1,
      anon_sym_LT,
    ACTIONS(96), 1,
      sym_memory,
    ACTIONS(98), 1,
      anon_sym_SQUOTE,
    STATE(30), 1,
      sym_comment,
    STATE(74), 1,
      sym__immediate_literal,
    STATE(21), 3,
      sym_label,
      sym_placeholder,
      sym_char,
    ACTIONS(90), 5,
      sym_macro,
      sym_identifier,
      sym_number,
      sym_relative,
      sym_port,
  [1350] = 11,
    ACTIONS(11), 1,
      aux_sym_comment_token2,
    ACTIONS(13), 1,
      sym__whitespace,
    ACTIONS(17), 1,
      aux_sym_comment_token1,
    ACTIONS(31), 1,
      anon_sym_DOT,
    ACTIONS(94), 1,
      anon_sym_LT,
    ACTIONS(96), 1,
      sym_memory,
    ACTIONS(98), 1,
      anon_sym_SQUOTE,
    STATE(31), 1,
      sym_comment,
    STATE(80), 1,
      sym__immediate_literal,
    STATE(21), 3,
      sym_label,
      sym_placeholder,
      sym_char,
    ACTIONS(90), 5,
      sym_macro,
      sym_identifier,
      sym_number,
      sym_relative,
      sym_port,
  [1390] = 11,
    ACTIONS(11), 1,
      aux_sym_comment_token2,
    ACTIONS(13), 1,
      sym__whitespace,
    ACTIONS(17), 1,
      aux_sym_comment_token1,
    ACTIONS(31), 1,
      anon_sym_DOT,
    ACTIONS(94), 1,
      anon_sym_LT,
    ACTIONS(96), 1,
      sym_memory,
    ACTIONS(98), 1,
      anon_sym_SQUOTE,
    STATE(32), 1,
      sym_comment,
    STATE(71), 1,
      sym__immediate_literal,
    STATE(21), 3,
      sym_label,
      sym_placeholder,
      sym_char,
    ACTIONS(90), 5,
      sym_macro,
      sym_identifier,
      sym_number,
      sym_relative,
      sym_port,
  [1430] = 11,
    ACTIONS(11), 1,
      aux_sym_comment_token2,
    ACTIONS(13), 1,
      sym__whitespace,
    ACTIONS(17), 1,
      aux_sym_comment_token1,
    ACTIONS(31), 1,
      anon_sym_DOT,
    ACTIONS(94), 1,
      anon_sym_LT,
    ACTIONS(96), 1,
      sym_memory,
    ACTIONS(98), 1,
      anon_sym_SQUOTE,
    STATE(33), 1,
      sym_comment,
    STATE(73), 1,
      sym__immediate_literal,
    STATE(21), 3,
      sym_label,
      sym_placeholder,
      sym_char,
    ACTIONS(90), 5,
      sym_macro,
      sym_identifier,
      sym_number,
      sym_relative,
      sym_port,
  [1470] = 6,
    ACTIONS(11), 1,
      aux_sym_comment_token2,
    ACTIONS(13), 1,
      sym__whitespace,
    ACTIONS(17), 1,
      aux_sym_comment_token1,
    ACTIONS(161), 1,
      sym_memory,
    STATE(34), 1,
      sym_comment,
    ACTIONS(159), 11,
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
  [1499] = 6,
    ACTIONS(11), 1,
      aux_sym_comment_token2,
    ACTIONS(13), 1,
      sym__whitespace,
    ACTIONS(17), 1,
      aux_sym_comment_token1,
    ACTIONS(153), 1,
      sym_memory,
    STATE(35), 1,
      sym_comment,
    ACTIONS(151), 11,
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
  [1528] = 8,
    ACTIONS(11), 1,
      aux_sym_comment_token2,
    ACTIONS(13), 1,
      sym__whitespace,
    ACTIONS(15), 1,
      sym__newline,
    ACTIONS(17), 1,
      aux_sym_comment_token1,
    STATE(36), 1,
      sym_comment,
    STATE(40), 1,
      aux_sym_source_file_repeat1,
    ACTIONS(195), 3,
      ts_builtin_sym_end,
      sym_macro,
      anon_sym_DOT,
    ACTIONS(197), 7,
      anon_sym_BITS,
      anon_sym_MINREG,
      anon_sym_MINHEAP,
      anon_sym_MINSTACK,
      anon_sym_RUN,
      anon_sym_DW,
      sym_identifier,
  [1561] = 8,
    ACTIONS(11), 1,
      aux_sym_comment_token2,
    ACTIONS(13), 1,
      sym__whitespace,
    ACTIONS(15), 1,
      sym__newline,
    ACTIONS(17), 1,
      aux_sym_comment_token1,
    STATE(37), 1,
      sym_comment,
    STATE(40), 1,
      aux_sym_source_file_repeat1,
    ACTIONS(199), 3,
      ts_builtin_sym_end,
      sym_macro,
      anon_sym_DOT,
    ACTIONS(201), 7,
      anon_sym_BITS,
      anon_sym_MINREG,
      anon_sym_MINHEAP,
      anon_sym_MINSTACK,
      anon_sym_RUN,
      anon_sym_DW,
      sym_identifier,
  [1594] = 8,
    ACTIONS(11), 1,
      aux_sym_comment_token2,
    ACTIONS(13), 1,
      sym__whitespace,
    ACTIONS(15), 1,
      sym__newline,
    ACTIONS(17), 1,
      aux_sym_comment_token1,
    STATE(38), 1,
      sym_comment,
    STATE(40), 1,
      aux_sym_source_file_repeat1,
    ACTIONS(203), 3,
      ts_builtin_sym_end,
      sym_macro,
      anon_sym_DOT,
    ACTIONS(205), 7,
      anon_sym_BITS,
      anon_sym_MINREG,
      anon_sym_MINHEAP,
      anon_sym_MINSTACK,
      anon_sym_RUN,
      anon_sym_DW,
      sym_identifier,
  [1627] = 6,
    ACTIONS(11), 1,
      aux_sym_comment_token2,
    ACTIONS(13), 1,
      sym__whitespace,
    ACTIONS(17), 1,
      aux_sym_comment_token1,
    ACTIONS(209), 1,
      sym_memory,
    STATE(39), 1,
      sym_comment,
    ACTIONS(207), 11,
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
  [1656] = 7,
    ACTIONS(11), 1,
      aux_sym_comment_token2,
    ACTIONS(13), 1,
      sym__whitespace,
    ACTIONS(17), 1,
      aux_sym_comment_token1,
    ACTIONS(213), 1,
      sym__newline,
    STATE(40), 2,
      sym_comment,
      aux_sym_source_file_repeat1,
    ACTIONS(211), 3,
      ts_builtin_sym_end,
      sym_macro,
      anon_sym_DOT,
    ACTIONS(216), 7,
      anon_sym_BITS,
      anon_sym_MINREG,
      anon_sym_MINHEAP,
      anon_sym_MINSTACK,
      anon_sym_RUN,
      anon_sym_DW,
      sym_identifier,
  [1687] = 6,
    ACTIONS(11), 1,
      aux_sym_comment_token2,
    ACTIONS(13), 1,
      sym__whitespace,
    ACTIONS(17), 1,
      aux_sym_comment_token1,
    ACTIONS(157), 1,
      sym_memory,
    STATE(41), 1,
      sym_comment,
    ACTIONS(155), 11,
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
  [1716] = 6,
    ACTIONS(11), 1,
      aux_sym_comment_token2,
    ACTIONS(13), 1,
      sym__whitespace,
    ACTIONS(17), 1,
      aux_sym_comment_token1,
    ACTIONS(181), 1,
      sym_memory,
    STATE(42), 1,
      sym_comment,
    ACTIONS(179), 11,
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
  [1745] = 6,
    ACTIONS(11), 1,
      aux_sym_comment_token2,
    ACTIONS(13), 1,
      sym__whitespace,
    ACTIONS(17), 1,
      aux_sym_comment_token1,
    STATE(43), 1,
      sym_comment,
    ACTIONS(218), 4,
      ts_builtin_sym_end,
      sym_macro,
      sym__newline,
      anon_sym_DOT,
    ACTIONS(220), 7,
      anon_sym_BITS,
      anon_sym_MINREG,
      anon_sym_MINHEAP,
      anon_sym_MINSTACK,
      anon_sym_RUN,
      anon_sym_DW,
      sym_identifier,
  [1773] = 8,
    ACTIONS(11), 1,
      aux_sym_comment_token2,
    ACTIONS(13), 1,
      sym__whitespace,
    ACTIONS(17), 1,
      aux_sym_comment_token1,
    ACTIONS(224), 1,
      sym__newline,
    STATE(44), 1,
      sym_comment,
    STATE(46), 1,
      aux_sym_source_file_repeat1,
    ACTIONS(222), 2,
      sym_macro,
      anon_sym_DOT,
    ACTIONS(226), 2,
      anon_sym_DW,
      sym_identifier,
  [1800] = 10,
    ACTIONS(11), 1,
      aux_sym_comment_token2,
    ACTIONS(13), 1,
      sym__whitespace,
    ACTIONS(17), 1,
      aux_sym_comment_token1,
    ACTIONS(31), 1,
      anon_sym_DOT,
    ACTIONS(228), 1,
      sym_macro,
    ACTIONS(230), 1,
      anon_sym_DW,
    ACTIONS(232), 1,
      sym_identifier,
    STATE(45), 1,
      sym_comment,
    STATE(47), 1,
      aux_sym_DW_repeat1,
    STATE(79), 1,
      sym_label,
  [1831] = 7,
    ACTIONS(11), 1,
      aux_sym_comment_token2,
    ACTIONS(13), 1,
      sym__whitespace,
    ACTIONS(17), 1,
      aux_sym_comment_token1,
    ACTIONS(234), 1,
      sym__newline,
    ACTIONS(211), 2,
      sym_macro,
      anon_sym_DOT,
    ACTIONS(216), 2,
      anon_sym_DW,
      sym_identifier,
    STATE(46), 2,
      sym_comment,
      aux_sym_source_file_repeat1,
  [1856] = 8,
    ACTIONS(11), 1,
      aux_sym_comment_token2,
    ACTIONS(13), 1,
      sym__whitespace,
    ACTIONS(17), 1,
      aux_sym_comment_token1,
    ACTIONS(237), 1,
      sym_macro,
    ACTIONS(241), 1,
      anon_sym_DOT,
    STATE(79), 1,
      sym_label,
    ACTIONS(239), 2,
      anon_sym_DW,
      sym_identifier,
    STATE(47), 2,
      sym_comment,
      aux_sym_DW_repeat1,
  [1883] = 6,
    ACTIONS(11), 1,
      aux_sym_comment_token2,
    ACTIONS(13), 1,
      sym__whitespace,
    ACTIONS(17), 1,
      aux_sym_comment_token1,
    STATE(48), 1,
      sym_comment,
    ACTIONS(220), 2,
      anon_sym_DW,
      sym_identifier,
    ACTIONS(218), 3,
      sym_macro,
      sym__newline,
      anon_sym_DOT,
  [1905] = 7,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(244), 1,
      anon_sym_DQUOTE,
    STATE(49), 1,
      sym_comment,
    STATE(51), 1,
      aux_sym_string_repeat1,
    ACTIONS(246), 2,
      sym__string_literal_fragment,
      sym_escape_sequence,
  [1928] = 7,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(248), 1,
      anon_sym_DQUOTE,
    STATE(49), 1,
      aux_sym_string_repeat1,
    STATE(50), 1,
      sym_comment,
    ACTIONS(246), 2,
      sym__string_literal_fragment,
      sym_escape_sequence,
  [1951] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(250), 1,
      anon_sym_DQUOTE,
    ACTIONS(252), 2,
      sym__string_literal_fragment,
      sym_escape_sequence,
    STATE(51), 2,
      sym_comment,
      aux_sym_string_repeat1,
  [1972] = 7,
    ACTIONS(11), 1,
      aux_sym_comment_token2,
    ACTIONS(13), 1,
      sym__whitespace,
    ACTIONS(15), 1,
      sym__newline,
    ACTIONS(17), 1,
      aux_sym_comment_token1,
    ACTIONS(255), 1,
      ts_builtin_sym_end,
    STATE(37), 1,
      aux_sym_source_file_repeat1,
    STATE(52), 1,
      sym_comment,
  [1994] = 7,
    ACTIONS(11), 1,
      aux_sym_comment_token2,
    ACTIONS(13), 1,
      sym__whitespace,
    ACTIONS(15), 1,
      sym__newline,
    ACTIONS(17), 1,
      aux_sym_comment_token1,
    ACTIONS(257), 1,
      ts_builtin_sym_end,
    STATE(36), 1,
      aux_sym_source_file_repeat1,
    STATE(53), 1,
      sym_comment,
  [2016] = 7,
    ACTIONS(11), 1,
      aux_sym_comment_token2,
    ACTIONS(13), 1,
      sym__whitespace,
    ACTIONS(15), 1,
      sym__newline,
    ACTIONS(17), 1,
      aux_sym_comment_token1,
    ACTIONS(259), 1,
      ts_builtin_sym_end,
    STATE(38), 1,
      aux_sym_source_file_repeat1,
    STATE(54), 1,
      sym_comment,
  [2038] = 7,
    ACTIONS(11), 1,
      aux_sym_comment_token2,
    ACTIONS(13), 1,
      sym__whitespace,
    ACTIONS(15), 1,
      sym__newline,
    ACTIONS(17), 1,
      aux_sym_comment_token1,
    ACTIONS(261), 1,
      ts_builtin_sym_end,
    STATE(36), 1,
      aux_sym_source_file_repeat1,
    STATE(55), 1,
      sym_comment,
  [2060] = 7,
    ACTIONS(11), 1,
      aux_sym_comment_token2,
    ACTIONS(13), 1,
      sym__whitespace,
    ACTIONS(15), 1,
      sym__newline,
    ACTIONS(17), 1,
      aux_sym_comment_token1,
    ACTIONS(263), 1,
      ts_builtin_sym_end,
    STATE(37), 1,
      aux_sym_source_file_repeat1,
    STATE(56), 1,
      sym_comment,
  [2082] = 7,
    ACTIONS(11), 1,
      aux_sym_comment_token2,
    ACTIONS(13), 1,
      sym__whitespace,
    ACTIONS(15), 1,
      sym__newline,
    ACTIONS(17), 1,
      aux_sym_comment_token1,
    ACTIONS(265), 1,
      ts_builtin_sym_end,
    STATE(36), 1,
      aux_sym_source_file_repeat1,
    STATE(57), 1,
      sym_comment,
  [2104] = 7,
    ACTIONS(11), 1,
      aux_sym_comment_token2,
    ACTIONS(13), 1,
      sym__whitespace,
    ACTIONS(15), 1,
      sym__newline,
    ACTIONS(17), 1,
      aux_sym_comment_token1,
    ACTIONS(267), 1,
      ts_builtin_sym_end,
    STATE(38), 1,
      aux_sym_source_file_repeat1,
    STATE(58), 1,
      sym_comment,
  [2126] = 7,
    ACTIONS(11), 1,
      aux_sym_comment_token2,
    ACTIONS(13), 1,
      sym__whitespace,
    ACTIONS(15), 1,
      sym__newline,
    ACTIONS(17), 1,
      aux_sym_comment_token1,
    ACTIONS(269), 1,
      ts_builtin_sym_end,
    STATE(37), 1,
      aux_sym_source_file_repeat1,
    STATE(59), 1,
      sym_comment,
  [2148] = 7,
    ACTIONS(11), 1,
      aux_sym_comment_token2,
    ACTIONS(13), 1,
      sym__whitespace,
    ACTIONS(15), 1,
      sym__newline,
    ACTIONS(17), 1,
      aux_sym_comment_token1,
    ACTIONS(271), 1,
      ts_builtin_sym_end,
    STATE(37), 1,
      aux_sym_source_file_repeat1,
    STATE(60), 1,
      sym_comment,
  [2170] = 7,
    ACTIONS(11), 1,
      aux_sym_comment_token2,
    ACTIONS(13), 1,
      sym__whitespace,
    ACTIONS(15), 1,
      sym__newline,
    ACTIONS(17), 1,
      aux_sym_comment_token1,
    ACTIONS(273), 1,
      ts_builtin_sym_end,
    STATE(36), 1,
      aux_sym_source_file_repeat1,
    STATE(61), 1,
      sym_comment,
  [2192] = 7,
    ACTIONS(11), 1,
      aux_sym_comment_token2,
    ACTIONS(13), 1,
      sym__whitespace,
    ACTIONS(15), 1,
      sym__newline,
    ACTIONS(17), 1,
      aux_sym_comment_token1,
    ACTIONS(275), 1,
      ts_builtin_sym_end,
    STATE(38), 1,
      aux_sym_source_file_repeat1,
    STATE(62), 1,
      sym_comment,
  [2214] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(63), 1,
      sym_comment,
    ACTIONS(277), 3,
      anon_sym_DQUOTE,
      sym__string_literal_fragment,
      sym_escape_sequence,
  [2232] = 7,
    ACTIONS(11), 1,
      aux_sym_comment_token2,
    ACTIONS(13), 1,
      sym__whitespace,
    ACTIONS(15), 1,
      sym__newline,
    ACTIONS(17), 1,
      aux_sym_comment_token1,
    ACTIONS(279), 1,
      ts_builtin_sym_end,
    STATE(38), 1,
      aux_sym_source_file_repeat1,
    STATE(64), 1,
      sym_comment,
  [2254] = 5,
    ACTIONS(11), 1,
      aux_sym_comment_token2,
    ACTIONS(13), 1,
      sym__whitespace,
    ACTIONS(17), 1,
      aux_sym_comment_token1,
    STATE(65), 1,
      sym_comment,
    ACTIONS(281), 2,
      ts_builtin_sym_end,
      sym__newline,
  [2271] = 5,
    ACTIONS(11), 1,
      aux_sym_comment_token2,
    ACTIONS(13), 1,
      sym__whitespace,
    ACTIONS(17), 1,
      aux_sym_comment_token1,
    STATE(66), 1,
      sym_comment,
    ACTIONS(283), 2,
      ts_builtin_sym_end,
      sym__newline,
  [2288] = 5,
    ACTIONS(11), 1,
      aux_sym_comment_token2,
    ACTIONS(13), 1,
      sym__whitespace,
    ACTIONS(17), 1,
      aux_sym_comment_token1,
    STATE(67), 1,
      sym_comment,
    ACTIONS(285), 2,
      ts_builtin_sym_end,
      sym__newline,
  [2305] = 6,
    ACTIONS(11), 1,
      aux_sym_comment_token2,
    ACTIONS(13), 1,
      sym__whitespace,
    ACTIONS(15), 1,
      sym__newline,
    ACTIONS(17), 1,
      aux_sym_comment_token1,
    STATE(36), 1,
      aux_sym_source_file_repeat1,
    STATE(68), 1,
      sym_comment,
  [2324] = 6,
    ACTIONS(11), 1,
      aux_sym_comment_token2,
    ACTIONS(13), 1,
      sym__whitespace,
    ACTIONS(15), 1,
      sym__newline,
    ACTIONS(17), 1,
      aux_sym_comment_token1,
    STATE(37), 1,
      aux_sym_source_file_repeat1,
    STATE(69), 1,
      sym_comment,
  [2343] = 6,
    ACTIONS(11), 1,
      aux_sym_comment_token2,
    ACTIONS(13), 1,
      sym__whitespace,
    ACTIONS(15), 1,
      sym__newline,
    ACTIONS(17), 1,
      aux_sym_comment_token1,
    STATE(38), 1,
      aux_sym_source_file_repeat1,
    STATE(70), 1,
      sym_comment,
  [2362] = 5,
    ACTIONS(11), 1,
      aux_sym_comment_token2,
    ACTIONS(13), 1,
      sym__whitespace,
    ACTIONS(17), 1,
      aux_sym_comment_token1,
    STATE(71), 1,
      sym_comment,
    ACTIONS(287), 2,
      ts_builtin_sym_end,
      sym__newline,
  [2379] = 5,
    ACTIONS(11), 1,
      aux_sym_comment_token2,
    ACTIONS(13), 1,
      sym__whitespace,
    ACTIONS(17), 1,
      aux_sym_comment_token1,
    STATE(72), 1,
      sym_comment,
    ACTIONS(289), 2,
      ts_builtin_sym_end,
      sym__newline,
  [2396] = 5,
    ACTIONS(11), 1,
      aux_sym_comment_token2,
    ACTIONS(13), 1,
      sym__whitespace,
    ACTIONS(17), 1,
      aux_sym_comment_token1,
    STATE(73), 1,
      sym_comment,
    ACTIONS(291), 2,
      ts_builtin_sym_end,
      sym__newline,
  [2413] = 5,
    ACTIONS(11), 1,
      aux_sym_comment_token2,
    ACTIONS(13), 1,
      sym__whitespace,
    ACTIONS(17), 1,
      aux_sym_comment_token1,
    STATE(74), 1,
      sym_comment,
    ACTIONS(293), 2,
      ts_builtin_sym_end,
      sym__newline,
  [2430] = 5,
    ACTIONS(11), 1,
      aux_sym_comment_token2,
    ACTIONS(13), 1,
      sym__whitespace,
    ACTIONS(17), 1,
      aux_sym_comment_token1,
    STATE(75), 1,
      sym_comment,
    ACTIONS(295), 2,
      ts_builtin_sym_end,
      sym__newline,
  [2447] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(11), 1,
      aux_sym_comment_token2,
    ACTIONS(17), 1,
      aux_sym_comment_token1,
    ACTIONS(297), 1,
      sym_escape_sequence,
    ACTIONS(299), 1,
      aux_sym_char_token1,
    STATE(76), 1,
      sym_comment,
  [2466] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(11), 1,
      aux_sym_comment_token2,
    ACTIONS(17), 1,
      aux_sym_comment_token1,
    ACTIONS(301), 1,
      sym_escape_sequence,
    ACTIONS(303), 1,
      aux_sym_char_token1,
    STATE(77), 1,
      sym_comment,
  [2485] = 5,
    ACTIONS(11), 1,
      aux_sym_comment_token2,
    ACTIONS(13), 1,
      sym__whitespace,
    ACTIONS(17), 1,
      aux_sym_comment_token1,
    STATE(78), 1,
      sym_comment,
    ACTIONS(305), 2,
      anon_sym_RAM,
      anon_sym_ROM,
  [2502] = 6,
    ACTIONS(11), 1,
      aux_sym_comment_token2,
    ACTIONS(13), 1,
      sym__whitespace,
    ACTIONS(17), 1,
      aux_sym_comment_token1,
    ACTIONS(224), 1,
      sym__newline,
    STATE(44), 1,
      aux_sym_source_file_repeat1,
    STATE(79), 1,
      sym_comment,
  [2521] = 5,
    ACTIONS(11), 1,
      aux_sym_comment_token2,
    ACTIONS(13), 1,
      sym__whitespace,
    ACTIONS(17), 1,
      aux_sym_comment_token1,
    STATE(80), 1,
      sym_comment,
    ACTIONS(307), 2,
      ts_builtin_sym_end,
      sym__newline,
  [2538] = 5,
    ACTIONS(11), 1,
      aux_sym_comment_token2,
    ACTIONS(13), 1,
      sym__whitespace,
    ACTIONS(17), 1,
      aux_sym_comment_token1,
    ACTIONS(309), 1,
      anon_sym_GT,
    STATE(81), 1,
      sym_comment,
  [2554] = 5,
    ACTIONS(11), 1,
      aux_sym_comment_token2,
    ACTIONS(13), 1,
      sym__whitespace,
    ACTIONS(17), 1,
      aux_sym_comment_token1,
    ACTIONS(311), 1,
      anon_sym_SQUOTE,
    STATE(82), 1,
      sym_comment,
  [2570] = 5,
    ACTIONS(11), 1,
      aux_sym_comment_token2,
    ACTIONS(13), 1,
      sym__whitespace,
    ACTIONS(17), 1,
      aux_sym_comment_token1,
    ACTIONS(313), 1,
      ts_builtin_sym_end,
    STATE(83), 1,
      sym_comment,
  [2586] = 5,
    ACTIONS(11), 1,
      aux_sym_comment_token2,
    ACTIONS(13), 1,
      sym__whitespace,
    ACTIONS(17), 1,
      aux_sym_comment_token1,
    ACTIONS(315), 1,
      sym_identifier,
    STATE(84), 1,
      sym_comment,
  [2602] = 5,
    ACTIONS(11), 1,
      aux_sym_comment_token2,
    ACTIONS(13), 1,
      sym__whitespace,
    ACTIONS(17), 1,
      aux_sym_comment_token1,
    ACTIONS(317), 1,
      sym_identifier,
    STATE(85), 1,
      sym_comment,
  [2618] = 5,
    ACTIONS(11), 1,
      aux_sym_comment_token2,
    ACTIONS(13), 1,
      sym__whitespace,
    ACTIONS(17), 1,
      aux_sym_comment_token1,
    ACTIONS(319), 1,
      sym_identifier,
    STATE(86), 1,
      sym_comment,
  [2634] = 5,
    ACTIONS(11), 1,
      aux_sym_comment_token2,
    ACTIONS(13), 1,
      sym__whitespace,
    ACTIONS(17), 1,
      aux_sym_comment_token1,
    ACTIONS(321), 1,
      anon_sym_GT,
    STATE(87), 1,
      sym_comment,
  [2650] = 5,
    ACTIONS(11), 1,
      aux_sym_comment_token2,
    ACTIONS(13), 1,
      sym__whitespace,
    ACTIONS(17), 1,
      aux_sym_comment_token1,
    ACTIONS(323), 1,
      anon_sym_SQUOTE,
    STATE(88), 1,
      sym_comment,
  [2666] = 5,
    ACTIONS(11), 1,
      aux_sym_comment_token2,
    ACTIONS(13), 1,
      sym__whitespace,
    ACTIONS(17), 1,
      aux_sym_comment_token1,
    ACTIONS(325), 1,
      sym_identifier,
    STATE(89), 1,
      sym_comment,
  [2682] = 1,
    ACTIONS(327), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 72,
  [SMALL_STATE(4)] = 138,
  [SMALL_STATE(5)] = 204,
  [SMALL_STATE(6)] = 270,
  [SMALL_STATE(7)] = 323,
  [SMALL_STATE(8)] = 378,
  [SMALL_STATE(9)] = 433,
  [SMALL_STATE(10)] = 490,
  [SMALL_STATE(11)] = 547,
  [SMALL_STATE(12)] = 602,
  [SMALL_STATE(13)] = 657,
  [SMALL_STATE(14)] = 712,
  [SMALL_STATE(15)] = 767,
  [SMALL_STATE(16)] = 822,
  [SMALL_STATE(17)] = 873,
  [SMALL_STATE(18)] = 924,
  [SMALL_STATE(19)] = 969,
  [SMALL_STATE(20)] = 1000,
  [SMALL_STATE(21)] = 1031,
  [SMALL_STATE(22)] = 1062,
  [SMALL_STATE(23)] = 1093,
  [SMALL_STATE(24)] = 1124,
  [SMALL_STATE(25)] = 1155,
  [SMALL_STATE(26)] = 1186,
  [SMALL_STATE(27)] = 1217,
  [SMALL_STATE(28)] = 1248,
  [SMALL_STATE(29)] = 1279,
  [SMALL_STATE(30)] = 1310,
  [SMALL_STATE(31)] = 1350,
  [SMALL_STATE(32)] = 1390,
  [SMALL_STATE(33)] = 1430,
  [SMALL_STATE(34)] = 1470,
  [SMALL_STATE(35)] = 1499,
  [SMALL_STATE(36)] = 1528,
  [SMALL_STATE(37)] = 1561,
  [SMALL_STATE(38)] = 1594,
  [SMALL_STATE(39)] = 1627,
  [SMALL_STATE(40)] = 1656,
  [SMALL_STATE(41)] = 1687,
  [SMALL_STATE(42)] = 1716,
  [SMALL_STATE(43)] = 1745,
  [SMALL_STATE(44)] = 1773,
  [SMALL_STATE(45)] = 1800,
  [SMALL_STATE(46)] = 1831,
  [SMALL_STATE(47)] = 1856,
  [SMALL_STATE(48)] = 1883,
  [SMALL_STATE(49)] = 1905,
  [SMALL_STATE(50)] = 1928,
  [SMALL_STATE(51)] = 1951,
  [SMALL_STATE(52)] = 1972,
  [SMALL_STATE(53)] = 1994,
  [SMALL_STATE(54)] = 2016,
  [SMALL_STATE(55)] = 2038,
  [SMALL_STATE(56)] = 2060,
  [SMALL_STATE(57)] = 2082,
  [SMALL_STATE(58)] = 2104,
  [SMALL_STATE(59)] = 2126,
  [SMALL_STATE(60)] = 2148,
  [SMALL_STATE(61)] = 2170,
  [SMALL_STATE(62)] = 2192,
  [SMALL_STATE(63)] = 2214,
  [SMALL_STATE(64)] = 2232,
  [SMALL_STATE(65)] = 2254,
  [SMALL_STATE(66)] = 2271,
  [SMALL_STATE(67)] = 2288,
  [SMALL_STATE(68)] = 2305,
  [SMALL_STATE(69)] = 2324,
  [SMALL_STATE(70)] = 2343,
  [SMALL_STATE(71)] = 2362,
  [SMALL_STATE(72)] = 2379,
  [SMALL_STATE(73)] = 2396,
  [SMALL_STATE(74)] = 2413,
  [SMALL_STATE(75)] = 2430,
  [SMALL_STATE(76)] = 2447,
  [SMALL_STATE(77)] = 2466,
  [SMALL_STATE(78)] = 2485,
  [SMALL_STATE(79)] = 2502,
  [SMALL_STATE(80)] = 2521,
  [SMALL_STATE(81)] = 2538,
  [SMALL_STATE(82)] = 2554,
  [SMALL_STATE(83)] = 2570,
  [SMALL_STATE(84)] = 2586,
  [SMALL_STATE(85)] = 2602,
  [SMALL_STATE(86)] = 2618,
  [SMALL_STATE(87)] = 2634,
  [SMALL_STATE(88)] = 2650,
  [SMALL_STATE(89)] = 2666,
  [SMALL_STATE(90)] = 2682,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, .production_id = 5),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2, .production_id = 18),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2, .production_id = 18), SHIFT_REPEAT(7),
  [42] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2, .production_id = 18), SHIFT_REPEAT(18),
  [45] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2, .production_id = 18), SHIFT_REPEAT(30),
  [48] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2, .production_id = 18), SHIFT_REPEAT(33),
  [51] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2, .production_id = 18), SHIFT_REPEAT(32),
  [54] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2, .production_id = 18), SHIFT_REPEAT(78),
  [57] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2, .production_id = 18), SHIFT_REPEAT(17),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2, .production_id = 18), SHIFT_REPEAT(84),
  [63] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2, .production_id = 18), SHIFT_REPEAT(7),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, .production_id = 14),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_instruction_repeat1, 2),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_instruction_repeat1, 2), SHIFT_REPEAT(21),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_instruction_repeat1, 2), SHIFT_REPEAT(84),
  [76] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_instruction_repeat1, 2), SHIFT_REPEAT(22),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_instruction_repeat1, 2), SHIFT_REPEAT(85),
  [82] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_instruction_repeat1, 2), SHIFT_REPEAT(21),
  [85] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_instruction_repeat1, 2), SHIFT_REPEAT(76),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 1, .production_id = 1),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [92] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [96] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 2, .production_id = 19),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [116] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 3, .production_id = 25),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 2, .production_id = 6),
  [124] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(34),
  [127] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(86),
  [130] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(89),
  [133] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(10),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2),
  [138] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(50),
  [141] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(77),
  [144] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(34),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char, 3),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_char, 3),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 2, .production_id = 9),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label, 2, .production_id = 9),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__immediate_literal, 1),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__immediate_literal, 1),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__operand, 1),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__operand, 1),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 3, .production_id = 27),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 3, .production_id = 27),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__dw_literal, 1),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__dw_literal, 1),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_instruction_repeat1, 1),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_instruction_repeat1, 1),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_placeholder, 3),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_placeholder, 3),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 2),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 2),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2, .production_id = 2),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2, .production_id = 2),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2, .production_id = 3),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2, .production_id = 3),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2, .production_id = 4),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2, .production_id = 4),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 1),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_array_repeat1, 1),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [213] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(43),
  [216] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 1),
  [220] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 1),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_DW_repeat1, 2, .production_id = 10),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [226] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_DW_repeat1, 2, .production_id = 10),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [230] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [232] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [234] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(48),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_DW_repeat1, 2, .production_id = 20),
  [239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_DW_repeat1, 2, .production_id = 20),
  [241] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_DW_repeat1, 2, .production_id = 20), SHIFT_REPEAT(84),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2),
  [252] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(63),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, .production_id = 12),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 3, .production_id = 22),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, .production_id = 13),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, .production_id = 2),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, .production_id = 3),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, .production_id = 15),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, .production_id = 4),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, .production_id = 16),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 3, .production_id = 23),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, .production_id = 11),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, .production_id = 17),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 1),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 3, .production_id = 24),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_DW, 2, .production_id = 7),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__header, 1),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_RUN, 2, .production_id = 8),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_MINSTACK, 2, .production_id = 7),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_DW, 3, .production_id = 26),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_MINHEAP, 2, .production_id = 7),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_MINREG, 2, .production_id = 7),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_BITS, 2, .production_id = 7),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [299] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [303] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_BITS, 3, .production_id = 21),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [313] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
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
