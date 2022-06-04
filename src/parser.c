#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 60
#define LARGE_STATE_COUNT 3
#define SYMBOL_COUNT 56
#define ALIAS_COUNT 0
#define TOKEN_COUNT 33
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 7
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 11

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
  sym_header_BITS = 36,
  sym_header_MINREG = 37,
  sym_header_MINHEAP = 38,
  sym_header_MINSTACK = 39,
  sym_header_RUN = 40,
  sym_define_word = 41,
  sym_label_def = 42,
  sym_label = 43,
  sym__operand = 44,
  sym_placeholder = 45,
  sym__dw_literal = 46,
  sym_array = 47,
  sym__immediate_literal = 48,
  sym__line = 49,
  sym_instruction = 50,
  aux_sym_source_file_repeat1 = 51,
  aux_sym_source_file_repeat2 = 52,
  aux_sym_define_word_repeat1 = 53,
  aux_sym_array_repeat1 = 54,
  aux_sym_instruction_repeat1 = 55,
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
  [sym_header_BITS] = "header_BITS",
  [sym_header_MINREG] = "header_MINREG",
  [sym_header_MINHEAP] = "header_MINHEAP",
  [sym_header_MINSTACK] = "header_MINSTACK",
  [sym_header_RUN] = "header_RUN",
  [sym_define_word] = "define_word",
  [sym_label_def] = "label_def",
  [sym_label] = "label",
  [sym__operand] = "_operand",
  [sym_placeholder] = "placeholder",
  [sym__dw_literal] = "_dw_literal",
  [sym_array] = "array",
  [sym__immediate_literal] = "_immediate_literal",
  [sym__line] = "_line",
  [sym_instruction] = "instruction",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_source_file_repeat2] = "source_file_repeat2",
  [aux_sym_define_word_repeat1] = "define_word_repeat1",
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
  [sym_header_BITS] = sym_header_BITS,
  [sym_header_MINREG] = sym_header_MINREG,
  [sym_header_MINHEAP] = sym_header_MINHEAP,
  [sym_header_MINSTACK] = sym_header_MINSTACK,
  [sym_header_RUN] = sym_header_RUN,
  [sym_define_word] = sym_define_word,
  [sym_label_def] = sym_label_def,
  [sym_label] = sym_label,
  [sym__operand] = sym__operand,
  [sym_placeholder] = sym_placeholder,
  [sym__dw_literal] = sym__dw_literal,
  [sym_array] = sym_array,
  [sym__immediate_literal] = sym__immediate_literal,
  [sym__line] = sym__line,
  [sym_instruction] = sym_instruction,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_source_file_repeat2] = aux_sym_source_file_repeat2,
  [aux_sym_define_word_repeat1] = aux_sym_define_word_repeat1,
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
  [sym_header_BITS] = {
    .visible = true,
    .named = true,
  },
  [sym_header_MINREG] = {
    .visible = true,
    .named = true,
  },
  [sym_header_MINHEAP] = {
    .visible = true,
    .named = true,
  },
  [sym_header_MINSTACK] = {
    .visible = true,
    .named = true,
  },
  [sym_header_RUN] = {
    .visible = true,
    .named = true,
  },
  [sym_define_word] = {
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
  [sym__line] = {
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
  [aux_sym_define_word_repeat1] = {
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
  field_header_type = 2,
  field_item = 3,
  field_label = 4,
  field_name = 5,
  field_operand = 6,
  field_value = 7,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_comparison] = "comparison",
  [field_header_type] = "header_type",
  [field_item] = "item",
  [field_label] = "label",
  [field_name] = "name",
  [field_operand] = "operand",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
  [3] = {.index = 3, .length = 1},
  [4] = {.index = 4, .length = 2},
  [5] = {.index = 6, .length = 1},
  [6] = {.index = 7, .length = 2},
  [7] = {.index = 9, .length = 2},
  [8] = {.index = 11, .length = 3},
  [9] = {.index = 14, .length = 2},
  [10] = {.index = 16, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 0},
  [1] =
    {field_name, 0},
    {field_operand, 1},
  [3] =
    {field_value, 1},
  [4] =
    {field_header_type, 0},
    {field_value, 1},
  [6] =
    {field_name, 1},
  [7] =
    {field_label, 0},
    {field_name, 1},
  [9] =
    {field_comparison, 1},
    {field_value, 2},
  [11] =
    {field_label, 0},
    {field_name, 1},
    {field_operand, 2},
  [14] =
    {field_label, 0},
    {field_value, 2},
  [16] =
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
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 34},
  [22] = {.lex_state = 7},
  [23] = {.lex_state = 7},
  [24] = {.lex_state = 7},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 7},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 7},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 7},
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
  [54] = {.lex_state = 8},
  [55] = {.lex_state = 33},
  [56] = {.lex_state = 9},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 9},
  [59] = {(TSStateId)(-1)},
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
    [sym_source_file] = STATE(57),
    [sym_comment] = STATE(1),
    [sym__header] = STATE(52),
    [sym_header_BITS] = STATE(39),
    [sym_header_MINREG] = STATE(39),
    [sym_header_MINHEAP] = STATE(39),
    [sym_header_MINSTACK] = STATE(39),
    [sym_header_RUN] = STATE(39),
    [sym_define_word] = STATE(52),
    [sym_label_def] = STATE(33),
    [sym_label] = STATE(50),
    [sym__line] = STATE(36),
    [sym_instruction] = STATE(52),
    [aux_sym_source_file_repeat1] = STATE(2),
    [aux_sym_source_file_repeat2] = STATE(5),
    [aux_sym_define_word_repeat1] = STATE(23),
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
    [sym__header] = STATE(52),
    [sym_header_BITS] = STATE(39),
    [sym_header_MINREG] = STATE(39),
    [sym_header_MINHEAP] = STATE(39),
    [sym_header_MINSTACK] = STATE(39),
    [sym_header_RUN] = STATE(39),
    [sym_define_word] = STATE(52),
    [sym_label_def] = STATE(33),
    [sym_label] = STATE(50),
    [sym__line] = STATE(38),
    [sym_instruction] = STATE(52),
    [aux_sym_source_file_repeat1] = STATE(16),
    [aux_sym_source_file_repeat2] = STATE(3),
    [aux_sym_define_word_repeat1] = STATE(23),
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
  [0] = 20,
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
      aux_sym_define_word_repeat1,
    STATE(33), 1,
      sym_label_def,
    STATE(37), 1,
      sym__line,
    STATE(50), 1,
      sym_label,
    ACTIONS(7), 2,
      sym_macro,
      aux_sym_comment_token2,
    STATE(52), 3,
      sym__header,
      sym_define_word,
      sym_instruction,
    STATE(39), 5,
      sym_header_BITS,
      sym_header_MINREG,
      sym_header_MINHEAP,
      sym_header_MINSTACK,
      sym_header_RUN,
  [68] = 20,
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
      aux_sym_define_word_repeat1,
    STATE(33), 1,
      sym_label_def,
    STATE(49), 1,
      sym__line,
    STATE(50), 1,
      sym_label,
    STATE(4), 2,
      sym_comment,
      aux_sym_source_file_repeat2,
    STATE(52), 3,
      sym__header,
      sym_define_word,
      sym_instruction,
    STATE(39), 5,
      sym_header_BITS,
      sym_header_MINREG,
      sym_header_MINHEAP,
      sym_header_MINSTACK,
      sym_header_RUN,
  [136] = 20,
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
    ACTIONS(29), 1,
      ts_builtin_sym_end,
    STATE(4), 1,
      aux_sym_source_file_repeat2,
    STATE(5), 1,
      sym_comment,
    STATE(23), 1,
      aux_sym_define_word_repeat1,
    STATE(33), 1,
      sym_label_def,
    STATE(38), 1,
      sym__line,
    STATE(50), 1,
      sym_label,
    ACTIONS(7), 2,
      sym_macro,
      aux_sym_comment_token2,
    STATE(52), 3,
      sym__header,
      sym_define_word,
      sym_instruction,
    STATE(39), 5,
      sym_header_BITS,
      sym_header_MINREG,
      sym_header_MINHEAP,
      sym_header_MINSTACK,
      sym_header_RUN,
  [204] = 13,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(25), 1,
      anon_sym_DOT,
    ACTIONS(68), 1,
      anon_sym_LT,
    STATE(6), 1,
      sym_comment,
    STATE(9), 1,
      aux_sym_instruction_repeat1,
    STATE(15), 1,
      sym__operand,
    ACTIONS(62), 2,
      ts_builtin_sym_end,
      sym__newline,
    ACTIONS(64), 3,
      sym_macro,
      sym_relative,
      sym_port,
    ACTIONS(70), 3,
      sym_number,
      sym_char,
      sym_char_escape,
    STATE(14), 3,
      sym_label,
      sym_placeholder,
      sym__immediate_literal,
    ACTIONS(66), 5,
      sym_register,
      sym_program_counter,
      sym_stack_pointer,
      sym_identifier,
      sym_memory,
  [255] = 13,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(25), 1,
      anon_sym_DOT,
    ACTIONS(68), 1,
      anon_sym_LT,
    STATE(7), 1,
      sym_comment,
    STATE(8), 1,
      aux_sym_instruction_repeat1,
    STATE(15), 1,
      sym__operand,
    ACTIONS(72), 2,
      ts_builtin_sym_end,
      sym__newline,
    ACTIONS(64), 3,
      sym_macro,
      sym_relative,
      sym_port,
    ACTIONS(70), 3,
      sym_number,
      sym_char,
      sym_char_escape,
    STATE(14), 3,
      sym_label,
      sym_placeholder,
      sym__immediate_literal,
    ACTIONS(66), 5,
      sym_register,
      sym_program_counter,
      sym_stack_pointer,
      sym_identifier,
      sym_memory,
  [306] = 13,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(25), 1,
      anon_sym_DOT,
    ACTIONS(68), 1,
      anon_sym_LT,
    STATE(8), 1,
      sym_comment,
    STATE(9), 1,
      aux_sym_instruction_repeat1,
    STATE(15), 1,
      sym__operand,
    ACTIONS(74), 2,
      ts_builtin_sym_end,
      sym__newline,
    ACTIONS(64), 3,
      sym_macro,
      sym_relative,
      sym_port,
    ACTIONS(70), 3,
      sym_number,
      sym_char,
      sym_char_escape,
    STATE(14), 3,
      sym_label,
      sym_placeholder,
      sym__immediate_literal,
    ACTIONS(66), 5,
      sym_register,
      sym_program_counter,
      sym_stack_pointer,
      sym_identifier,
      sym_memory,
  [357] = 12,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(81), 1,
      anon_sym_DOT,
    ACTIONS(87), 1,
      anon_sym_LT,
    STATE(15), 1,
      sym__operand,
    ACTIONS(76), 2,
      ts_builtin_sym_end,
      sym__newline,
    STATE(9), 2,
      sym_comment,
      aux_sym_instruction_repeat1,
    ACTIONS(78), 3,
      sym_macro,
      sym_relative,
      sym_port,
    ACTIONS(90), 3,
      sym_number,
      sym_char,
      sym_char_escape,
    STATE(14), 3,
      sym_label,
      sym_placeholder,
      sym__immediate_literal,
    ACTIONS(84), 5,
      sym_register,
      sym_program_counter,
      sym_stack_pointer,
      sym_identifier,
      sym_memory,
  [406] = 13,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(25), 1,
      anon_sym_DOT,
    ACTIONS(68), 1,
      anon_sym_LT,
    STATE(6), 1,
      aux_sym_instruction_repeat1,
    STATE(10), 1,
      sym_comment,
    STATE(15), 1,
      sym__operand,
    ACTIONS(93), 2,
      ts_builtin_sym_end,
      sym__newline,
    ACTIONS(64), 3,
      sym_macro,
      sym_relative,
      sym_port,
    ACTIONS(70), 3,
      sym_number,
      sym_char,
      sym_char_escape,
    STATE(14), 3,
      sym_label,
      sym_placeholder,
      sym__immediate_literal,
    ACTIONS(66), 5,
      sym_register,
      sym_program_counter,
      sym_stack_pointer,
      sym_identifier,
      sym_memory,
  [457] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(11), 1,
      sym_comment,
    ACTIONS(97), 5,
      sym_register,
      sym_program_counter,
      sym_stack_pointer,
      sym_identifier,
      sym_memory,
    ACTIONS(95), 11,
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
  [490] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(12), 1,
      sym_comment,
    ACTIONS(101), 5,
      sym_register,
      sym_program_counter,
      sym_stack_pointer,
      sym_identifier,
      sym_memory,
    ACTIONS(99), 10,
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
  [522] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(13), 1,
      sym_comment,
    ACTIONS(105), 5,
      sym_register,
      sym_program_counter,
      sym_stack_pointer,
      sym_identifier,
      sym_memory,
    ACTIONS(103), 10,
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
  [554] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(14), 1,
      sym_comment,
    ACTIONS(109), 5,
      sym_register,
      sym_program_counter,
      sym_stack_pointer,
      sym_identifier,
      sym_memory,
    ACTIONS(107), 10,
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
  [586] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(15), 1,
      sym_comment,
    ACTIONS(113), 5,
      sym_register,
      sym_program_counter,
      sym_stack_pointer,
      sym_identifier,
      sym_memory,
    ACTIONS(111), 10,
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
  [618] = 7,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(117), 1,
      sym__newline,
    STATE(16), 2,
      sym_comment,
      aux_sym_source_file_repeat1,
    ACTIONS(115), 3,
      ts_builtin_sym_end,
      sym_macro,
      anon_sym_DOT,
    ACTIONS(120), 7,
      anon_sym_BITS,
      anon_sym_MINREG,
      anon_sym_MINHEAP,
      anon_sym_MINSTACK,
      anon_sym_RUN,
      anon_sym_DW,
      sym_identifier,
  [649] = 8,
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
    STATE(17), 1,
      sym_comment,
    ACTIONS(33), 3,
      ts_builtin_sym_end,
      sym_macro,
      anon_sym_DOT,
    ACTIONS(122), 7,
      anon_sym_BITS,
      anon_sym_MINREG,
      anon_sym_MINHEAP,
      anon_sym_MINSTACK,
      anon_sym_RUN,
      anon_sym_DW,
      sym_identifier,
  [682] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(18), 1,
      sym_comment,
    ACTIONS(124), 4,
      ts_builtin_sym_end,
      sym_macro,
      sym__newline,
      anon_sym_DOT,
    ACTIONS(126), 7,
      anon_sym_BITS,
      anon_sym_MINREG,
      anon_sym_MINHEAP,
      anon_sym_MINSTACK,
      anon_sym_RUN,
      anon_sym_DW,
      sym_identifier,
  [710] = 9,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(128), 1,
      anon_sym_LBRACK,
    ACTIONS(130), 1,
      sym_string,
    STATE(19), 1,
      sym_comment,
    STATE(51), 1,
      sym__dw_literal,
    STATE(42), 2,
      sym_array,
      sym__immediate_literal,
    ACTIONS(70), 3,
      sym_number,
      sym_char,
      sym_char_escape,
  [741] = 9,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(128), 1,
      anon_sym_LBRACK,
    ACTIONS(130), 1,
      sym_string,
    STATE(20), 1,
      sym_comment,
    STATE(40), 1,
      sym__dw_literal,
    STATE(42), 2,
      sym_array,
      sym__immediate_literal,
    ACTIONS(70), 3,
      sym_number,
      sym_char,
      sym_char_escape,
  [772] = 7,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(21), 1,
      sym_comment,
    STATE(48), 1,
      sym__immediate_literal,
    ACTIONS(70), 3,
      sym_number,
      sym_char,
      sym_char_escape,
    ACTIONS(132), 3,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
  [798] = 9,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(134), 1,
      sym_macro,
    ACTIONS(138), 1,
      anon_sym_DOT,
    STATE(33), 1,
      sym_label_def,
    STATE(50), 1,
      sym_label,
    ACTIONS(136), 2,
      anon_sym_DW,
      sym_identifier,
    STATE(22), 2,
      sym_comment,
      aux_sym_define_word_repeat1,
  [828] = 11,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(25), 1,
      anon_sym_DOT,
    ACTIONS(141), 1,
      sym_macro,
    ACTIONS(143), 1,
      anon_sym_DW,
    ACTIONS(145), 1,
      sym_identifier,
    STATE(22), 1,
      aux_sym_define_word_repeat1,
    STATE(23), 1,
      sym_comment,
    STATE(33), 1,
      sym_label_def,
    STATE(50), 1,
      sym_label,
  [862] = 8,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(149), 1,
      sym__newline,
    STATE(24), 1,
      sym_comment,
    STATE(27), 1,
      aux_sym_source_file_repeat1,
    ACTIONS(147), 2,
      sym_macro,
      anon_sym_DOT,
    ACTIONS(151), 2,
      anon_sym_DW,
      sym_identifier,
  [889] = 8,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(153), 1,
      anon_sym_RBRACK,
    STATE(25), 1,
      sym_comment,
    STATE(28), 1,
      aux_sym_array_repeat1,
    STATE(31), 1,
      sym__immediate_literal,
    ACTIONS(70), 3,
      sym_number,
      sym_char,
      sym_char_escape,
  [916] = 8,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(155), 1,
      anon_sym_RBRACK,
    STATE(25), 1,
      aux_sym_array_repeat1,
    STATE(26), 1,
      sym_comment,
    STATE(31), 1,
      sym__immediate_literal,
    ACTIONS(70), 3,
      sym_number,
      sym_char,
      sym_char_escape,
  [943] = 7,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(157), 1,
      sym__newline,
    ACTIONS(115), 2,
      sym_macro,
      anon_sym_DOT,
    ACTIONS(120), 2,
      anon_sym_DW,
      sym_identifier,
    STATE(27), 2,
      sym_comment,
      aux_sym_source_file_repeat1,
  [968] = 7,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(160), 1,
      anon_sym_RBRACK,
    STATE(31), 1,
      sym__immediate_literal,
    STATE(28), 2,
      sym_comment,
      aux_sym_array_repeat1,
    ACTIONS(162), 3,
      sym_number,
      sym_char,
      sym_char_escape,
  [993] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(29), 1,
      sym_comment,
    ACTIONS(126), 2,
      anon_sym_DW,
      sym_identifier,
    ACTIONS(124), 3,
      sym_macro,
      sym__newline,
      anon_sym_DOT,
  [1015] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(30), 1,
      sym_comment,
    STATE(45), 1,
      sym__immediate_literal,
    ACTIONS(70), 3,
      sym_number,
      sym_char,
      sym_char_escape,
  [1036] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(31), 1,
      sym_comment,
    ACTIONS(165), 4,
      anon_sym_RBRACK,
      sym_number,
      sym_char,
      sym_char_escape,
  [1055] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(32), 1,
      sym_comment,
    STATE(47), 1,
      sym__immediate_literal,
    ACTIONS(70), 3,
      sym_number,
      sym_char,
      sym_char_escape,
  [1076] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(33), 1,
      sym_comment,
    ACTIONS(167), 2,
      sym_macro,
      anon_sym_DOT,
    ACTIONS(169), 2,
      anon_sym_DW,
      sym_identifier,
  [1097] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(34), 1,
      sym_comment,
    STATE(43), 1,
      sym__immediate_literal,
    ACTIONS(70), 3,
      sym_number,
      sym_char,
      sym_char_escape,
  [1118] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(35), 1,
      sym_comment,
    STATE(44), 1,
      sym__immediate_literal,
    ACTIONS(70), 3,
      sym_number,
      sym_char,
      sym_char_escape,
  [1139] = 7,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(11), 1,
      sym__newline,
    ACTIONS(29), 1,
      ts_builtin_sym_end,
    STATE(17), 1,
      aux_sym_source_file_repeat1,
    STATE(36), 1,
      sym_comment,
  [1161] = 7,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(11), 1,
      sym__newline,
    ACTIONS(171), 1,
      ts_builtin_sym_end,
    STATE(17), 1,
      aux_sym_source_file_repeat1,
    STATE(37), 1,
      sym_comment,
  [1183] = 7,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(11), 1,
      sym__newline,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    STATE(17), 1,
      aux_sym_source_file_repeat1,
    STATE(38), 1,
      sym_comment,
  [1205] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(39), 1,
      sym_comment,
    ACTIONS(173), 2,
      ts_builtin_sym_end,
      sym__newline,
  [1222] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(40), 1,
      sym_comment,
    ACTIONS(175), 2,
      ts_builtin_sym_end,
      sym__newline,
  [1239] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(41), 1,
      sym_comment,
    ACTIONS(177), 2,
      ts_builtin_sym_end,
      sym__newline,
  [1256] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(42), 1,
      sym_comment,
    ACTIONS(179), 2,
      ts_builtin_sym_end,
      sym__newline,
  [1273] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(43), 1,
      sym_comment,
    ACTIONS(181), 2,
      ts_builtin_sym_end,
      sym__newline,
  [1290] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(44), 1,
      sym_comment,
    ACTIONS(183), 2,
      ts_builtin_sym_end,
      sym__newline,
  [1307] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(45), 1,
      sym_comment,
    ACTIONS(185), 2,
      ts_builtin_sym_end,
      sym__newline,
  [1324] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(46), 1,
      sym_comment,
    ACTIONS(187), 2,
      ts_builtin_sym_end,
      sym__newline,
  [1341] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(47), 1,
      sym_comment,
    ACTIONS(189), 2,
      ts_builtin_sym_end,
      sym__newline,
  [1358] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(48), 1,
      sym_comment,
    ACTIONS(191), 2,
      ts_builtin_sym_end,
      sym__newline,
  [1375] = 6,
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
    STATE(49), 1,
      sym_comment,
  [1394] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(149), 1,
      sym__newline,
    STATE(24), 1,
      aux_sym_source_file_repeat1,
    STATE(50), 1,
      sym_comment,
  [1413] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(51), 1,
      sym_comment,
    ACTIONS(193), 2,
      ts_builtin_sym_end,
      sym__newline,
  [1430] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(52), 1,
      sym_comment,
    ACTIONS(195), 2,
      ts_builtin_sym_end,
      sym__newline,
  [1447] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(53), 1,
      sym_comment,
    ACTIONS(197), 2,
      ts_builtin_sym_end,
      sym__newline,
  [1464] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(54), 1,
      sym_comment,
    ACTIONS(199), 2,
      anon_sym_RAM,
      anon_sym_ROM,
  [1481] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(201), 1,
      anon_sym_GT,
    STATE(55), 1,
      sym_comment,
  [1497] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(203), 1,
      sym_identifier,
    STATE(56), 1,
      sym_comment,
  [1513] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(205), 1,
      ts_builtin_sym_end,
    STATE(57), 1,
      sym_comment,
  [1529] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(207), 1,
      sym_identifier,
    STATE(58), 1,
      sym_comment,
  [1545] = 1,
    ACTIONS(209), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(3)] = 0,
  [SMALL_STATE(4)] = 68,
  [SMALL_STATE(5)] = 136,
  [SMALL_STATE(6)] = 204,
  [SMALL_STATE(7)] = 255,
  [SMALL_STATE(8)] = 306,
  [SMALL_STATE(9)] = 357,
  [SMALL_STATE(10)] = 406,
  [SMALL_STATE(11)] = 457,
  [SMALL_STATE(12)] = 490,
  [SMALL_STATE(13)] = 522,
  [SMALL_STATE(14)] = 554,
  [SMALL_STATE(15)] = 586,
  [SMALL_STATE(16)] = 618,
  [SMALL_STATE(17)] = 649,
  [SMALL_STATE(18)] = 682,
  [SMALL_STATE(19)] = 710,
  [SMALL_STATE(20)] = 741,
  [SMALL_STATE(21)] = 772,
  [SMALL_STATE(22)] = 798,
  [SMALL_STATE(23)] = 828,
  [SMALL_STATE(24)] = 862,
  [SMALL_STATE(25)] = 889,
  [SMALL_STATE(26)] = 916,
  [SMALL_STATE(27)] = 943,
  [SMALL_STATE(28)] = 968,
  [SMALL_STATE(29)] = 993,
  [SMALL_STATE(30)] = 1015,
  [SMALL_STATE(31)] = 1036,
  [SMALL_STATE(32)] = 1055,
  [SMALL_STATE(33)] = 1076,
  [SMALL_STATE(34)] = 1097,
  [SMALL_STATE(35)] = 1118,
  [SMALL_STATE(36)] = 1139,
  [SMALL_STATE(37)] = 1161,
  [SMALL_STATE(38)] = 1183,
  [SMALL_STATE(39)] = 1205,
  [SMALL_STATE(40)] = 1222,
  [SMALL_STATE(41)] = 1239,
  [SMALL_STATE(42)] = 1256,
  [SMALL_STATE(43)] = 1273,
  [SMALL_STATE(44)] = 1290,
  [SMALL_STATE(45)] = 1307,
  [SMALL_STATE(46)] = 1324,
  [SMALL_STATE(47)] = 1341,
  [SMALL_STATE(48)] = 1358,
  [SMALL_STATE(49)] = 1375,
  [SMALL_STATE(50)] = 1394,
  [SMALL_STATE(51)] = 1413,
  [SMALL_STATE(52)] = 1430,
  [SMALL_STATE(53)] = 1447,
  [SMALL_STATE(54)] = 1464,
  [SMALL_STATE(55)] = 1481,
  [SMALL_STATE(56)] = 1497,
  [SMALL_STATE(57)] = 1513,
  [SMALL_STATE(58)] = 1529,
  [SMALL_STATE(59)] = 1545,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(10),
  [38] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(21),
  [41] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(32),
  [44] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(35),
  [47] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(34),
  [50] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(54),
  [53] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(20),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(58),
  [59] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(10),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 2, .production_id = 2),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [66] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 2, .production_id = 6),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 3, .production_id = 8),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_instruction_repeat1, 2),
  [78] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_instruction_repeat1, 2), SHIFT_REPEAT(14),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_instruction_repeat1, 2), SHIFT_REPEAT(58),
  [84] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_instruction_repeat1, 2), SHIFT_REPEAT(14),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_instruction_repeat1, 2), SHIFT_REPEAT(56),
  [90] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_instruction_repeat1, 2), SHIFT_REPEAT(11),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 1, .production_id = 1),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__immediate_literal, 1),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__immediate_literal, 1),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_placeholder, 3),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_placeholder, 3),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 2, .production_id = 5),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label, 2, .production_id = 5),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__operand, 1),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__operand, 1),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_instruction_repeat1, 1),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_instruction_repeat1, 1),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [117] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(18),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 1),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 1),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_define_word_repeat1, 2),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_define_word_repeat1, 2),
  [138] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_define_word_repeat1, 2), SHIFT_REPEAT(58),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label_def, 2),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label_def, 2),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [157] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(29),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2),
  [162] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(11),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 1),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_define_word_repeat1, 1),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_define_word_repeat1, 1),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 3),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__header, 1),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_define_word, 2, .production_id = 3),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header_RUN, 2, .production_id = 4),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__dw_literal, 1),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header_MINSTACK, 2, .production_id = 3),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header_MINHEAP, 2, .production_id = 3),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header_BITS, 3, .production_id = 7),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 2),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header_MINREG, 2, .production_id = 3),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header_BITS, 2, .production_id = 3),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_define_word, 3, .production_id = 9),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__line, 1),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 3, .production_id = 10),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [205] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
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
