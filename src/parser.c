#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 72
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
      if (eof) ADVANCE(35);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '#') ADVANCE(11);
      if (lookahead == '$') ADVANCE(12);
      if (lookahead == '%') ADVANCE(30);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == '.') ADVANCE(54);
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == '0') ADVANCE(92);
      if (lookahead == '<') ADVANCE(62);
      if (lookahead == '=') ADVANCE(16);
      if (lookahead == '>') ADVANCE(64);
      if (lookahead == '@') ADVANCE(31);
      if (lookahead == 'B') ADVANCE(75);
      if (lookahead == 'D') ADVANCE(87);
      if (lookahead == 'M') ADVANCE(13);
      if (lookahead == 'P') ADVANCE(69);
      if (lookahead == 'R') ADVANCE(65);
      if (lookahead == 'S') ADVANCE(81);
      if (lookahead == '[') ADVANCE(89);
      if (lookahead == ']') ADVANCE(90);
      if (lookahead == 'm') ADVANCE(14);
      if (lookahead == 'r') ADVANCE(66);
      if (lookahead == '~') ADVANCE(23);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(38);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(10);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(95);
      if (sym__whitespace_character_set_1(lookahead)) ADVANCE(37);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(91);
      if (lookahead == '\\') ADVANCE(32);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '\'') ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '\'') ADVANCE(97);
      END_STATE();
    case 3:
      if (lookahead == '\'') ADVANCE(98);
      END_STATE();
    case 4:
      if (lookahead == '*') ADVANCE(6);
      if (lookahead == '/') ADVANCE(39);
      END_STATE();
    case 5:
      if (lookahead == '*') ADVANCE(5);
      if (lookahead == '/') ADVANCE(40);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 6:
      if (lookahead == '*') ADVANCE(5);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '.') ADVANCE(54);
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == '@') ADVANCE(31);
      if (lookahead == 'D') ADVANCE(87);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(38);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(28);
      if (sym__whitespace_character_set_1(lookahead)) ADVANCE(37);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 8:
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == 'R') ADVANCE(18);
      if (sym__whitespace_character_set_2(lookahead)) ADVANCE(37);
      END_STATE();
    case 9:
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(28);
      if (sym__whitespace_character_set_2(lookahead)) ADVANCE(37);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 10:
      if (lookahead == '0') ADVANCE(92);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(95);
      END_STATE();
    case 11:
      if (lookahead == '0') ADVANCE(100);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(101);
      END_STATE();
    case 12:
      if (lookahead == '0') ADVANCE(55);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(56);
      END_STATE();
    case 13:
      if (lookahead == '0') ADVANCE(103);
      if (lookahead == 'I') ADVANCE(79);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(102);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 14:
      if (lookahead == '0') ADVANCE(103);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(102);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 15:
      if (lookahead == '=') ADVANCE(42);
      END_STATE();
    case 16:
      if (lookahead == '=') ADVANCE(43);
      END_STATE();
    case 17:
      if (lookahead == '=') ADVANCE(44);
      END_STATE();
    case 18:
      if (lookahead == 'A') ADVANCE(20);
      if (lookahead == 'O') ADVANCE(21);
      END_STATE();
    case 19:
      if (lookahead == 'I') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(28);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 20:
      if (lookahead == 'M') ADVANCE(49);
      END_STATE();
    case 21:
      if (lookahead == 'M') ADVANCE(51);
      END_STATE();
    case 22:
      if (lookahead == '\\') ADVANCE(25);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '\'') ADVANCE(2);
      END_STATE();
    case 23:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(27);
      END_STATE();
    case 24:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(93);
      END_STATE();
    case 25:
      if (lookahead == '\'' ||
          lookahead == '0' ||
          lookahead == '\\' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't') ADVANCE(3);
      END_STATE();
    case 26:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(94);
      END_STATE();
    case 27:
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(99);
      END_STATE();
    case 28:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(28);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 29:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(96);
      END_STATE();
    case 30:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 31:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      END_STATE();
    case 32:
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1);
      END_STATE();
    case 33:
      if (eof) ADVANCE(35);
      if (lookahead == '#') ADVANCE(11);
      if (lookahead == '$') ADVANCE(12);
      if (lookahead == '%') ADVANCE(30);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == '.') ADVANCE(54);
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == '0') ADVANCE(92);
      if (lookahead == '<') ADVANCE(61);
      if (lookahead == '>') ADVANCE(63);
      if (lookahead == '@') ADVANCE(31);
      if (lookahead == 'P') ADVANCE(69);
      if (lookahead == 'S') ADVANCE(81);
      if (lookahead == ']') ADVANCE(90);
      if (lookahead == '~') ADVANCE(23);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(38);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(10);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(14);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(66);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(95);
      if (sym__whitespace_character_set_1(lookahead)) ADVANCE(37);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 34:
      if (eof) ADVANCE(35);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == '.') ADVANCE(54);
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == '0') ADVANCE(92);
      if (lookahead == '<') ADVANCE(15);
      if (lookahead == '=') ADVANCE(16);
      if (lookahead == '>') ADVANCE(17);
      if (lookahead == '@') ADVANCE(31);
      if (lookahead == 'B') ADVANCE(75);
      if (lookahead == 'D') ADVANCE(87);
      if (lookahead == 'M') ADVANCE(19);
      if (lookahead == 'R') ADVANCE(86);
      if (lookahead == 'm') ADVANCE(28);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(38);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(10);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(95);
      if (sym__whitespace_character_set_1(lookahead)) ADVANCE(37);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_macro);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym__whitespace);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym__newline);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(39);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_BITS);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_MINREG);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_MINHEAP);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_MINSTACK);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_RUN);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_RAM);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_RAM);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_ROM);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_ROM);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_DW);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_register);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == '0') ADVANCE(56);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(56);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == '0') ADVANCE(57);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(57);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_register);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_program_counter);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_stack_pointer);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(42);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(44);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '0') ADVANCE(58);
      if (lookahead == 'A') ADVANCE(77);
      if (lookahead == 'O') ADVANCE(78);
      if (lookahead == 'U') ADVANCE(80);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(57);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '0') ADVANCE(58);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(57);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'G') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'H') ADVANCE(71);
      if (lookahead == 'R') ADVANCE(72);
      if (lookahead == 'S') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'K') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'W') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'b') ADVANCE(24);
      if (lookahead == 'o') ADVANCE(26);
      if (lookahead == 'x') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(95);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(93);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(94);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(95);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(96);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_char);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_char_escape);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_relative);
      if (lookahead == '0') ADVANCE(99);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(99);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_memory);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_memory);
      if (lookahead == '0') ADVANCE(101);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(101);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_memory);
      if (lookahead == '0') ADVANCE(102);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(102);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_memory);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(28);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_port);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 34},
  [2] = {.lex_state = 34},
  [3] = {.lex_state = 34},
  [4] = {.lex_state = 34},
  [5] = {.lex_state = 34},
  [6] = {.lex_state = 33},
  [7] = {.lex_state = 33},
  [8] = {.lex_state = 33},
  [9] = {.lex_state = 33},
  [10] = {.lex_state = 33},
  [11] = {.lex_state = 33},
  [12] = {.lex_state = 33},
  [13] = {.lex_state = 33},
  [14] = {.lex_state = 33},
  [15] = {.lex_state = 33},
  [16] = {.lex_state = 34},
  [17] = {.lex_state = 34},
  [18] = {.lex_state = 34},
  [19] = {.lex_state = 34},
  [20] = {.lex_state = 34},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 7},
  [24] = {.lex_state = 7},
  [25] = {.lex_state = 34},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 7},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 7},
  [31] = {.lex_state = 7},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 7},
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
  [53] = {.lex_state = 8},
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
  [69] = {.lex_state = 9},
  [70] = {.lex_state = 33},
  [71] = {(TSStateId)(-1)},
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
    [sym_source_file] = STATE(68),
    [sym_comment] = STATE(1),
    [sym__header] = STATE(40),
    [sym_BITS] = STATE(65),
    [sym_MINREG] = STATE(65),
    [sym_MINHEAP] = STATE(65),
    [sym_MINSTACK] = STATE(65),
    [sym_RUN] = STATE(65),
    [sym_DW] = STATE(39),
    [sym_label_def] = STATE(34),
    [sym_label] = STATE(57),
    [sym_instruction] = STATE(38),
    [aux_sym_source_file_repeat1] = STATE(2),
    [aux_sym_source_file_repeat2] = STATE(5),
    [aux_sym_DW_repeat1] = STATE(23),
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
    [sym__header] = STATE(41),
    [sym_BITS] = STATE(65),
    [sym_MINREG] = STATE(65),
    [sym_MINHEAP] = STATE(65),
    [sym_MINSTACK] = STATE(65),
    [sym_RUN] = STATE(65),
    [sym_DW] = STATE(42),
    [sym_label_def] = STATE(34),
    [sym_label] = STATE(57),
    [sym_instruction] = STATE(43),
    [aux_sym_source_file_repeat1] = STATE(17),
    [aux_sym_source_file_repeat2] = STATE(3),
    [aux_sym_DW_repeat1] = STATE(23),
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
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    STATE(3), 1,
      sym_comment,
    STATE(4), 1,
      aux_sym_source_file_repeat2,
    STATE(23), 1,
      aux_sym_DW_repeat1,
    STATE(34), 1,
      sym_label_def,
    STATE(44), 1,
      sym_instruction,
    STATE(45), 1,
      sym_DW,
    STATE(49), 1,
      sym__header,
    STATE(57), 1,
      sym_label,
    ACTIONS(7), 2,
      sym_macro,
      aux_sym_comment_token2,
    STATE(65), 5,
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
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(33), 1,
      ts_builtin_sym_end,
    ACTIONS(35), 1,
      sym_macro,
    ACTIONS(38), 1,
      anon_sym_BITS,
    ACTIONS(41), 1,
      anon_sym_MINREG,
    ACTIONS(44), 1,
      anon_sym_MINHEAP,
    ACTIONS(47), 1,
      anon_sym_MINSTACK,
    ACTIONS(50), 1,
      anon_sym_RUN,
    ACTIONS(53), 1,
      anon_sym_DW,
    ACTIONS(56), 1,
      anon_sym_DOT,
    ACTIONS(59), 1,
      sym_identifier,
    STATE(23), 1,
      aux_sym_DW_repeat1,
    STATE(34), 1,
      sym_label_def,
    STATE(57), 1,
      sym_label,
    STATE(62), 1,
      sym__header,
    STATE(63), 1,
      sym_DW,
    STATE(64), 1,
      sym_instruction,
    STATE(4), 2,
      sym_comment,
      aux_sym_source_file_repeat2,
    STATE(65), 5,
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
    STATE(4), 1,
      aux_sym_source_file_repeat2,
    STATE(5), 1,
      sym_comment,
    STATE(23), 1,
      aux_sym_DW_repeat1,
    STATE(34), 1,
      sym_label_def,
    STATE(46), 1,
      sym__header,
    STATE(47), 1,
      sym_DW,
    STATE(48), 1,
      sym_instruction,
    STATE(57), 1,
      sym_label,
    ACTIONS(7), 2,
      sym_macro,
      aux_sym_comment_token2,
    STATE(65), 5,
      sym_BITS,
      sym_MINREG,
      sym_MINHEAP,
      sym_MINSTACK,
      sym_RUN,
  [207] = 12,
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
    STATE(15), 1,
      sym__operand,
    ACTIONS(64), 2,
      ts_builtin_sym_end,
      sym__newline,
    STATE(6), 2,
      sym_comment,
      aux_sym_instruction_repeat1,
    ACTIONS(66), 3,
      sym_macro,
      sym_relative,
      sym_port,
    ACTIONS(78), 3,
      sym_number,
      sym_char,
      sym_char_escape,
    STATE(12), 3,
      sym_label,
      sym_placeholder,
      sym__immediate_literal,
    ACTIONS(72), 5,
      sym_register,
      sym_program_counter,
      sym_stack_pointer,
      sym_identifier,
      sym_memory,
  [256] = 13,
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
      sym_comment,
    STATE(10), 1,
      aux_sym_instruction_repeat1,
    STATE(15), 1,
      sym__operand,
    ACTIONS(81), 2,
      ts_builtin_sym_end,
      sym__newline,
    ACTIONS(83), 3,
      sym_macro,
      sym_relative,
      sym_port,
    ACTIONS(89), 3,
      sym_number,
      sym_char,
      sym_char_escape,
    STATE(12), 3,
      sym_label,
      sym_placeholder,
      sym__immediate_literal,
    ACTIONS(85), 5,
      sym_register,
      sym_program_counter,
      sym_stack_pointer,
      sym_identifier,
      sym_memory,
  [307] = 13,
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
    STATE(8), 1,
      sym_comment,
    STATE(9), 1,
      aux_sym_instruction_repeat1,
    STATE(15), 1,
      sym__operand,
    ACTIONS(91), 2,
      ts_builtin_sym_end,
      sym__newline,
    ACTIONS(83), 3,
      sym_macro,
      sym_relative,
      sym_port,
    ACTIONS(89), 3,
      sym_number,
      sym_char,
      sym_char_escape,
    STATE(12), 3,
      sym_label,
      sym_placeholder,
      sym__immediate_literal,
    ACTIONS(85), 5,
      sym_register,
      sym_program_counter,
      sym_stack_pointer,
      sym_identifier,
      sym_memory,
  [358] = 13,
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
    STATE(9), 1,
      sym_comment,
    STATE(15), 1,
      sym__operand,
    ACTIONS(93), 2,
      ts_builtin_sym_end,
      sym__newline,
    ACTIONS(83), 3,
      sym_macro,
      sym_relative,
      sym_port,
    ACTIONS(89), 3,
      sym_number,
      sym_char,
      sym_char_escape,
    STATE(12), 3,
      sym_label,
      sym_placeholder,
      sym__immediate_literal,
    ACTIONS(85), 5,
      sym_register,
      sym_program_counter,
      sym_stack_pointer,
      sym_identifier,
      sym_memory,
  [409] = 13,
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
    STATE(15), 1,
      sym__operand,
    ACTIONS(95), 2,
      ts_builtin_sym_end,
      sym__newline,
    ACTIONS(83), 3,
      sym_macro,
      sym_relative,
      sym_port,
    ACTIONS(89), 3,
      sym_number,
      sym_char,
      sym_char_escape,
    STATE(12), 3,
      sym_label,
      sym_placeholder,
      sym__immediate_literal,
    ACTIONS(85), 5,
      sym_register,
      sym_program_counter,
      sym_stack_pointer,
      sym_identifier,
      sym_memory,
  [460] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(11), 1,
      sym_comment,
    ACTIONS(99), 5,
      sym_register,
      sym_program_counter,
      sym_stack_pointer,
      sym_identifier,
      sym_memory,
    ACTIONS(97), 11,
      ts_builtin_sym_end,
      sym_macro,
      sym__newline,
      anon_sym_DOT,
      anon_sym_LT,
      anon_sym_RBRACK,
      sym_number,
      sym_char,
      sym_char_escape,
      sym_relative,
      sym_port,
  [493] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(12), 1,
      sym_comment,
    ACTIONS(103), 5,
      sym_register,
      sym_program_counter,
      sym_stack_pointer,
      sym_identifier,
      sym_memory,
    ACTIONS(101), 10,
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
  [525] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(13), 1,
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
  [557] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(14), 1,
      sym_comment,
    ACTIONS(111), 5,
      sym_register,
      sym_program_counter,
      sym_stack_pointer,
      sym_identifier,
      sym_memory,
    ACTIONS(109), 10,
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
  [589] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(15), 1,
      sym_comment,
    ACTIONS(115), 5,
      sym_register,
      sym_program_counter,
      sym_stack_pointer,
      sym_identifier,
      sym_memory,
    ACTIONS(113), 10,
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
  [621] = 8,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(11), 1,
      sym__newline,
    STATE(16), 1,
      sym_comment,
    STATE(17), 1,
      aux_sym_source_file_repeat1,
    ACTIONS(117), 3,
      ts_builtin_sym_end,
      sym_macro,
      anon_sym_DOT,
    ACTIONS(119), 7,
      anon_sym_BITS,
      anon_sym_MINREG,
      anon_sym_MINHEAP,
      anon_sym_MINSTACK,
      anon_sym_RUN,
      anon_sym_DW,
      sym_identifier,
  [654] = 7,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(123), 1,
      sym__newline,
    STATE(17), 2,
      sym_comment,
      aux_sym_source_file_repeat1,
    ACTIONS(121), 3,
      ts_builtin_sym_end,
      sym_macro,
      anon_sym_DOT,
    ACTIONS(126), 7,
      anon_sym_BITS,
      anon_sym_MINREG,
      anon_sym_MINHEAP,
      anon_sym_MINSTACK,
      anon_sym_RUN,
      anon_sym_DW,
      sym_identifier,
  [685] = 8,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(11), 1,
      sym__newline,
    STATE(17), 1,
      aux_sym_source_file_repeat1,
    STATE(18), 1,
      sym_comment,
    ACTIONS(128), 3,
      ts_builtin_sym_end,
      sym_macro,
      anon_sym_DOT,
    ACTIONS(130), 7,
      anon_sym_BITS,
      anon_sym_MINREG,
      anon_sym_MINHEAP,
      anon_sym_MINSTACK,
      anon_sym_RUN,
      anon_sym_DW,
      sym_identifier,
  [718] = 8,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(11), 1,
      sym__newline,
    STATE(17), 1,
      aux_sym_source_file_repeat1,
    STATE(19), 1,
      sym_comment,
    ACTIONS(132), 3,
      ts_builtin_sym_end,
      sym_macro,
      anon_sym_DOT,
    ACTIONS(134), 7,
      anon_sym_BITS,
      anon_sym_MINREG,
      anon_sym_MINHEAP,
      anon_sym_MINSTACK,
      anon_sym_RUN,
      anon_sym_DW,
      sym_identifier,
  [751] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(20), 1,
      sym_comment,
    ACTIONS(136), 4,
      ts_builtin_sym_end,
      sym_macro,
      sym__newline,
      anon_sym_DOT,
    ACTIONS(138), 7,
      anon_sym_BITS,
      anon_sym_MINREG,
      anon_sym_MINHEAP,
      anon_sym_MINSTACK,
      anon_sym_RUN,
      anon_sym_DW,
      sym_identifier,
  [779] = 9,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(140), 1,
      anon_sym_LBRACK,
    ACTIONS(142), 1,
      sym_string,
    STATE(21), 1,
      sym_comment,
    STATE(66), 1,
      sym__dw_literal,
    STATE(55), 2,
      sym_array,
      sym__immediate_literal,
    ACTIONS(89), 3,
      sym_number,
      sym_char,
      sym_char_escape,
  [810] = 9,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(140), 1,
      anon_sym_LBRACK,
    ACTIONS(142), 1,
      sym_string,
    STATE(22), 1,
      sym_comment,
    STATE(58), 1,
      sym__dw_literal,
    STATE(55), 2,
      sym_array,
      sym__immediate_literal,
    ACTIONS(89), 3,
      sym_number,
      sym_char,
      sym_char_escape,
  [841] = 11,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(25), 1,
      anon_sym_DOT,
    ACTIONS(144), 1,
      sym_macro,
    ACTIONS(146), 1,
      anon_sym_DW,
    ACTIONS(148), 1,
      sym_identifier,
    STATE(23), 1,
      sym_comment,
    STATE(24), 1,
      aux_sym_DW_repeat1,
    STATE(34), 1,
      sym_label_def,
    STATE(57), 1,
      sym_label,
  [875] = 9,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(150), 1,
      sym_macro,
    ACTIONS(154), 1,
      anon_sym_DOT,
    STATE(34), 1,
      sym_label_def,
    STATE(57), 1,
      sym_label,
    ACTIONS(152), 2,
      anon_sym_DW,
      sym_identifier,
    STATE(24), 2,
      sym_comment,
      aux_sym_DW_repeat1,
  [905] = 7,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(25), 1,
      sym_comment,
    STATE(52), 1,
      sym__immediate_literal,
    ACTIONS(89), 3,
      sym_number,
      sym_char,
      sym_char_escape,
    ACTIONS(157), 3,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
  [931] = 8,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(159), 1,
      anon_sym_RBRACK,
    STATE(26), 1,
      sym_comment,
    STATE(28), 1,
      aux_sym_array_repeat1,
    STATE(35), 1,
      sym__immediate_literal,
    ACTIONS(89), 3,
      sym_number,
      sym_char,
      sym_char_escape,
  [958] = 7,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(161), 1,
      sym__newline,
    ACTIONS(121), 2,
      sym_macro,
      anon_sym_DOT,
    ACTIONS(126), 2,
      anon_sym_DW,
      sym_identifier,
    STATE(27), 2,
      sym_comment,
      aux_sym_source_file_repeat1,
  [983] = 8,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(164), 1,
      anon_sym_RBRACK,
    STATE(28), 1,
      sym_comment,
    STATE(29), 1,
      aux_sym_array_repeat1,
    STATE(35), 1,
      sym__immediate_literal,
    ACTIONS(89), 3,
      sym_number,
      sym_char,
      sym_char_escape,
  [1010] = 7,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(166), 1,
      anon_sym_RBRACK,
    STATE(35), 1,
      sym__immediate_literal,
    STATE(29), 2,
      sym_comment,
      aux_sym_array_repeat1,
    ACTIONS(168), 3,
      sym_number,
      sym_char,
      sym_char_escape,
  [1035] = 8,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(173), 1,
      sym__newline,
    STATE(27), 1,
      aux_sym_source_file_repeat1,
    STATE(30), 1,
      sym_comment,
    ACTIONS(171), 2,
      sym_macro,
      anon_sym_DOT,
    ACTIONS(175), 2,
      anon_sym_DW,
      sym_identifier,
  [1062] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(31), 1,
      sym_comment,
    ACTIONS(138), 2,
      anon_sym_DW,
      sym_identifier,
    ACTIONS(136), 3,
      sym_macro,
      sym__newline,
      anon_sym_DOT,
  [1084] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(32), 1,
      sym_comment,
    STATE(50), 1,
      sym__immediate_literal,
    ACTIONS(89), 3,
      sym_number,
      sym_char,
      sym_char_escape,
  [1105] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(33), 1,
      sym_comment,
    STATE(61), 1,
      sym__immediate_literal,
    ACTIONS(89), 3,
      sym_number,
      sym_char,
      sym_char_escape,
  [1126] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(34), 1,
      sym_comment,
    ACTIONS(177), 2,
      sym_macro,
      anon_sym_DOT,
    ACTIONS(179), 2,
      anon_sym_DW,
      sym_identifier,
  [1147] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(35), 1,
      sym_comment,
    ACTIONS(181), 4,
      anon_sym_RBRACK,
      sym_number,
      sym_char,
      sym_char_escape,
  [1166] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(36), 1,
      sym_comment,
    STATE(60), 1,
      sym__immediate_literal,
    ACTIONS(89), 3,
      sym_number,
      sym_char,
      sym_char_escape,
  [1187] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(37), 1,
      sym_comment,
    STATE(59), 1,
      sym__immediate_literal,
    ACTIONS(89), 3,
      sym_number,
      sym_char,
      sym_char_escape,
  [1208] = 7,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(11), 1,
      sym__newline,
    ACTIONS(183), 1,
      ts_builtin_sym_end,
    STATE(16), 1,
      aux_sym_source_file_repeat1,
    STATE(38), 1,
      sym_comment,
  [1230] = 7,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(11), 1,
      sym__newline,
    ACTIONS(185), 1,
      ts_builtin_sym_end,
    STATE(18), 1,
      aux_sym_source_file_repeat1,
    STATE(39), 1,
      sym_comment,
  [1252] = 7,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(11), 1,
      sym__newline,
    ACTIONS(187), 1,
      ts_builtin_sym_end,
    STATE(19), 1,
      aux_sym_source_file_repeat1,
    STATE(40), 1,
      sym_comment,
  [1274] = 7,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(11), 1,
      sym__newline,
    ACTIONS(189), 1,
      ts_builtin_sym_end,
    STATE(19), 1,
      aux_sym_source_file_repeat1,
    STATE(41), 1,
      sym_comment,
  [1296] = 7,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(11), 1,
      sym__newline,
    ACTIONS(191), 1,
      ts_builtin_sym_end,
    STATE(18), 1,
      aux_sym_source_file_repeat1,
    STATE(42), 1,
      sym_comment,
  [1318] = 7,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(11), 1,
      sym__newline,
    ACTIONS(193), 1,
      ts_builtin_sym_end,
    STATE(16), 1,
      aux_sym_source_file_repeat1,
    STATE(43), 1,
      sym_comment,
  [1340] = 7,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(11), 1,
      sym__newline,
    ACTIONS(195), 1,
      ts_builtin_sym_end,
    STATE(16), 1,
      aux_sym_source_file_repeat1,
    STATE(44), 1,
      sym_comment,
  [1362] = 7,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(11), 1,
      sym__newline,
    ACTIONS(197), 1,
      ts_builtin_sym_end,
    STATE(18), 1,
      aux_sym_source_file_repeat1,
    STATE(45), 1,
      sym_comment,
  [1384] = 7,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(11), 1,
      sym__newline,
    ACTIONS(199), 1,
      ts_builtin_sym_end,
    STATE(19), 1,
      aux_sym_source_file_repeat1,
    STATE(46), 1,
      sym_comment,
  [1406] = 7,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(11), 1,
      sym__newline,
    ACTIONS(201), 1,
      ts_builtin_sym_end,
    STATE(18), 1,
      aux_sym_source_file_repeat1,
    STATE(47), 1,
      sym_comment,
  [1428] = 7,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(11), 1,
      sym__newline,
    ACTIONS(203), 1,
      ts_builtin_sym_end,
    STATE(16), 1,
      aux_sym_source_file_repeat1,
    STATE(48), 1,
      sym_comment,
  [1450] = 7,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(11), 1,
      sym__newline,
    ACTIONS(205), 1,
      ts_builtin_sym_end,
    STATE(19), 1,
      aux_sym_source_file_repeat1,
    STATE(49), 1,
      sym_comment,
  [1472] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(50), 1,
      sym_comment,
    ACTIONS(207), 2,
      ts_builtin_sym_end,
      sym__newline,
  [1489] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(51), 1,
      sym_comment,
    ACTIONS(209), 2,
      ts_builtin_sym_end,
      sym__newline,
  [1506] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(52), 1,
      sym_comment,
    ACTIONS(211), 2,
      ts_builtin_sym_end,
      sym__newline,
  [1523] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(53), 1,
      sym_comment,
    ACTIONS(213), 2,
      anon_sym_RAM,
      anon_sym_ROM,
  [1540] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(54), 1,
      sym_comment,
    ACTIONS(215), 2,
      ts_builtin_sym_end,
      sym__newline,
  [1557] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(55), 1,
      sym_comment,
    ACTIONS(217), 2,
      ts_builtin_sym_end,
      sym__newline,
  [1574] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(56), 1,
      sym_comment,
    ACTIONS(219), 2,
      ts_builtin_sym_end,
      sym__newline,
  [1591] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(173), 1,
      sym__newline,
    STATE(30), 1,
      aux_sym_source_file_repeat1,
    STATE(57), 1,
      sym_comment,
  [1610] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(58), 1,
      sym_comment,
    ACTIONS(221), 2,
      ts_builtin_sym_end,
      sym__newline,
  [1627] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(59), 1,
      sym_comment,
    ACTIONS(223), 2,
      ts_builtin_sym_end,
      sym__newline,
  [1644] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(60), 1,
      sym_comment,
    ACTIONS(225), 2,
      ts_builtin_sym_end,
      sym__newline,
  [1661] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(61), 1,
      sym_comment,
    ACTIONS(227), 2,
      ts_builtin_sym_end,
      sym__newline,
  [1678] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(11), 1,
      sym__newline,
    STATE(19), 1,
      aux_sym_source_file_repeat1,
    STATE(62), 1,
      sym_comment,
  [1697] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(11), 1,
      sym__newline,
    STATE(18), 1,
      aux_sym_source_file_repeat1,
    STATE(63), 1,
      sym_comment,
  [1716] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(11), 1,
      sym__newline,
    STATE(16), 1,
      aux_sym_source_file_repeat1,
    STATE(64), 1,
      sym_comment,
  [1735] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(65), 1,
      sym_comment,
    ACTIONS(229), 2,
      ts_builtin_sym_end,
      sym__newline,
  [1752] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(66), 1,
      sym_comment,
    ACTIONS(231), 2,
      ts_builtin_sym_end,
      sym__newline,
  [1769] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(233), 1,
      sym_identifier,
    STATE(67), 1,
      sym_comment,
  [1785] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(235), 1,
      ts_builtin_sym_end,
    STATE(68), 1,
      sym_comment,
  [1801] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(237), 1,
      sym_identifier,
    STATE(69), 1,
      sym_comment,
  [1817] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(239), 1,
      anon_sym_GT,
    STATE(70), 1,
      sym_comment,
  [1833] = 1,
    ACTIONS(241), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(3)] = 0,
  [SMALL_STATE(4)] = 69,
  [SMALL_STATE(5)] = 138,
  [SMALL_STATE(6)] = 207,
  [SMALL_STATE(7)] = 256,
  [SMALL_STATE(8)] = 307,
  [SMALL_STATE(9)] = 358,
  [SMALL_STATE(10)] = 409,
  [SMALL_STATE(11)] = 460,
  [SMALL_STATE(12)] = 493,
  [SMALL_STATE(13)] = 525,
  [SMALL_STATE(14)] = 557,
  [SMALL_STATE(15)] = 589,
  [SMALL_STATE(16)] = 621,
  [SMALL_STATE(17)] = 654,
  [SMALL_STATE(18)] = 685,
  [SMALL_STATE(19)] = 718,
  [SMALL_STATE(20)] = 751,
  [SMALL_STATE(21)] = 779,
  [SMALL_STATE(22)] = 810,
  [SMALL_STATE(23)] = 841,
  [SMALL_STATE(24)] = 875,
  [SMALL_STATE(25)] = 905,
  [SMALL_STATE(26)] = 931,
  [SMALL_STATE(27)] = 958,
  [SMALL_STATE(28)] = 983,
  [SMALL_STATE(29)] = 1010,
  [SMALL_STATE(30)] = 1035,
  [SMALL_STATE(31)] = 1062,
  [SMALL_STATE(32)] = 1084,
  [SMALL_STATE(33)] = 1105,
  [SMALL_STATE(34)] = 1126,
  [SMALL_STATE(35)] = 1147,
  [SMALL_STATE(36)] = 1166,
  [SMALL_STATE(37)] = 1187,
  [SMALL_STATE(38)] = 1208,
  [SMALL_STATE(39)] = 1230,
  [SMALL_STATE(40)] = 1252,
  [SMALL_STATE(41)] = 1274,
  [SMALL_STATE(42)] = 1296,
  [SMALL_STATE(43)] = 1318,
  [SMALL_STATE(44)] = 1340,
  [SMALL_STATE(45)] = 1362,
  [SMALL_STATE(46)] = 1384,
  [SMALL_STATE(47)] = 1406,
  [SMALL_STATE(48)] = 1428,
  [SMALL_STATE(49)] = 1450,
  [SMALL_STATE(50)] = 1472,
  [SMALL_STATE(51)] = 1489,
  [SMALL_STATE(52)] = 1506,
  [SMALL_STATE(53)] = 1523,
  [SMALL_STATE(54)] = 1540,
  [SMALL_STATE(55)] = 1557,
  [SMALL_STATE(56)] = 1574,
  [SMALL_STATE(57)] = 1591,
  [SMALL_STATE(58)] = 1610,
  [SMALL_STATE(59)] = 1627,
  [SMALL_STATE(60)] = 1644,
  [SMALL_STATE(61)] = 1661,
  [SMALL_STATE(62)] = 1678,
  [SMALL_STATE(63)] = 1697,
  [SMALL_STATE(64)] = 1716,
  [SMALL_STATE(65)] = 1735,
  [SMALL_STATE(66)] = 1752,
  [SMALL_STATE(67)] = 1769,
  [SMALL_STATE(68)] = 1785,
  [SMALL_STATE(69)] = 1801,
  [SMALL_STATE(70)] = 1817,
  [SMALL_STATE(71)] = 1833,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, .production_id = 13),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2, .production_id = 17),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2, .production_id = 17), SHIFT_REPEAT(7),
  [38] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2, .production_id = 17), SHIFT_REPEAT(25),
  [41] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2, .production_id = 17), SHIFT_REPEAT(33),
  [44] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2, .production_id = 17), SHIFT_REPEAT(37),
  [47] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2, .production_id = 17), SHIFT_REPEAT(36),
  [50] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2, .production_id = 17), SHIFT_REPEAT(53),
  [53] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2, .production_id = 17), SHIFT_REPEAT(22),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2, .production_id = 17), SHIFT_REPEAT(69),
  [59] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2, .production_id = 17), SHIFT_REPEAT(7),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, .production_id = 5),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_instruction_repeat1, 2),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_instruction_repeat1, 2), SHIFT_REPEAT(12),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_instruction_repeat1, 2), SHIFT_REPEAT(69),
  [72] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_instruction_repeat1, 2), SHIFT_REPEAT(12),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_instruction_repeat1, 2), SHIFT_REPEAT(67),
  [78] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_instruction_repeat1, 2), SHIFT_REPEAT(11),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 1, .production_id = 1),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 2, .production_id = 18),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 3, .production_id = 23),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 2, .production_id = 6),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__immediate_literal, 1),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__immediate_literal, 1),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__operand, 1),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__operand, 1),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 2, .production_id = 9),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label, 2, .production_id = 9),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_placeholder, 3),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_placeholder, 3),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_instruction_repeat1, 1),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_instruction_repeat1, 1),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2, .production_id = 4),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2, .production_id = 4),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [123] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(20),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2, .production_id = 3),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2, .production_id = 3),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2, .production_id = 2),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2, .production_id = 2),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 1),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 1),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [146] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [148] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_DW_repeat1, 2),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_DW_repeat1, 2),
  [154] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_DW_repeat1, 2), SHIFT_REPEAT(69),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [161] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(31),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2),
  [168] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(11),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label_def, 2),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label_def, 2),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_DW_repeat1, 1),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_DW_repeat1, 1),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 1),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, .production_id = 4),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, .production_id = 3),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, .production_id = 2),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, .production_id = 10),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, .production_id = 11),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, .production_id = 12),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 3, .production_id = 22),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 3, .production_id = 21),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, .production_id = 14),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, .production_id = 15),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, .production_id = 16),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 3, .production_id = 20),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_BITS, 3, .production_id = 19),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_RUN, 2, .production_id = 8),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_BITS, 2, .production_id = 7),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 3, .production_id = 25),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__dw_literal, 1),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 2),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_DW, 2, .production_id = 7),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_MINHEAP, 2, .production_id = 7),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_MINSTACK, 2, .production_id = 7),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_MINREG, 2, .production_id = 7),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__header, 1),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_DW, 3, .production_id = 24),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [235] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
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
