#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 78
#define LARGE_STATE_COUNT 3
#define SYMBOL_COUNT 55
#define ALIAS_COUNT 0
#define TOKEN_COUNT 33
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 10
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 26

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
  sym_string = 26,
  sym_number = 27,
  sym_char = 28,
  sym_char_escape = 29,
  sym_relative = 30,
  sym_memory = 31,
  sym_port = 32,
  sym_source_file = 33,
  sym_comment = 34,
  sym__header = 35,
  sym_BITS = 36,
  sym_MINREG = 37,
  sym_MINHEAP = 38,
  sym_MINSTACK = 39,
  sym_RUN = 40,
  sym_DW = 41,
  sym_label_def = 42,
  sym_label = 43,
  sym__operand = 44,
  sym_placeholder = 45,
  sym__dw_literal = 46,
  sym_array = 47,
  sym__immediate_literal = 48,
  sym_instruction = 49,
  aux_sym_source_file_repeat1 = 50,
  aux_sym_source_file_repeat2 = 51,
  aux_sym_DW_repeat1 = 52,
  aux_sym_array_repeat1 = 53,
  aux_sym_instruction_repeat1 = 54,
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
  [sym_string] = "string",
  [sym_number] = "number",
  [sym_char] = "char",
  [sym_char_escape] = "char_escape",
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
  [sym_label_def] = "label_def",
  [sym_label] = "label",
  [sym__operand] = "_operand",
  [sym_placeholder] = "placeholder",
  [sym__dw_literal] = "_dw_literal",
  [sym_array] = "array",
  [sym__immediate_literal] = "_immediate_literal",
  [sym_instruction] = "instruction",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_source_file_repeat2] = "source_file_repeat2",
  [aux_sym_DW_repeat1] = "DW_repeat1",
  [aux_sym_array_repeat1] = "array_repeat1",
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
  [sym_string] = sym_string,
  [sym_number] = sym_number,
  [sym_char] = sym_char,
  [sym_char_escape] = sym_char_escape,
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
  [sym_label_def] = sym_label_def,
  [sym_label] = sym_label,
  [sym__operand] = sym__operand,
  [sym_placeholder] = sym_placeholder,
  [sym__dw_literal] = sym__dw_literal,
  [sym_array] = sym_array,
  [sym__immediate_literal] = sym__immediate_literal,
  [sym_instruction] = sym_instruction,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_source_file_repeat2] = aux_sym_source_file_repeat2,
  [aux_sym_DW_repeat1] = aux_sym_DW_repeat1,
  [aux_sym_array_repeat1] = aux_sym_array_repeat1,
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
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_char] = {
    .visible = true,
    .named = true,
  },
  [sym_char_escape] = {
    .visible = true,
    .named = true,
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
  [sym_label_def] = {
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
  [sym__immediate_literal] = {
    .visible = false,
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
  [13] = {.index = 16, .length = 3},
  [14] = {.index = 19, .length = 4},
  [15] = {.index = 23, .length = 4},
  [16] = {.index = 27, .length = 4},
  [17] = {.index = 31, .length = 6},
  [18] = {.index = 37, .length = 2},
  [19] = {.index = 39, .length = 2},
  [20] = {.index = 41, .length = 4},
  [21] = {.index = 45, .length = 4},
  [22] = {.index = 49, .length = 4},
  [23] = {.index = 53, .length = 3},
  [24] = {.index = 56, .length = 2},
  [25] = {.index = 58, .length = 1},
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
    {field_header, 1},
  [14] =
    {field_define_word, 1},
  [15] =
    {field_inst, 1},
  [16] =
    {field_define_word, 1, .inherited = true},
    {field_header, 1, .inherited = true},
    {field_inst, 1, .inherited = true},
  [19] =
    {field_define_word, 0, .inherited = true},
    {field_header, 0, .inherited = true},
    {field_header, 1},
    {field_inst, 0, .inherited = true},
  [23] =
    {field_define_word, 0, .inherited = true},
    {field_define_word, 1},
    {field_header, 0, .inherited = true},
    {field_inst, 0, .inherited = true},
  [27] =
    {field_define_word, 0, .inherited = true},
    {field_header, 0, .inherited = true},
    {field_inst, 0, .inherited = true},
    {field_inst, 1},
  [31] =
    {field_define_word, 0, .inherited = true},
    {field_define_word, 1, .inherited = true},
    {field_header, 0, .inherited = true},
    {field_header, 1, .inherited = true},
    {field_inst, 0, .inherited = true},
    {field_inst, 1, .inherited = true},
  [37] =
    {field_label, 0},
    {field_name, 1},
  [39] =
    {field_comparison, 1},
    {field_value, 2},
  [41] =
    {field_define_word, 1, .inherited = true},
    {field_header, 1, .inherited = true},
    {field_header, 2},
    {field_inst, 1, .inherited = true},
  [45] =
    {field_define_word, 1, .inherited = true},
    {field_define_word, 2},
    {field_header, 1, .inherited = true},
    {field_inst, 1, .inherited = true},
  [49] =
    {field_define_word, 1, .inherited = true},
    {field_header, 1, .inherited = true},
    {field_inst, 1, .inherited = true},
    {field_inst, 2},
  [53] =
    {field_label, 0},
    {field_name, 1},
    {field_operand, 2},
  [56] =
    {field_label, 0},
    {field_value, 2},
  [58] =
    {field_item, 1},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static inline bool sym__whitespace_character_set_1(int32_t c) {
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

static inline bool sym__whitespace_character_set_2(int32_t c) {
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
      if (eof) ADVANCE(34);
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '#') ADVANCE(11);
      if (lookahead == '$') ADVANCE(12);
      if (lookahead == '%') ADVANCE(29);
      if (lookahead == '\'') ADVANCE(21);
      if (lookahead == '.') ADVANCE(53);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == '0') ADVANCE(91);
      if (lookahead == '<') ADVANCE(61);
      if (lookahead == '=') ADVANCE(15);
      if (lookahead == '>') ADVANCE(63);
      if (lookahead == '@') ADVANCE(30);
      if (lookahead == 'B') ADVANCE(74);
      if (lookahead == 'D') ADVANCE(86);
      if (lookahead == 'M') ADVANCE(13);
      if (lookahead == 'P') ADVANCE(68);
      if (lookahead == 'R') ADVANCE(64);
      if (lookahead == 'S') ADVANCE(80);
      if (lookahead == '[') ADVANCE(88);
      if (lookahead == ']') ADVANCE(89);
      if (lookahead == 'm') ADVANCE(14);
      if (lookahead == 'r') ADVANCE(65);
      if (lookahead == '~') ADVANCE(22);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(37);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(10);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(94);
      if (sym__whitespace_character_set_1(lookahead)) ADVANCE(36);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '#') ADVANCE(11);
      if (lookahead == '%') ADVANCE(29);
      if (lookahead == '\'') ADVANCE(21);
      if (lookahead == '.') ADVANCE(53);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == '0') ADVANCE(91);
      if (lookahead == '<') ADVANCE(61);
      if (lookahead == '=') ADVANCE(15);
      if (lookahead == '>') ADVANCE(16);
      if (lookahead == '@') ADVANCE(30);
      if (lookahead == '[') ADVANCE(88);
      if (lookahead == ']') ADVANCE(89);
      if (lookahead == '~') ADVANCE(22);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(10);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(14);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(94);
      if (sym__whitespace_character_set_2(lookahead)) ADVANCE(36);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(90);
      if (lookahead == '\\') ADVANCE(31);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '\'') ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '\'') ADVANCE(96);
      END_STATE();
    case 4:
      if (lookahead == '\'') ADVANCE(97);
      END_STATE();
    case 5:
      if (lookahead == '*') ADVANCE(7);
      if (lookahead == '/') ADVANCE(38);
      END_STATE();
    case 6:
      if (lookahead == '*') ADVANCE(6);
      if (lookahead == '/') ADVANCE(39);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 7:
      if (lookahead == '*') ADVANCE(6);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '.') ADVANCE(53);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == '@') ADVANCE(30);
      if (lookahead == 'D') ADVANCE(86);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(37);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(27);
      if (sym__whitespace_character_set_1(lookahead)) ADVANCE(36);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 9:
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == 'R') ADVANCE(17);
      if (sym__whitespace_character_set_2(lookahead)) ADVANCE(36);
      END_STATE();
    case 10:
      if (lookahead == '0') ADVANCE(91);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(94);
      END_STATE();
    case 11:
      if (lookahead == '0') ADVANCE(99);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(100);
      END_STATE();
    case 12:
      if (lookahead == '0') ADVANCE(54);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(55);
      END_STATE();
    case 13:
      if (lookahead == '0') ADVANCE(102);
      if (lookahead == 'I') ADVANCE(78);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(101);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 14:
      if (lookahead == '0') ADVANCE(102);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(101);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 15:
      if (lookahead == '=') ADVANCE(42);
      END_STATE();
    case 16:
      if (lookahead == '=') ADVANCE(43);
      END_STATE();
    case 17:
      if (lookahead == 'A') ADVANCE(19);
      if (lookahead == 'O') ADVANCE(20);
      END_STATE();
    case 18:
      if (lookahead == 'I') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(27);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 19:
      if (lookahead == 'M') ADVANCE(48);
      END_STATE();
    case 20:
      if (lookahead == 'M') ADVANCE(50);
      END_STATE();
    case 21:
      if (lookahead == '\\') ADVANCE(24);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '\'') ADVANCE(3);
      END_STATE();
    case 22:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(26);
      END_STATE();
    case 23:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(92);
      END_STATE();
    case 24:
      if (lookahead == '\'' ||
          lookahead == '0' ||
          lookahead == '\\' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't') ADVANCE(4);
      END_STATE();
    case 25:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(93);
      END_STATE();
    case 26:
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(98);
      END_STATE();
    case 27:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(27);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 28:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(95);
      END_STATE();
    case 29:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 30:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 31:
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(2);
      END_STATE();
    case 32:
      if (eof) ADVANCE(34);
      if (lookahead == '#') ADVANCE(11);
      if (lookahead == '$') ADVANCE(12);
      if (lookahead == '%') ADVANCE(29);
      if (lookahead == '\'') ADVANCE(21);
      if (lookahead == '.') ADVANCE(53);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == '0') ADVANCE(91);
      if (lookahead == '<') ADVANCE(60);
      if (lookahead == '@') ADVANCE(30);
      if (lookahead == 'P') ADVANCE(68);
      if (lookahead == 'S') ADVANCE(80);
      if (lookahead == '~') ADVANCE(22);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(37);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(10);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(14);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(65);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(94);
      if (sym__whitespace_character_set_1(lookahead)) ADVANCE(36);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 33:
      if (eof) ADVANCE(34);
      if (lookahead == '.') ADVANCE(53);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == '>') ADVANCE(62);
      if (lookahead == '@') ADVANCE(30);
      if (lookahead == 'B') ADVANCE(74);
      if (lookahead == 'D') ADVANCE(86);
      if (lookahead == 'M') ADVANCE(18);
      if (lookahead == 'R') ADVANCE(85);
      if (lookahead == 'm') ADVANCE(27);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(37);
      if (sym__whitespace_character_set_1(lookahead)) ADVANCE(36);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_macro);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym__whitespace);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym__newline);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(38);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_BITS);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_MINREG);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_MINHEAP);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_MINSTACK);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_RUN);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_RAM);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_RAM);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_ROM);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_ROM);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_DW);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_register);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == '0') ADVANCE(55);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(55);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == '0') ADVANCE(56);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(56);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_register);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_program_counter);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_stack_pointer);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(41);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(43);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '0') ADVANCE(57);
      if (lookahead == 'A') ADVANCE(76);
      if (lookahead == 'O') ADVANCE(77);
      if (lookahead == 'U') ADVANCE(79);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(56);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '0') ADVANCE(57);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(56);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'G') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'H') ADVANCE(70);
      if (lookahead == 'R') ADVANCE(71);
      if (lookahead == 'S') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'K') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'W') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'b') ADVANCE(23);
      if (lookahead == 'o') ADVANCE(25);
      if (lookahead == 'x') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(94);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(92);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(93);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(94);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(95);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_char);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_char_escape);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_relative);
      if (lookahead == '0') ADVANCE(98);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(98);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_memory);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_memory);
      if (lookahead == '0') ADVANCE(100);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(100);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_memory);
      if (lookahead == '0') ADVANCE(101);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(101);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_memory);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(27);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_port);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 33},
  [2] = {.lex_state = 33},
  [3] = {.lex_state = 33},
  [4] = {.lex_state = 33},
  [5] = {.lex_state = 33},
  [6] = {.lex_state = 32},
  [7] = {.lex_state = 32},
  [8] = {.lex_state = 32},
  [9] = {.lex_state = 32},
  [10] = {.lex_state = 32},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 32},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 32},
  [18] = {.lex_state = 32},
  [19] = {.lex_state = 32},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 32},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 1},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 33},
  [27] = {.lex_state = 33},
  [28] = {.lex_state = 33},
  [29] = {.lex_state = 33},
  [30] = {.lex_state = 1},
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 1},
  [33] = {.lex_state = 33},
  [34] = {.lex_state = 1},
  [35] = {.lex_state = 8},
  [36] = {.lex_state = 8},
  [37] = {.lex_state = 8},
  [38] = {.lex_state = 8},
  [39] = {.lex_state = 8},
  [40] = {.lex_state = 8},
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
  [67] = {.lex_state = 9},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 1},
  [71] = {.lex_state = 1},
  [72] = {.lex_state = 33},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 1},
  [75] = {.lex_state = 33},
  [76] = {.lex_state = 1},
  [77] = {(TSStateId)(-1)},
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
    [sym_string] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_char] = ACTIONS(1),
    [sym_char_escape] = ACTIONS(1),
    [sym_relative] = ACTIONS(1),
    [sym_memory] = ACTIONS(1),
    [sym_port] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(73),
    [sym_comment] = STATE(1),
    [sym__header] = STATE(42),
    [sym_BITS] = STATE(53),
    [sym_MINREG] = STATE(53),
    [sym_MINHEAP] = STATE(53),
    [sym_MINSTACK] = STATE(53),
    [sym_RUN] = STATE(53),
    [sym_DW] = STATE(41),
    [sym_label_def] = STATE(40),
    [sym_label] = STATE(60),
    [sym_instruction] = STATE(43),
    [aux_sym_source_file_repeat1] = STATE(2),
    [aux_sym_source_file_repeat2] = STATE(4),
    [aux_sym_DW_repeat1] = STATE(36),
    [ts_builtin_sym_end] = ACTIONS(9),
    [sym_macro] = ACTIONS(7),
    [sym__whitespace] = ACTIONS(3),
    [sym__newline] = ACTIONS(11),
    [aux_sym_comment_token1] = ACTIONS(5),
    [aux_sym_comment_token2] = ACTIONS(7),
    [anon_sym_BITS] = ACTIONS(13),
    [anon_sym_MINREG] = ACTIONS(15),
    [anon_sym_MINHEAP] = ACTIONS(17),
    [anon_sym_MINSTACK] = ACTIONS(19),
    [anon_sym_RUN] = ACTIONS(21),
    [anon_sym_DW] = ACTIONS(23),
    [anon_sym_DOT] = ACTIONS(25),
    [sym_identifier] = ACTIONS(27),
  },
  [2] = {
    [sym_comment] = STATE(2),
    [sym__header] = STATE(44),
    [sym_BITS] = STATE(53),
    [sym_MINREG] = STATE(53),
    [sym_MINHEAP] = STATE(53),
    [sym_MINSTACK] = STATE(53),
    [sym_RUN] = STATE(53),
    [sym_DW] = STATE(45),
    [sym_label_def] = STATE(40),
    [sym_label] = STATE(60),
    [sym_instruction] = STATE(46),
    [aux_sym_source_file_repeat1] = STATE(27),
    [aux_sym_source_file_repeat2] = STATE(5),
    [aux_sym_DW_repeat1] = STATE(36),
    [ts_builtin_sym_end] = ACTIONS(29),
    [sym_macro] = ACTIONS(7),
    [sym__whitespace] = ACTIONS(3),
    [sym__newline] = ACTIONS(11),
    [aux_sym_comment_token1] = ACTIONS(5),
    [aux_sym_comment_token2] = ACTIONS(7),
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
  [0] = 21,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    ACTIONS(33), 1,
      sym_macro,
    ACTIONS(36), 1,
      anon_sym_BITS,
    ACTIONS(39), 1,
      anon_sym_MINREG,
    ACTIONS(42), 1,
      anon_sym_MINHEAP,
    ACTIONS(45), 1,
      anon_sym_MINSTACK,
    ACTIONS(48), 1,
      anon_sym_RUN,
    ACTIONS(51), 1,
      anon_sym_DW,
    ACTIONS(54), 1,
      anon_sym_DOT,
    ACTIONS(57), 1,
      sym_identifier,
    STATE(36), 1,
      aux_sym_DW_repeat1,
    STATE(40), 1,
      sym_label_def,
    STATE(60), 1,
      sym_label,
    STATE(62), 1,
      sym__header,
    STATE(63), 1,
      sym_DW,
    STATE(64), 1,
      sym_instruction,
    STATE(3), 2,
      sym_comment,
      aux_sym_source_file_repeat2,
    STATE(53), 5,
      sym_BITS,
      sym_MINREG,
      sym_MINHEAP,
      sym_MINSTACK,
      sym_RUN,
  [69] = 21,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
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
    ACTIONS(60), 1,
      ts_builtin_sym_end,
    STATE(3), 1,
      aux_sym_source_file_repeat2,
    STATE(4), 1,
      sym_comment,
    STATE(36), 1,
      aux_sym_DW_repeat1,
    STATE(40), 1,
      sym_label_def,
    STATE(48), 1,
      sym__header,
    STATE(49), 1,
      sym_DW,
    STATE(50), 1,
      sym_instruction,
    STATE(60), 1,
      sym_label,
    ACTIONS(7), 2,
      sym_macro,
      aux_sym_comment_token2,
    STATE(53), 5,
      sym_BITS,
      sym_MINREG,
      sym_MINHEAP,
      sym_MINSTACK,
      sym_RUN,
  [138] = 21,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
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
    ACTIONS(62), 1,
      ts_builtin_sym_end,
    STATE(3), 1,
      aux_sym_source_file_repeat2,
    STATE(5), 1,
      sym_comment,
    STATE(36), 1,
      aux_sym_DW_repeat1,
    STATE(40), 1,
      sym_label_def,
    STATE(47), 1,
      sym_instruction,
    STATE(51), 1,
      sym_DW,
    STATE(52), 1,
      sym__header,
    STATE(60), 1,
      sym_label,
    ACTIONS(7), 2,
      sym_macro,
      aux_sym_comment_token2,
    STATE(53), 5,
      sym_BITS,
      sym_MINREG,
      sym_MINHEAP,
      sym_MINSTACK,
      sym_RUN,
  [207] = 14,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(25), 1,
      anon_sym_DOT,
    ACTIONS(70), 1,
      anon_sym_LT,
    STATE(6), 1,
      sym_comment,
    STATE(7), 1,
      aux_sym_instruction_repeat1,
    STATE(19), 1,
      sym__immediate_literal,
    STATE(21), 1,
      sym__operand,
    ACTIONS(64), 2,
      ts_builtin_sym_end,
      sym__newline,
    ACTIONS(72), 2,
      sym_identifier,
      sym_memory,
    STATE(18), 2,
      sym_label,
      sym_placeholder,
    ACTIONS(68), 3,
      sym_register,
      sym_program_counter,
      sym_stack_pointer,
    ACTIONS(66), 6,
      sym_macro,
      sym_number,
      sym_char,
      sym_char_escape,
      sym_relative,
      sym_port,
  [260] = 14,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(25), 1,
      anon_sym_DOT,
    ACTIONS(70), 1,
      anon_sym_LT,
    STATE(7), 1,
      sym_comment,
    STATE(9), 1,
      aux_sym_instruction_repeat1,
    STATE(19), 1,
      sym__immediate_literal,
    STATE(21), 1,
      sym__operand,
    ACTIONS(72), 2,
      sym_identifier,
      sym_memory,
    ACTIONS(74), 2,
      ts_builtin_sym_end,
      sym__newline,
    STATE(18), 2,
      sym_label,
      sym_placeholder,
    ACTIONS(68), 3,
      sym_register,
      sym_program_counter,
      sym_stack_pointer,
    ACTIONS(66), 6,
      sym_macro,
      sym_number,
      sym_char,
      sym_char_escape,
      sym_relative,
      sym_port,
  [313] = 14,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(25), 1,
      anon_sym_DOT,
    ACTIONS(70), 1,
      anon_sym_LT,
    STATE(8), 1,
      sym_comment,
    STATE(9), 1,
      aux_sym_instruction_repeat1,
    STATE(19), 1,
      sym__immediate_literal,
    STATE(21), 1,
      sym__operand,
    ACTIONS(72), 2,
      sym_identifier,
      sym_memory,
    ACTIONS(76), 2,
      ts_builtin_sym_end,
      sym__newline,
    STATE(18), 2,
      sym_label,
      sym_placeholder,
    ACTIONS(68), 3,
      sym_register,
      sym_program_counter,
      sym_stack_pointer,
    ACTIONS(66), 6,
      sym_macro,
      sym_number,
      sym_char,
      sym_char_escape,
      sym_relative,
      sym_port,
  [366] = 13,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(83), 1,
      anon_sym_DOT,
    ACTIONS(89), 1,
      anon_sym_LT,
    STATE(19), 1,
      sym__immediate_literal,
    STATE(21), 1,
      sym__operand,
    ACTIONS(78), 2,
      ts_builtin_sym_end,
      sym__newline,
    ACTIONS(92), 2,
      sym_identifier,
      sym_memory,
    STATE(9), 2,
      sym_comment,
      aux_sym_instruction_repeat1,
    STATE(18), 2,
      sym_label,
      sym_placeholder,
    ACTIONS(86), 3,
      sym_register,
      sym_program_counter,
      sym_stack_pointer,
    ACTIONS(80), 6,
      sym_macro,
      sym_number,
      sym_char,
      sym_char_escape,
      sym_relative,
      sym_port,
  [417] = 14,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(25), 1,
      anon_sym_DOT,
    ACTIONS(70), 1,
      anon_sym_LT,
    STATE(8), 1,
      aux_sym_instruction_repeat1,
    STATE(10), 1,
      sym_comment,
    STATE(19), 1,
      sym__immediate_literal,
    STATE(21), 1,
      sym__operand,
    ACTIONS(72), 2,
      sym_identifier,
      sym_memory,
    ACTIONS(95), 2,
      ts_builtin_sym_end,
      sym__newline,
    STATE(18), 2,
      sym_label,
      sym_placeholder,
    ACTIONS(68), 3,
      sym_register,
      sym_program_counter,
      sym_stack_pointer,
    ACTIONS(66), 6,
      sym_macro,
      sym_number,
      sym_char,
      sym_char_escape,
      sym_relative,
      sym_port,
  [470] = 13,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(25), 1,
      anon_sym_DOT,
    ACTIONS(70), 1,
      anon_sym_LT,
    ACTIONS(72), 1,
      sym_memory,
    ACTIONS(97), 1,
      anon_sym_LBRACK,
    ACTIONS(99), 1,
      sym_string,
    STATE(11), 1,
      sym_comment,
    STATE(57), 1,
      sym__dw_literal,
    STATE(18), 2,
      sym_label,
      sym_placeholder,
    STATE(69), 2,
      sym_array,
      sym__immediate_literal,
    ACTIONS(66), 7,
      sym_macro,
      sym_identifier,
      sym_number,
      sym_char,
      sym_char_escape,
      sym_relative,
      sym_port,
  [518] = 13,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(25), 1,
      anon_sym_DOT,
    ACTIONS(70), 1,
      anon_sym_LT,
    ACTIONS(72), 1,
      sym_memory,
    ACTIONS(97), 1,
      anon_sym_LBRACK,
    ACTIONS(99), 1,
      sym_string,
    STATE(12), 1,
      sym_comment,
    STATE(66), 1,
      sym__dw_literal,
    STATE(18), 2,
      sym_label,
      sym_placeholder,
    STATE(69), 2,
      sym_array,
      sym__immediate_literal,
    ACTIONS(66), 7,
      sym_macro,
      sym_identifier,
      sym_number,
      sym_char,
      sym_char_escape,
      sym_relative,
      sym_port,
  [566] = 11,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(25), 1,
      anon_sym_DOT,
    ACTIONS(72), 1,
      sym_memory,
    ACTIONS(103), 1,
      anon_sym_LT,
    STATE(13), 1,
      sym_comment,
    STATE(58), 1,
      sym__immediate_literal,
    STATE(18), 2,
      sym_label,
      sym_placeholder,
    ACTIONS(101), 3,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
    ACTIONS(66), 7,
      sym_macro,
      sym_identifier,
      sym_number,
      sym_char,
      sym_char_escape,
      sym_relative,
      sym_port,
  [609] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(14), 1,
      sym_comment,
    ACTIONS(107), 5,
      sym_register,
      sym_program_counter,
      sym_stack_pointer,
      sym_identifier,
      sym_memory,
    ACTIONS(105), 10,
      ts_builtin_sym_end,
      sym_macro,
      sym__newline,
      anon_sym_DOT,
      anon_sym_LT,
      sym_number,
      sym_char,
      sym_char_escape,
      sym_relative,
      sym_port,
  [641] = 12,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(111), 1,
      anon_sym_DOT,
    ACTIONS(113), 1,
      anon_sym_LT,
    ACTIONS(115), 1,
      anon_sym_RBRACK,
    ACTIONS(117), 1,
      sym_memory,
    STATE(15), 1,
      sym_comment,
    STATE(16), 1,
      aux_sym_array_repeat1,
    STATE(34), 1,
      sym__immediate_literal,
    STATE(32), 2,
      sym_label,
      sym_placeholder,
    ACTIONS(109), 7,
      sym_macro,
      sym_identifier,
      sym_number,
      sym_char,
      sym_char_escape,
      sym_relative,
      sym_port,
  [685] = 11,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(122), 1,
      anon_sym_DOT,
    ACTIONS(125), 1,
      anon_sym_LT,
    ACTIONS(128), 1,
      anon_sym_RBRACK,
    ACTIONS(130), 1,
      sym_memory,
    STATE(34), 1,
      sym__immediate_literal,
    STATE(16), 2,
      sym_comment,
      aux_sym_array_repeat1,
    STATE(32), 2,
      sym_label,
      sym_placeholder,
    ACTIONS(119), 7,
      sym_macro,
      sym_identifier,
      sym_number,
      sym_char,
      sym_char_escape,
      sym_relative,
      sym_port,
  [727] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(17), 1,
      sym_comment,
    ACTIONS(135), 5,
      sym_register,
      sym_program_counter,
      sym_stack_pointer,
      sym_identifier,
      sym_memory,
    ACTIONS(133), 10,
      ts_builtin_sym_end,
      sym_macro,
      sym__newline,
      anon_sym_DOT,
      anon_sym_LT,
      sym_number,
      sym_char,
      sym_char_escape,
      sym_relative,
      sym_port,
  [759] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(18), 1,
      sym_comment,
    ACTIONS(139), 5,
      sym_register,
      sym_program_counter,
      sym_stack_pointer,
      sym_identifier,
      sym_memory,
    ACTIONS(137), 10,
      ts_builtin_sym_end,
      sym_macro,
      sym__newline,
      anon_sym_DOT,
      anon_sym_LT,
      sym_number,
      sym_char,
      sym_char_escape,
      sym_relative,
      sym_port,
  [791] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(19), 1,
      sym_comment,
    ACTIONS(143), 5,
      sym_register,
      sym_program_counter,
      sym_stack_pointer,
      sym_identifier,
      sym_memory,
    ACTIONS(141), 10,
      ts_builtin_sym_end,
      sym_macro,
      sym__newline,
      anon_sym_DOT,
      anon_sym_LT,
      sym_number,
      sym_char,
      sym_char_escape,
      sym_relative,
      sym_port,
  [823] = 12,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(111), 1,
      anon_sym_DOT,
    ACTIONS(113), 1,
      anon_sym_LT,
    ACTIONS(117), 1,
      sym_memory,
    ACTIONS(145), 1,
      anon_sym_RBRACK,
    STATE(15), 1,
      aux_sym_array_repeat1,
    STATE(20), 1,
      sym_comment,
    STATE(34), 1,
      sym__immediate_literal,
    STATE(32), 2,
      sym_label,
      sym_placeholder,
    ACTIONS(109), 7,
      sym_macro,
      sym_identifier,
      sym_number,
      sym_char,
      sym_char_escape,
      sym_relative,
      sym_port,
  [867] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(21), 1,
      sym_comment,
    ACTIONS(149), 5,
      sym_register,
      sym_program_counter,
      sym_stack_pointer,
      sym_identifier,
      sym_memory,
    ACTIONS(147), 10,
      ts_builtin_sym_end,
      sym_macro,
      sym__newline,
      anon_sym_DOT,
      anon_sym_LT,
      sym_number,
      sym_char,
      sym_char_escape,
      sym_relative,
      sym_port,
  [899] = 10,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(25), 1,
      anon_sym_DOT,
    ACTIONS(70), 1,
      anon_sym_LT,
    ACTIONS(72), 1,
      sym_memory,
    STATE(22), 1,
      sym_comment,
    STATE(61), 1,
      sym__immediate_literal,
    STATE(18), 2,
      sym_label,
      sym_placeholder,
    ACTIONS(66), 7,
      sym_macro,
      sym_identifier,
      sym_number,
      sym_char,
      sym_char_escape,
      sym_relative,
      sym_port,
  [937] = 10,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(25), 1,
      anon_sym_DOT,
    ACTIONS(70), 1,
      anon_sym_LT,
    ACTIONS(72), 1,
      sym_memory,
    STATE(23), 1,
      sym_comment,
    STATE(54), 1,
      sym__immediate_literal,
    STATE(18), 2,
      sym_label,
      sym_placeholder,
    ACTIONS(66), 7,
      sym_macro,
      sym_identifier,
      sym_number,
      sym_char,
      sym_char_escape,
      sym_relative,
      sym_port,
  [975] = 10,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(25), 1,
      anon_sym_DOT,
    ACTIONS(70), 1,
      anon_sym_LT,
    ACTIONS(72), 1,
      sym_memory,
    STATE(24), 1,
      sym_comment,
    STATE(59), 1,
      sym__immediate_literal,
    STATE(18), 2,
      sym_label,
      sym_placeholder,
    ACTIONS(66), 7,
      sym_macro,
      sym_identifier,
      sym_number,
      sym_char,
      sym_char_escape,
      sym_relative,
      sym_port,
  [1013] = 10,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(25), 1,
      anon_sym_DOT,
    ACTIONS(70), 1,
      anon_sym_LT,
    ACTIONS(72), 1,
      sym_memory,
    STATE(25), 1,
      sym_comment,
    STATE(55), 1,
      sym__immediate_literal,
    STATE(18), 2,
      sym_label,
      sym_placeholder,
    ACTIONS(66), 7,
      sym_macro,
      sym_identifier,
      sym_number,
      sym_char,
      sym_char_escape,
      sym_relative,
      sym_port,
  [1051] = 8,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(11), 1,
      sym__newline,
    STATE(26), 1,
      sym_comment,
    STATE(27), 1,
      aux_sym_source_file_repeat1,
    ACTIONS(151), 3,
      ts_builtin_sym_end,
      sym_macro,
      anon_sym_DOT,
    ACTIONS(153), 7,
      anon_sym_BITS,
      anon_sym_MINREG,
      anon_sym_MINHEAP,
      anon_sym_MINSTACK,
      anon_sym_RUN,
      anon_sym_DW,
      sym_identifier,
  [1084] = 7,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(157), 1,
      sym__newline,
    STATE(27), 2,
      sym_comment,
      aux_sym_source_file_repeat1,
    ACTIONS(155), 3,
      ts_builtin_sym_end,
      sym_macro,
      anon_sym_DOT,
    ACTIONS(160), 7,
      anon_sym_BITS,
      anon_sym_MINREG,
      anon_sym_MINHEAP,
      anon_sym_MINSTACK,
      anon_sym_RUN,
      anon_sym_DW,
      sym_identifier,
  [1115] = 8,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(11), 1,
      sym__newline,
    STATE(27), 1,
      aux_sym_source_file_repeat1,
    STATE(28), 1,
      sym_comment,
    ACTIONS(162), 3,
      ts_builtin_sym_end,
      sym_macro,
      anon_sym_DOT,
    ACTIONS(164), 7,
      anon_sym_BITS,
      anon_sym_MINREG,
      anon_sym_MINHEAP,
      anon_sym_MINSTACK,
      anon_sym_RUN,
      anon_sym_DW,
      sym_identifier,
  [1148] = 8,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(11), 1,
      sym__newline,
    STATE(27), 1,
      aux_sym_source_file_repeat1,
    STATE(29), 1,
      sym_comment,
    ACTIONS(166), 3,
      ts_builtin_sym_end,
      sym_macro,
      anon_sym_DOT,
    ACTIONS(168), 7,
      anon_sym_BITS,
      anon_sym_MINREG,
      anon_sym_MINHEAP,
      anon_sym_MINSTACK,
      anon_sym_RUN,
      anon_sym_DW,
      sym_identifier,
  [1181] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(135), 1,
      sym_memory,
    STATE(30), 1,
      sym_comment,
    ACTIONS(133), 10,
      sym_macro,
      anon_sym_DOT,
      anon_sym_LT,
      sym_identifier,
      anon_sym_RBRACK,
      sym_number,
      sym_char,
      sym_char_escape,
      sym_relative,
      sym_port,
  [1209] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(107), 1,
      sym_memory,
    STATE(31), 1,
      sym_comment,
    ACTIONS(105), 10,
      sym_macro,
      anon_sym_DOT,
      anon_sym_LT,
      sym_identifier,
      anon_sym_RBRACK,
      sym_number,
      sym_char,
      sym_char_escape,
      sym_relative,
      sym_port,
  [1237] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(139), 1,
      sym_memory,
    STATE(32), 1,
      sym_comment,
    ACTIONS(137), 10,
      sym_macro,
      anon_sym_DOT,
      anon_sym_LT,
      sym_identifier,
      anon_sym_RBRACK,
      sym_number,
      sym_char,
      sym_char_escape,
      sym_relative,
      sym_port,
  [1265] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(33), 1,
      sym_comment,
    ACTIONS(170), 4,
      ts_builtin_sym_end,
      sym_macro,
      sym__newline,
      anon_sym_DOT,
    ACTIONS(172), 7,
      anon_sym_BITS,
      anon_sym_MINREG,
      anon_sym_MINHEAP,
      anon_sym_MINSTACK,
      anon_sym_RUN,
      anon_sym_DW,
      sym_identifier,
  [1293] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(176), 1,
      sym_memory,
    STATE(34), 1,
      sym_comment,
    ACTIONS(174), 10,
      sym_macro,
      anon_sym_DOT,
      anon_sym_LT,
      sym_identifier,
      anon_sym_RBRACK,
      sym_number,
      sym_char,
      sym_char_escape,
      sym_relative,
      sym_port,
  [1321] = 9,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(178), 1,
      sym_macro,
    ACTIONS(182), 1,
      anon_sym_DOT,
    STATE(40), 1,
      sym_label_def,
    STATE(60), 1,
      sym_label,
    ACTIONS(180), 2,
      anon_sym_DW,
      sym_identifier,
    STATE(35), 2,
      sym_comment,
      aux_sym_DW_repeat1,
  [1351] = 11,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(25), 1,
      anon_sym_DOT,
    ACTIONS(185), 1,
      sym_macro,
    ACTIONS(187), 1,
      anon_sym_DW,
    ACTIONS(189), 1,
      sym_identifier,
    STATE(35), 1,
      aux_sym_DW_repeat1,
    STATE(36), 1,
      sym_comment,
    STATE(40), 1,
      sym_label_def,
    STATE(60), 1,
      sym_label,
  [1385] = 7,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(191), 1,
      sym__newline,
    ACTIONS(155), 2,
      sym_macro,
      anon_sym_DOT,
    ACTIONS(160), 2,
      anon_sym_DW,
      sym_identifier,
    STATE(37), 2,
      sym_comment,
      aux_sym_source_file_repeat1,
  [1410] = 8,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(196), 1,
      sym__newline,
    STATE(37), 1,
      aux_sym_source_file_repeat1,
    STATE(38), 1,
      sym_comment,
    ACTIONS(194), 2,
      sym_macro,
      anon_sym_DOT,
    ACTIONS(198), 2,
      anon_sym_DW,
      sym_identifier,
  [1437] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(39), 1,
      sym_comment,
    ACTIONS(172), 2,
      anon_sym_DW,
      sym_identifier,
    ACTIONS(170), 3,
      sym_macro,
      sym__newline,
      anon_sym_DOT,
  [1459] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(40), 1,
      sym_comment,
    ACTIONS(200), 2,
      sym_macro,
      anon_sym_DOT,
    ACTIONS(202), 2,
      anon_sym_DW,
      sym_identifier,
  [1480] = 7,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(11), 1,
      sym__newline,
    ACTIONS(204), 1,
      ts_builtin_sym_end,
    STATE(26), 1,
      aux_sym_source_file_repeat1,
    STATE(41), 1,
      sym_comment,
  [1502] = 7,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(11), 1,
      sym__newline,
    ACTIONS(206), 1,
      ts_builtin_sym_end,
    STATE(28), 1,
      aux_sym_source_file_repeat1,
    STATE(42), 1,
      sym_comment,
  [1524] = 7,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(11), 1,
      sym__newline,
    ACTIONS(208), 1,
      ts_builtin_sym_end,
    STATE(29), 1,
      aux_sym_source_file_repeat1,
    STATE(43), 1,
      sym_comment,
  [1546] = 7,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(11), 1,
      sym__newline,
    ACTIONS(210), 1,
      ts_builtin_sym_end,
    STATE(28), 1,
      aux_sym_source_file_repeat1,
    STATE(44), 1,
      sym_comment,
  [1568] = 7,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(11), 1,
      sym__newline,
    ACTIONS(212), 1,
      ts_builtin_sym_end,
    STATE(26), 1,
      aux_sym_source_file_repeat1,
    STATE(45), 1,
      sym_comment,
  [1590] = 7,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(11), 1,
      sym__newline,
    ACTIONS(214), 1,
      ts_builtin_sym_end,
    STATE(29), 1,
      aux_sym_source_file_repeat1,
    STATE(46), 1,
      sym_comment,
  [1612] = 7,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(11), 1,
      sym__newline,
    ACTIONS(216), 1,
      ts_builtin_sym_end,
    STATE(29), 1,
      aux_sym_source_file_repeat1,
    STATE(47), 1,
      sym_comment,
  [1634] = 7,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(11), 1,
      sym__newline,
    ACTIONS(218), 1,
      ts_builtin_sym_end,
    STATE(28), 1,
      aux_sym_source_file_repeat1,
    STATE(48), 1,
      sym_comment,
  [1656] = 7,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(11), 1,
      sym__newline,
    ACTIONS(220), 1,
      ts_builtin_sym_end,
    STATE(26), 1,
      aux_sym_source_file_repeat1,
    STATE(49), 1,
      sym_comment,
  [1678] = 7,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(11), 1,
      sym__newline,
    ACTIONS(222), 1,
      ts_builtin_sym_end,
    STATE(29), 1,
      aux_sym_source_file_repeat1,
    STATE(50), 1,
      sym_comment,
  [1700] = 7,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(11), 1,
      sym__newline,
    ACTIONS(224), 1,
      ts_builtin_sym_end,
    STATE(26), 1,
      aux_sym_source_file_repeat1,
    STATE(51), 1,
      sym_comment,
  [1722] = 7,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(11), 1,
      sym__newline,
    ACTIONS(226), 1,
      ts_builtin_sym_end,
    STATE(28), 1,
      aux_sym_source_file_repeat1,
    STATE(52), 1,
      sym_comment,
  [1744] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(53), 1,
      sym_comment,
    ACTIONS(228), 2,
      ts_builtin_sym_end,
      sym__newline,
  [1761] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(54), 1,
      sym_comment,
    ACTIONS(230), 2,
      ts_builtin_sym_end,
      sym__newline,
  [1778] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(55), 1,
      sym_comment,
    ACTIONS(232), 2,
      ts_builtin_sym_end,
      sym__newline,
  [1795] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(56), 1,
      sym_comment,
    ACTIONS(234), 2,
      ts_builtin_sym_end,
      sym__newline,
  [1812] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(57), 1,
      sym_comment,
    ACTIONS(236), 2,
      ts_builtin_sym_end,
      sym__newline,
  [1829] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(58), 1,
      sym_comment,
    ACTIONS(238), 2,
      ts_builtin_sym_end,
      sym__newline,
  [1846] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(59), 1,
      sym_comment,
    ACTIONS(240), 2,
      ts_builtin_sym_end,
      sym__newline,
  [1863] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(196), 1,
      sym__newline,
    STATE(38), 1,
      aux_sym_source_file_repeat1,
    STATE(60), 1,
      sym_comment,
  [1882] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(61), 1,
      sym_comment,
    ACTIONS(242), 2,
      ts_builtin_sym_end,
      sym__newline,
  [1899] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(11), 1,
      sym__newline,
    STATE(28), 1,
      aux_sym_source_file_repeat1,
    STATE(62), 1,
      sym_comment,
  [1918] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(11), 1,
      sym__newline,
    STATE(26), 1,
      aux_sym_source_file_repeat1,
    STATE(63), 1,
      sym_comment,
  [1937] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(11), 1,
      sym__newline,
    STATE(29), 1,
      aux_sym_source_file_repeat1,
    STATE(64), 1,
      sym_comment,
  [1956] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(65), 1,
      sym_comment,
    ACTIONS(244), 2,
      ts_builtin_sym_end,
      sym__newline,
  [1973] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(66), 1,
      sym_comment,
    ACTIONS(246), 2,
      ts_builtin_sym_end,
      sym__newline,
  [1990] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(67), 1,
      sym_comment,
    ACTIONS(248), 2,
      anon_sym_RAM,
      anon_sym_ROM,
  [2007] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(68), 1,
      sym_comment,
    ACTIONS(250), 2,
      ts_builtin_sym_end,
      sym__newline,
  [2024] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(69), 1,
      sym_comment,
    ACTIONS(252), 2,
      ts_builtin_sym_end,
      sym__newline,
  [2041] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(254), 1,
      sym_identifier,
    STATE(70), 1,
      sym_comment,
  [2057] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(256), 1,
      sym_identifier,
    STATE(71), 1,
      sym_comment,
  [2073] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(258), 1,
      anon_sym_GT,
    STATE(72), 1,
      sym_comment,
  [2089] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(260), 1,
      ts_builtin_sym_end,
    STATE(73), 1,
      sym_comment,
  [2105] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(262), 1,
      sym_identifier,
    STATE(74), 1,
      sym_comment,
  [2121] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(264), 1,
      anon_sym_GT,
    STATE(75), 1,
      sym_comment,
  [2137] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(266), 1,
      sym_identifier,
    STATE(76), 1,
      sym_comment,
  [2153] = 1,
    ACTIONS(268), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(3)] = 0,
  [SMALL_STATE(4)] = 69,
  [SMALL_STATE(5)] = 138,
  [SMALL_STATE(6)] = 207,
  [SMALL_STATE(7)] = 260,
  [SMALL_STATE(8)] = 313,
  [SMALL_STATE(9)] = 366,
  [SMALL_STATE(10)] = 417,
  [SMALL_STATE(11)] = 470,
  [SMALL_STATE(12)] = 518,
  [SMALL_STATE(13)] = 566,
  [SMALL_STATE(14)] = 609,
  [SMALL_STATE(15)] = 641,
  [SMALL_STATE(16)] = 685,
  [SMALL_STATE(17)] = 727,
  [SMALL_STATE(18)] = 759,
  [SMALL_STATE(19)] = 791,
  [SMALL_STATE(20)] = 823,
  [SMALL_STATE(21)] = 867,
  [SMALL_STATE(22)] = 899,
  [SMALL_STATE(23)] = 937,
  [SMALL_STATE(24)] = 975,
  [SMALL_STATE(25)] = 1013,
  [SMALL_STATE(26)] = 1051,
  [SMALL_STATE(27)] = 1084,
  [SMALL_STATE(28)] = 1115,
  [SMALL_STATE(29)] = 1148,
  [SMALL_STATE(30)] = 1181,
  [SMALL_STATE(31)] = 1209,
  [SMALL_STATE(32)] = 1237,
  [SMALL_STATE(33)] = 1265,
  [SMALL_STATE(34)] = 1293,
  [SMALL_STATE(35)] = 1321,
  [SMALL_STATE(36)] = 1351,
  [SMALL_STATE(37)] = 1385,
  [SMALL_STATE(38)] = 1410,
  [SMALL_STATE(39)] = 1437,
  [SMALL_STATE(40)] = 1459,
  [SMALL_STATE(41)] = 1480,
  [SMALL_STATE(42)] = 1502,
  [SMALL_STATE(43)] = 1524,
  [SMALL_STATE(44)] = 1546,
  [SMALL_STATE(45)] = 1568,
  [SMALL_STATE(46)] = 1590,
  [SMALL_STATE(47)] = 1612,
  [SMALL_STATE(48)] = 1634,
  [SMALL_STATE(49)] = 1656,
  [SMALL_STATE(50)] = 1678,
  [SMALL_STATE(51)] = 1700,
  [SMALL_STATE(52)] = 1722,
  [SMALL_STATE(53)] = 1744,
  [SMALL_STATE(54)] = 1761,
  [SMALL_STATE(55)] = 1778,
  [SMALL_STATE(56)] = 1795,
  [SMALL_STATE(57)] = 1812,
  [SMALL_STATE(58)] = 1829,
  [SMALL_STATE(59)] = 1846,
  [SMALL_STATE(60)] = 1863,
  [SMALL_STATE(61)] = 1882,
  [SMALL_STATE(62)] = 1899,
  [SMALL_STATE(63)] = 1918,
  [SMALL_STATE(64)] = 1937,
  [SMALL_STATE(65)] = 1956,
  [SMALL_STATE(66)] = 1973,
  [SMALL_STATE(67)] = 1990,
  [SMALL_STATE(68)] = 2007,
  [SMALL_STATE(69)] = 2024,
  [SMALL_STATE(70)] = 2041,
  [SMALL_STATE(71)] = 2057,
  [SMALL_STATE(72)] = 2073,
  [SMALL_STATE(73)] = 2089,
  [SMALL_STATE(74)] = 2105,
  [SMALL_STATE(75)] = 2121,
  [SMALL_STATE(76)] = 2137,
  [SMALL_STATE(77)] = 2153,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2, .production_id = 17),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2, .production_id = 17), SHIFT_REPEAT(6),
  [36] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2, .production_id = 17), SHIFT_REPEAT(13),
  [39] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2, .production_id = 17), SHIFT_REPEAT(24),
  [42] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2, .production_id = 17), SHIFT_REPEAT(23),
  [45] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2, .production_id = 17), SHIFT_REPEAT(22),
  [48] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2, .production_id = 17), SHIFT_REPEAT(67),
  [51] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2, .production_id = 17), SHIFT_REPEAT(11),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2, .production_id = 17), SHIFT_REPEAT(70),
  [57] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2, .production_id = 17), SHIFT_REPEAT(6),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, .production_id = 5),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, .production_id = 13),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 1, .production_id = 1),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [68] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [72] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 2, .production_id = 6),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 3, .production_id = 23),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_instruction_repeat1, 2),
  [80] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_instruction_repeat1, 2), SHIFT_REPEAT(18),
  [83] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_instruction_repeat1, 2), SHIFT_REPEAT(70),
  [86] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_instruction_repeat1, 2), SHIFT_REPEAT(19),
  [89] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_instruction_repeat1, 2), SHIFT_REPEAT(71),
  [92] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_instruction_repeat1, 2), SHIFT_REPEAT(18),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 2, .production_id = 18),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 2, .production_id = 9),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label, 2, .production_id = 9),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [119] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(32),
  [122] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(74),
  [125] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(76),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2),
  [130] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(32),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_placeholder, 3),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_placeholder, 3),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__immediate_literal, 1),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__immediate_literal, 1),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__operand, 1),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__operand, 1),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_instruction_repeat1, 1),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_instruction_repeat1, 1),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2, .production_id = 3),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2, .production_id = 3),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [157] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(33),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2, .production_id = 2),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2, .production_id = 2),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2, .production_id = 4),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2, .production_id = 4),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 1),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 1),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 1),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_array_repeat1, 1),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_DW_repeat1, 2),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_DW_repeat1, 2),
  [182] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_DW_repeat1, 2), SHIFT_REPEAT(70),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [191] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(39),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label_def, 2),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [198] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label_def, 2),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_DW_repeat1, 1),
  [202] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_DW_repeat1, 1),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, .production_id = 3),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, .production_id = 2),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, .production_id = 4),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, .production_id = 10),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, .production_id = 11),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, .production_id = 12),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 3, .production_id = 22),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, .production_id = 14),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, .production_id = 15),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, .production_id = 16),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 3, .production_id = 21),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 3, .production_id = 20),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__header, 1),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_MINHEAP, 2, .production_id = 7),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_BITS, 3, .production_id = 19),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 2),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_DW, 2, .production_id = 7),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_BITS, 2, .production_id = 7),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_MINREG, 2, .production_id = 7),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_MINSTACK, 2, .production_id = 7),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_RUN, 2, .production_id = 8),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_DW, 3, .production_id = 24),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 3, .production_id = 25),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__dw_literal, 1),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [260] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
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
