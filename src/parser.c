#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 77
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 54
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
  sym_label = 42,
  sym__operand = 43,
  sym_placeholder = 44,
  sym__dw_literal = 45,
  sym_array = 46,
  sym__immediate_literal = 47,
  sym_instruction = 48,
  aux_sym_source_file_repeat1 = 49,
  aux_sym_source_file_repeat2 = 50,
  aux_sym_DW_repeat1 = 51,
  aux_sym_array_repeat1 = 52,
  aux_sym_instruction_repeat1 = 53,
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
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 32},
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
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 33},
  [35] = {.lex_state = 8},
  [36] = {.lex_state = 8},
  [37] = {.lex_state = 8},
  [38] = {.lex_state = 8},
  [39] = {.lex_state = 8},
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
  [66] = {.lex_state = 9},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 33},
  [70] = {.lex_state = 1},
  [71] = {.lex_state = 1},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 1},
  [74] = {.lex_state = 33},
  [75] = {.lex_state = 1},
  [76] = {(TSStateId)(-1)},
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
    [sym_source_file] = STATE(72),
    [sym_comment] = STATE(1),
    [sym__header] = STATE(42),
    [sym_BITS] = STATE(52),
    [sym_MINREG] = STATE(52),
    [sym_MINHEAP] = STATE(52),
    [sym_MINSTACK] = STATE(52),
    [sym_RUN] = STATE(52),
    [sym_DW] = STATE(51),
    [sym_label] = STATE(59),
    [sym_instruction] = STATE(46),
    [aux_sym_source_file_repeat1] = STATE(2),
    [aux_sym_source_file_repeat2] = STATE(4),
    [aux_sym_DW_repeat1] = STATE(35),
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
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 22,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(11), 1,
      sym__newline,
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
    STATE(2), 1,
      sym_comment,
    STATE(5), 1,
      aux_sym_source_file_repeat2,
    STATE(28), 1,
      aux_sym_source_file_repeat1,
    STATE(35), 1,
      aux_sym_DW_repeat1,
    STATE(43), 1,
      sym__header,
    STATE(44), 1,
      sym_DW,
    STATE(45), 1,
      sym_instruction,
    STATE(59), 1,
      sym_label,
    ACTIONS(7), 2,
      sym_macro,
      aux_sym_comment_token2,
    STATE(52), 5,
      sym_BITS,
      sym_MINREG,
      sym_MINHEAP,
      sym_MINSTACK,
      sym_RUN,
  [72] = 20,
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
    STATE(35), 1,
      aux_sym_DW_repeat1,
    STATE(59), 1,
      sym_label,
    STATE(61), 1,
      sym__header,
    STATE(62), 1,
      sym_DW,
    STATE(63), 1,
      sym_instruction,
    STATE(3), 2,
      sym_comment,
      aux_sym_source_file_repeat2,
    STATE(52), 5,
      sym_BITS,
      sym_MINREG,
      sym_MINHEAP,
      sym_MINSTACK,
      sym_RUN,
  [138] = 20,
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
    STATE(35), 1,
      aux_sym_DW_repeat1,
    STATE(47), 1,
      sym__header,
    STATE(48), 1,
      sym_DW,
    STATE(49), 1,
      sym_instruction,
    STATE(59), 1,
      sym_label,
    ACTIONS(7), 2,
      sym_macro,
      aux_sym_comment_token2,
    STATE(52), 5,
      sym_BITS,
      sym_MINREG,
      sym_MINHEAP,
      sym_MINSTACK,
      sym_RUN,
  [204] = 20,
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
    STATE(35), 1,
      aux_sym_DW_repeat1,
    STATE(40), 1,
      sym_instruction,
    STATE(41), 1,
      sym_DW,
    STATE(50), 1,
      sym__header,
    STATE(59), 1,
      sym_label,
    ACTIONS(7), 2,
      sym_macro,
      aux_sym_comment_token2,
    STATE(52), 5,
      sym_BITS,
      sym_MINREG,
      sym_MINHEAP,
      sym_MINSTACK,
      sym_RUN,
  [270] = 13,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(69), 1,
      anon_sym_DOT,
    ACTIONS(75), 1,
      anon_sym_LT,
    STATE(19), 1,
      sym__immediate_literal,
    STATE(21), 1,
      sym__operand,
    ACTIONS(64), 2,
      ts_builtin_sym_end,
      sym__newline,
    ACTIONS(78), 2,
      sym_identifier,
      sym_memory,
    STATE(6), 2,
      sym_comment,
      aux_sym_instruction_repeat1,
    STATE(18), 2,
      sym_label,
      sym_placeholder,
    ACTIONS(72), 3,
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
  [321] = 14,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(25), 1,
      anon_sym_DOT,
    ACTIONS(87), 1,
      anon_sym_LT,
    STATE(6), 1,
      aux_sym_instruction_repeat1,
    STATE(7), 1,
      sym_comment,
    STATE(19), 1,
      sym__immediate_literal,
    STATE(21), 1,
      sym__operand,
    ACTIONS(81), 2,
      ts_builtin_sym_end,
      sym__newline,
    ACTIONS(89), 2,
      sym_identifier,
      sym_memory,
    STATE(18), 2,
      sym_label,
      sym_placeholder,
    ACTIONS(85), 3,
      sym_register,
      sym_program_counter,
      sym_stack_pointer,
    ACTIONS(83), 6,
      sym_macro,
      sym_number,
      sym_char,
      sym_char_escape,
      sym_relative,
      sym_port,
  [374] = 14,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(25), 1,
      anon_sym_DOT,
    ACTIONS(87), 1,
      anon_sym_LT,
    STATE(7), 1,
      aux_sym_instruction_repeat1,
    STATE(8), 1,
      sym_comment,
    STATE(19), 1,
      sym__immediate_literal,
    STATE(21), 1,
      sym__operand,
    ACTIONS(89), 2,
      sym_identifier,
      sym_memory,
    ACTIONS(91), 2,
      ts_builtin_sym_end,
      sym__newline,
    STATE(18), 2,
      sym_label,
      sym_placeholder,
    ACTIONS(85), 3,
      sym_register,
      sym_program_counter,
      sym_stack_pointer,
    ACTIONS(83), 6,
      sym_macro,
      sym_number,
      sym_char,
      sym_char_escape,
      sym_relative,
      sym_port,
  [427] = 14,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(25), 1,
      anon_sym_DOT,
    ACTIONS(87), 1,
      anon_sym_LT,
    STATE(9), 1,
      sym_comment,
    STATE(10), 1,
      aux_sym_instruction_repeat1,
    STATE(19), 1,
      sym__immediate_literal,
    STATE(21), 1,
      sym__operand,
    ACTIONS(89), 2,
      sym_identifier,
      sym_memory,
    ACTIONS(93), 2,
      ts_builtin_sym_end,
      sym__newline,
    STATE(18), 2,
      sym_label,
      sym_placeholder,
    ACTIONS(85), 3,
      sym_register,
      sym_program_counter,
      sym_stack_pointer,
    ACTIONS(83), 6,
      sym_macro,
      sym_number,
      sym_char,
      sym_char_escape,
      sym_relative,
      sym_port,
  [480] = 14,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(25), 1,
      anon_sym_DOT,
    ACTIONS(87), 1,
      anon_sym_LT,
    STATE(6), 1,
      aux_sym_instruction_repeat1,
    STATE(10), 1,
      sym_comment,
    STATE(19), 1,
      sym__immediate_literal,
    STATE(21), 1,
      sym__operand,
    ACTIONS(89), 2,
      sym_identifier,
      sym_memory,
    ACTIONS(95), 2,
      ts_builtin_sym_end,
      sym__newline,
    STATE(18), 2,
      sym_label,
      sym_placeholder,
    ACTIONS(85), 3,
      sym_register,
      sym_program_counter,
      sym_stack_pointer,
    ACTIONS(83), 6,
      sym_macro,
      sym_number,
      sym_char,
      sym_char_escape,
      sym_relative,
      sym_port,
  [533] = 13,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(25), 1,
      anon_sym_DOT,
    ACTIONS(87), 1,
      anon_sym_LT,
    ACTIONS(89), 1,
      sym_memory,
    ACTIONS(97), 1,
      anon_sym_LBRACK,
    ACTIONS(99), 1,
      sym_string,
    STATE(11), 1,
      sym_comment,
    STATE(68), 1,
      sym__dw_literal,
    STATE(18), 2,
      sym_label,
      sym_placeholder,
    STATE(65), 2,
      sym_array,
      sym__immediate_literal,
    ACTIONS(83), 7,
      sym_macro,
      sym_identifier,
      sym_number,
      sym_char,
      sym_char_escape,
      sym_relative,
      sym_port,
  [581] = 13,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(25), 1,
      anon_sym_DOT,
    ACTIONS(87), 1,
      anon_sym_LT,
    ACTIONS(89), 1,
      sym_memory,
    ACTIONS(97), 1,
      anon_sym_LBRACK,
    ACTIONS(99), 1,
      sym_string,
    STATE(12), 1,
      sym_comment,
    STATE(53), 1,
      sym__dw_literal,
    STATE(18), 2,
      sym_label,
      sym_placeholder,
    STATE(65), 2,
      sym_array,
      sym__immediate_literal,
    ACTIONS(83), 7,
      sym_macro,
      sym_identifier,
      sym_number,
      sym_char,
      sym_char_escape,
      sym_relative,
      sym_port,
  [629] = 11,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(25), 1,
      anon_sym_DOT,
    ACTIONS(89), 1,
      sym_memory,
    ACTIONS(103), 1,
      anon_sym_LT,
    STATE(13), 1,
      sym_comment,
    STATE(56), 1,
      sym__immediate_literal,
    STATE(18), 2,
      sym_label,
      sym_placeholder,
    ACTIONS(101), 3,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
    ACTIONS(83), 7,
      sym_macro,
      sym_identifier,
      sym_number,
      sym_char,
      sym_char_escape,
      sym_relative,
      sym_port,
  [672] = 12,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(107), 1,
      anon_sym_DOT,
    ACTIONS(109), 1,
      anon_sym_LT,
    ACTIONS(111), 1,
      anon_sym_RBRACK,
    ACTIONS(113), 1,
      sym_memory,
    STATE(14), 1,
      sym_comment,
    STATE(15), 1,
      aux_sym_array_repeat1,
    STATE(31), 1,
      sym__immediate_literal,
    STATE(33), 2,
      sym_label,
      sym_placeholder,
    ACTIONS(105), 7,
      sym_macro,
      sym_identifier,
      sym_number,
      sym_char,
      sym_char_escape,
      sym_relative,
      sym_port,
  [716] = 11,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(118), 1,
      anon_sym_DOT,
    ACTIONS(121), 1,
      anon_sym_LT,
    ACTIONS(124), 1,
      anon_sym_RBRACK,
    ACTIONS(126), 1,
      sym_memory,
    STATE(31), 1,
      sym__immediate_literal,
    STATE(15), 2,
      sym_comment,
      aux_sym_array_repeat1,
    STATE(33), 2,
      sym_label,
      sym_placeholder,
    ACTIONS(115), 7,
      sym_macro,
      sym_identifier,
      sym_number,
      sym_char,
      sym_char_escape,
      sym_relative,
      sym_port,
  [758] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(16), 1,
      sym_comment,
    ACTIONS(131), 5,
      sym_register,
      sym_program_counter,
      sym_stack_pointer,
      sym_identifier,
      sym_memory,
    ACTIONS(129), 10,
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
  [790] = 6,
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
  [822] = 6,
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
  [854] = 6,
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
  [886] = 12,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(107), 1,
      anon_sym_DOT,
    ACTIONS(109), 1,
      anon_sym_LT,
    ACTIONS(113), 1,
      sym_memory,
    ACTIONS(145), 1,
      anon_sym_RBRACK,
    STATE(14), 1,
      aux_sym_array_repeat1,
    STATE(20), 1,
      sym_comment,
    STATE(31), 1,
      sym__immediate_literal,
    STATE(33), 2,
      sym_label,
      sym_placeholder,
    ACTIONS(105), 7,
      sym_macro,
      sym_identifier,
      sym_number,
      sym_char,
      sym_char_escape,
      sym_relative,
      sym_port,
  [930] = 6,
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
  [962] = 10,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(25), 1,
      anon_sym_DOT,
    ACTIONS(87), 1,
      anon_sym_LT,
    ACTIONS(89), 1,
      sym_memory,
    STATE(22), 1,
      sym_comment,
    STATE(58), 1,
      sym__immediate_literal,
    STATE(18), 2,
      sym_label,
      sym_placeholder,
    ACTIONS(83), 7,
      sym_macro,
      sym_identifier,
      sym_number,
      sym_char,
      sym_char_escape,
      sym_relative,
      sym_port,
  [1000] = 10,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(25), 1,
      anon_sym_DOT,
    ACTIONS(87), 1,
      anon_sym_LT,
    ACTIONS(89), 1,
      sym_memory,
    STATE(23), 1,
      sym_comment,
    STATE(60), 1,
      sym__immediate_literal,
    STATE(18), 2,
      sym_label,
      sym_placeholder,
    ACTIONS(83), 7,
      sym_macro,
      sym_identifier,
      sym_number,
      sym_char,
      sym_char_escape,
      sym_relative,
      sym_port,
  [1038] = 10,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(25), 1,
      anon_sym_DOT,
    ACTIONS(87), 1,
      anon_sym_LT,
    ACTIONS(89), 1,
      sym_memory,
    STATE(24), 1,
      sym_comment,
    STATE(54), 1,
      sym__immediate_literal,
    STATE(18), 2,
      sym_label,
      sym_placeholder,
    ACTIONS(83), 7,
      sym_macro,
      sym_identifier,
      sym_number,
      sym_char,
      sym_char_escape,
      sym_relative,
      sym_port,
  [1076] = 10,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(25), 1,
      anon_sym_DOT,
    ACTIONS(87), 1,
      anon_sym_LT,
    ACTIONS(89), 1,
      sym_memory,
    STATE(25), 1,
      sym_comment,
    STATE(57), 1,
      sym__immediate_literal,
    STATE(18), 2,
      sym_label,
      sym_placeholder,
    ACTIONS(83), 7,
      sym_macro,
      sym_identifier,
      sym_number,
      sym_char,
      sym_char_escape,
      sym_relative,
      sym_port,
  [1114] = 8,
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
    STATE(28), 1,
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
  [1147] = 8,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(11), 1,
      sym__newline,
    STATE(27), 1,
      sym_comment,
    STATE(28), 1,
      aux_sym_source_file_repeat1,
    ACTIONS(155), 3,
      ts_builtin_sym_end,
      sym_macro,
      anon_sym_DOT,
    ACTIONS(157), 7,
      anon_sym_BITS,
      anon_sym_MINREG,
      anon_sym_MINHEAP,
      anon_sym_MINSTACK,
      anon_sym_RUN,
      anon_sym_DW,
      sym_identifier,
  [1180] = 7,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(161), 1,
      sym__newline,
    STATE(28), 2,
      sym_comment,
      aux_sym_source_file_repeat1,
    ACTIONS(159), 3,
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
  [1211] = 8,
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
  [1244] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(131), 1,
      sym_memory,
    STATE(30), 1,
      sym_comment,
    ACTIONS(129), 10,
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
  [1272] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(172), 1,
      sym_memory,
    STATE(31), 1,
      sym_comment,
    ACTIONS(170), 10,
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
  [1300] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(135), 1,
      sym_memory,
    STATE(32), 1,
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
  [1328] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(139), 1,
      sym_memory,
    STATE(33), 1,
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
  [1356] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(34), 1,
      sym_comment,
    ACTIONS(174), 4,
      ts_builtin_sym_end,
      sym_macro,
      sym__newline,
      anon_sym_DOT,
    ACTIONS(176), 7,
      anon_sym_BITS,
      anon_sym_MINREG,
      anon_sym_MINHEAP,
      anon_sym_MINSTACK,
      anon_sym_RUN,
      anon_sym_DW,
      sym_identifier,
  [1384] = 10,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(25), 1,
      anon_sym_DOT,
    ACTIONS(178), 1,
      sym_macro,
    ACTIONS(180), 1,
      anon_sym_DW,
    ACTIONS(182), 1,
      sym_identifier,
    STATE(35), 1,
      sym_comment,
    STATE(38), 1,
      aux_sym_DW_repeat1,
    STATE(59), 1,
      sym_label,
  [1415] = 8,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(186), 1,
      sym__newline,
    STATE(36), 1,
      sym_comment,
    STATE(37), 1,
      aux_sym_source_file_repeat1,
    ACTIONS(184), 2,
      sym_macro,
      anon_sym_DOT,
    ACTIONS(188), 2,
      anon_sym_DW,
      sym_identifier,
  [1442] = 7,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(190), 1,
      sym__newline,
    ACTIONS(159), 2,
      sym_macro,
      anon_sym_DOT,
    ACTIONS(164), 2,
      anon_sym_DW,
      sym_identifier,
    STATE(37), 2,
      sym_comment,
      aux_sym_source_file_repeat1,
  [1467] = 8,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(184), 1,
      sym_macro,
    ACTIONS(193), 1,
      anon_sym_DOT,
    STATE(59), 1,
      sym_label,
    ACTIONS(188), 2,
      anon_sym_DW,
      sym_identifier,
    STATE(38), 2,
      sym_comment,
      aux_sym_DW_repeat1,
  [1494] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(39), 1,
      sym_comment,
    ACTIONS(176), 2,
      anon_sym_DW,
      sym_identifier,
    ACTIONS(174), 3,
      sym_macro,
      sym__newline,
      anon_sym_DOT,
  [1516] = 7,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(11), 1,
      sym__newline,
    ACTIONS(196), 1,
      ts_builtin_sym_end,
    STATE(26), 1,
      aux_sym_source_file_repeat1,
    STATE(40), 1,
      sym_comment,
  [1538] = 7,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(11), 1,
      sym__newline,
    ACTIONS(198), 1,
      ts_builtin_sym_end,
    STATE(27), 1,
      aux_sym_source_file_repeat1,
    STATE(41), 1,
      sym_comment,
  [1560] = 7,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(11), 1,
      sym__newline,
    ACTIONS(200), 1,
      ts_builtin_sym_end,
    STATE(29), 1,
      aux_sym_source_file_repeat1,
    STATE(42), 1,
      sym_comment,
  [1582] = 7,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(11), 1,
      sym__newline,
    ACTIONS(202), 1,
      ts_builtin_sym_end,
    STATE(29), 1,
      aux_sym_source_file_repeat1,
    STATE(43), 1,
      sym_comment,
  [1604] = 7,
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
    STATE(27), 1,
      aux_sym_source_file_repeat1,
    STATE(44), 1,
      sym_comment,
  [1626] = 7,
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
    STATE(26), 1,
      aux_sym_source_file_repeat1,
    STATE(45), 1,
      sym_comment,
  [1648] = 7,
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
    STATE(26), 1,
      aux_sym_source_file_repeat1,
    STATE(46), 1,
      sym_comment,
  [1670] = 7,
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
    STATE(29), 1,
      aux_sym_source_file_repeat1,
    STATE(47), 1,
      sym_comment,
  [1692] = 7,
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
    STATE(27), 1,
      aux_sym_source_file_repeat1,
    STATE(48), 1,
      sym_comment,
  [1714] = 7,
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
    STATE(26), 1,
      aux_sym_source_file_repeat1,
    STATE(49), 1,
      sym_comment,
  [1736] = 7,
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
    STATE(50), 1,
      sym_comment,
  [1758] = 7,
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
    STATE(27), 1,
      aux_sym_source_file_repeat1,
    STATE(51), 1,
      sym_comment,
  [1780] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(52), 1,
      sym_comment,
    ACTIONS(220), 2,
      ts_builtin_sym_end,
      sym__newline,
  [1797] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(53), 1,
      sym_comment,
    ACTIONS(222), 2,
      ts_builtin_sym_end,
      sym__newline,
  [1814] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(54), 1,
      sym_comment,
    ACTIONS(224), 2,
      ts_builtin_sym_end,
      sym__newline,
  [1831] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(55), 1,
      sym_comment,
    ACTIONS(226), 2,
      ts_builtin_sym_end,
      sym__newline,
  [1848] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(56), 1,
      sym_comment,
    ACTIONS(228), 2,
      ts_builtin_sym_end,
      sym__newline,
  [1865] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(57), 1,
      sym_comment,
    ACTIONS(230), 2,
      ts_builtin_sym_end,
      sym__newline,
  [1882] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(58), 1,
      sym_comment,
    ACTIONS(232), 2,
      ts_builtin_sym_end,
      sym__newline,
  [1899] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(186), 1,
      sym__newline,
    STATE(36), 1,
      aux_sym_source_file_repeat1,
    STATE(59), 1,
      sym_comment,
  [1918] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(60), 1,
      sym_comment,
    ACTIONS(234), 2,
      ts_builtin_sym_end,
      sym__newline,
  [1935] = 6,
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
    STATE(61), 1,
      sym_comment,
  [1954] = 6,
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
    STATE(62), 1,
      sym_comment,
  [1973] = 6,
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
  [1992] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(64), 1,
      sym_comment,
    ACTIONS(236), 2,
      ts_builtin_sym_end,
      sym__newline,
  [2009] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(65), 1,
      sym_comment,
    ACTIONS(238), 2,
      ts_builtin_sym_end,
      sym__newline,
  [2026] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(66), 1,
      sym_comment,
    ACTIONS(240), 2,
      anon_sym_RAM,
      anon_sym_ROM,
  [2043] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(67), 1,
      sym_comment,
    ACTIONS(242), 2,
      ts_builtin_sym_end,
      sym__newline,
  [2060] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(68), 1,
      sym_comment,
    ACTIONS(244), 2,
      ts_builtin_sym_end,
      sym__newline,
  [2077] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(246), 1,
      anon_sym_GT,
    STATE(69), 1,
      sym_comment,
  [2093] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(248), 1,
      sym_identifier,
    STATE(70), 1,
      sym_comment,
  [2109] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(250), 1,
      sym_identifier,
    STATE(71), 1,
      sym_comment,
  [2125] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(252), 1,
      ts_builtin_sym_end,
    STATE(72), 1,
      sym_comment,
  [2141] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(254), 1,
      sym_identifier,
    STATE(73), 1,
      sym_comment,
  [2157] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(256), 1,
      anon_sym_GT,
    STATE(74), 1,
      sym_comment,
  [2173] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(258), 1,
      sym_identifier,
    STATE(75), 1,
      sym_comment,
  [2189] = 1,
    ACTIONS(260), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 72,
  [SMALL_STATE(4)] = 138,
  [SMALL_STATE(5)] = 204,
  [SMALL_STATE(6)] = 270,
  [SMALL_STATE(7)] = 321,
  [SMALL_STATE(8)] = 374,
  [SMALL_STATE(9)] = 427,
  [SMALL_STATE(10)] = 480,
  [SMALL_STATE(11)] = 533,
  [SMALL_STATE(12)] = 581,
  [SMALL_STATE(13)] = 629,
  [SMALL_STATE(14)] = 672,
  [SMALL_STATE(15)] = 716,
  [SMALL_STATE(16)] = 758,
  [SMALL_STATE(17)] = 790,
  [SMALL_STATE(18)] = 822,
  [SMALL_STATE(19)] = 854,
  [SMALL_STATE(20)] = 886,
  [SMALL_STATE(21)] = 930,
  [SMALL_STATE(22)] = 962,
  [SMALL_STATE(23)] = 1000,
  [SMALL_STATE(24)] = 1038,
  [SMALL_STATE(25)] = 1076,
  [SMALL_STATE(26)] = 1114,
  [SMALL_STATE(27)] = 1147,
  [SMALL_STATE(28)] = 1180,
  [SMALL_STATE(29)] = 1211,
  [SMALL_STATE(30)] = 1244,
  [SMALL_STATE(31)] = 1272,
  [SMALL_STATE(32)] = 1300,
  [SMALL_STATE(33)] = 1328,
  [SMALL_STATE(34)] = 1356,
  [SMALL_STATE(35)] = 1384,
  [SMALL_STATE(36)] = 1415,
  [SMALL_STATE(37)] = 1442,
  [SMALL_STATE(38)] = 1467,
  [SMALL_STATE(39)] = 1494,
  [SMALL_STATE(40)] = 1516,
  [SMALL_STATE(41)] = 1538,
  [SMALL_STATE(42)] = 1560,
  [SMALL_STATE(43)] = 1582,
  [SMALL_STATE(44)] = 1604,
  [SMALL_STATE(45)] = 1626,
  [SMALL_STATE(46)] = 1648,
  [SMALL_STATE(47)] = 1670,
  [SMALL_STATE(48)] = 1692,
  [SMALL_STATE(49)] = 1714,
  [SMALL_STATE(50)] = 1736,
  [SMALL_STATE(51)] = 1758,
  [SMALL_STATE(52)] = 1780,
  [SMALL_STATE(53)] = 1797,
  [SMALL_STATE(54)] = 1814,
  [SMALL_STATE(55)] = 1831,
  [SMALL_STATE(56)] = 1848,
  [SMALL_STATE(57)] = 1865,
  [SMALL_STATE(58)] = 1882,
  [SMALL_STATE(59)] = 1899,
  [SMALL_STATE(60)] = 1918,
  [SMALL_STATE(61)] = 1935,
  [SMALL_STATE(62)] = 1954,
  [SMALL_STATE(63)] = 1973,
  [SMALL_STATE(64)] = 1992,
  [SMALL_STATE(65)] = 2009,
  [SMALL_STATE(66)] = 2026,
  [SMALL_STATE(67)] = 2043,
  [SMALL_STATE(68)] = 2060,
  [SMALL_STATE(69)] = 2077,
  [SMALL_STATE(70)] = 2093,
  [SMALL_STATE(71)] = 2109,
  [SMALL_STATE(72)] = 2125,
  [SMALL_STATE(73)] = 2141,
  [SMALL_STATE(74)] = 2157,
  [SMALL_STATE(75)] = 2173,
  [SMALL_STATE(76)] = 2189,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2, .production_id = 17),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2, .production_id = 17), SHIFT_REPEAT(9),
  [36] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2, .production_id = 17), SHIFT_REPEAT(13),
  [39] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2, .production_id = 17), SHIFT_REPEAT(25),
  [42] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2, .production_id = 17), SHIFT_REPEAT(22),
  [45] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2, .production_id = 17), SHIFT_REPEAT(23),
  [48] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2, .production_id = 17), SHIFT_REPEAT(66),
  [51] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2, .production_id = 17), SHIFT_REPEAT(11),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2, .production_id = 17), SHIFT_REPEAT(70),
  [57] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2, .production_id = 17), SHIFT_REPEAT(9),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, .production_id = 5),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, .production_id = 13),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_instruction_repeat1, 2),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_instruction_repeat1, 2), SHIFT_REPEAT(18),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_instruction_repeat1, 2), SHIFT_REPEAT(70),
  [72] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_instruction_repeat1, 2), SHIFT_REPEAT(19),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_instruction_repeat1, 2), SHIFT_REPEAT(71),
  [78] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_instruction_repeat1, 2), SHIFT_REPEAT(18),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 3, .production_id = 23),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 2, .production_id = 18),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 1, .production_id = 1),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 2, .production_id = 6),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [115] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(33),
  [118] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(73),
  [121] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(75),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2),
  [126] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(33),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_placeholder, 3),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_placeholder, 3),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 2, .production_id = 9),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label, 2, .production_id = 9),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__immediate_literal, 1),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__immediate_literal, 1),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__operand, 1),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__operand, 1),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_instruction_repeat1, 1),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_instruction_repeat1, 1),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2, .production_id = 4),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2, .production_id = 4),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2, .production_id = 3),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2, .production_id = 3),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [161] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(34),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2, .production_id = 2),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2, .production_id = 2),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 1),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_array_repeat1, 1),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 1),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 1),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [180] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [182] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_DW_repeat1, 2),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_DW_repeat1, 2),
  [190] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(39),
  [193] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_DW_repeat1, 2), SHIFT_REPEAT(70),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 3, .production_id = 22),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 3, .production_id = 21),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, .production_id = 2),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, .production_id = 10),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, .production_id = 11),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, .production_id = 12),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, .production_id = 4),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, .production_id = 14),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, .production_id = 15),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, .production_id = 16),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 3, .production_id = 20),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, .production_id = 3),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__header, 1),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_DW, 3, .production_id = 24),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_BITS, 3, .production_id = 19),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 2),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_BITS, 2, .production_id = 7),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_MINREG, 2, .production_id = 7),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_MINHEAP, 2, .production_id = 7),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_MINSTACK, 2, .production_id = 7),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_RUN, 2, .production_id = 8),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__dw_literal, 1),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 3, .production_id = 25),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_DW, 2, .production_id = 7),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [252] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
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
