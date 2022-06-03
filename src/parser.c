#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 68
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 59
#define ALIAS_COUNT 0
#define TOKEN_COUNT 36
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 6
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 11

enum {
  sym_macro = 1,
  sym__whitespace = 2,
  sym__newline = 3,
  anon_sym_SLASH_SLASH = 4,
  aux_sym_comment_token1 = 5,
  anon_sym_SLASH_STAR = 6,
  aux_sym_comment_token2 = 7,
  anon_sym_SLASH = 8,
  anon_sym_BITS = 9,
  anon_sym_LT_EQ = 10,
  anon_sym_EQ_EQ = 11,
  anon_sym_GT_EQ = 12,
  anon_sym_MINREG = 13,
  anon_sym_MINHEAP = 14,
  anon_sym_MINSTACK = 15,
  anon_sym_RUN = 16,
  anon_sym_RAM = 17,
  anon_sym_ROM = 18,
  anon_sym_DW = 19,
  anon_sym_DOT = 20,
  sym_register = 21,
  sym_program_counter = 22,
  sym_stack_pointer = 23,
  anon_sym_LT = 24,
  anon_sym_GT = 25,
  sym_identifier = 26,
  anon_sym_LBRACK = 27,
  anon_sym_RBRACK = 28,
  sym_string = 29,
  sym_number = 30,
  sym_char = 31,
  sym_char_escape = 32,
  sym_relative = 33,
  sym_memory = 34,
  sym_port = 35,
  sym_source_file = 36,
  sym_comment = 37,
  sym__header = 38,
  sym_header_BITS = 39,
  sym_header_MINREG = 40,
  sym_header_MINHEAP = 41,
  sym_header_MINSTACK = 42,
  sym_header_RUN = 43,
  sym_define_word = 44,
  sym_label_def = 45,
  sym_label = 46,
  sym__operand = 47,
  sym_placeholder = 48,
  sym__dw_literal = 49,
  sym_array = 50,
  sym__immediate_literal = 51,
  sym__line = 52,
  sym_instruction = 53,
  aux_sym_source_file_repeat1 = 54,
  aux_sym_source_file_repeat2 = 55,
  aux_sym_array_repeat1 = 56,
  aux_sym_instruction_repeat1 = 57,
  aux_sym_instruction_repeat2 = 58,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_macro] = "macro",
  [sym__whitespace] = "_whitespace",
  [sym__newline] = "_newline",
  [anon_sym_SLASH_SLASH] = "//",
  [aux_sym_comment_token1] = "comment_token1",
  [anon_sym_SLASH_STAR] = "/*",
  [aux_sym_comment_token2] = "comment_token2",
  [anon_sym_SLASH] = "/",
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
  [aux_sym_array_repeat1] = "array_repeat1",
  [aux_sym_instruction_repeat1] = "instruction_repeat1",
  [aux_sym_instruction_repeat2] = "instruction_repeat2",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_macro] = sym_macro,
  [sym__whitespace] = sym__whitespace,
  [sym__newline] = sym__newline,
  [anon_sym_SLASH_SLASH] = anon_sym_SLASH_SLASH,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [anon_sym_SLASH_STAR] = anon_sym_SLASH_STAR,
  [aux_sym_comment_token2] = aux_sym_comment_token2,
  [anon_sym_SLASH] = anon_sym_SLASH,
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
  [aux_sym_array_repeat1] = aux_sym_array_repeat1,
  [aux_sym_instruction_repeat1] = aux_sym_instruction_repeat1,
  [aux_sym_instruction_repeat2] = aux_sym_instruction_repeat2,
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
  [anon_sym_SLASH_SLASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SLASH_STAR] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_comment_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
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
  [aux_sym_array_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_instruction_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_instruction_repeat2] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_comparison = 1,
  field_header_type = 2,
  field_label = 3,
  field_name = 4,
  field_operand = 5,
  field_value = 6,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_comparison] = "comparison",
  [field_header_type] = "header_type",
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
  [7] = {.index = 9, .length = 1},
  [8] = {.index = 10, .length = 2},
  [9] = {.index = 12, .length = 2},
  [10] = {.index = 14, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 0},
  [1] =
    {field_name, 0},
    {field_operand, 1, .inherited = true},
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
    {field_operand, 1},
  [10] =
    {field_operand, 0, .inherited = true},
    {field_operand, 1, .inherited = true},
  [12] =
    {field_comparison, 1},
    {field_value, 2},
  [14] =
    {field_label, 0},
    {field_name, 1},
    {field_operand, 2, .inherited = true},
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
      if (eof) ADVANCE(38);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '#') ADVANCE(11);
      if (lookahead == '$') ADVANCE(12);
      if (lookahead == '%') ADVANCE(34);
      if (lookahead == '\'') ADVANCE(23);
      if (lookahead == '.') ADVANCE(68);
      if (lookahead == '/') ADVANCE(54);
      if (lookahead == '0') ADVANCE(105);
      if (lookahead == '<') ADVANCE(76);
      if (lookahead == '=') ADVANCE(18);
      if (lookahead == '>') ADVANCE(78);
      if (lookahead == '@') ADVANCE(35);
      if (lookahead == 'A' ||
          lookahead == 'C' ||
          ('E' <= lookahead && lookahead <= 'L') ||
          lookahead == 'N' ||
          lookahead == 'O' ||
          lookahead == 'Q' ||
          ('T' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      if (lookahead == 'B') ADVANCE(86);
      if (lookahead == 'D') ADVANCE(98);
      if (lookahead == 'M') ADVANCE(13);
      if (lookahead == 'P') ADVANCE(80);
      if (lookahead == 'R') ADVANCE(15);
      if (lookahead == 'S') ADVANCE(92);
      if (lookahead == '[') ADVANCE(102);
      if (lookahead == ']') ADVANCE(103);
      if (lookahead == '~') ADVANCE(24);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(43);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(10);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(108);
      if (sym__whitespace_character_set_1(lookahead)) ADVANCE(40);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(104);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '\'') ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '#') ADVANCE(11);
      if (lookahead == '$') ADVANCE(12);
      if (lookahead == '%') ADVANCE(34);
      if (lookahead == '\'') ADVANCE(23);
      if (lookahead == '.') ADVANCE(68);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == '0') ADVANCE(105);
      if (lookahead == '<') ADVANCE(75);
      if (lookahead == '>') ADVANCE(77);
      if (lookahead == '@') ADVANCE(35);
      if (('A' <= lookahead && lookahead <= 'L') ||
          lookahead == 'N' ||
          lookahead == 'O' ||
          lookahead == 'Q' ||
          ('T' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      if (lookahead == 'M') ADVANCE(14);
      if (lookahead == 'P') ADVANCE(82);
      if (lookahead == 'R') ADVANCE(16);
      if (lookahead == 'S') ADVANCE(94);
      if (lookahead == '~') ADVANCE(24);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(43);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(10);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(108);
      if (sym__whitespace_character_set_1(lookahead)) ADVANCE(40);
      END_STATE();
    case 3:
      if (lookahead == '\'') ADVANCE(110);
      END_STATE();
    case 4:
      if (lookahead == '\'') ADVANCE(111);
      END_STATE();
    case 5:
      if (lookahead == '*') ADVANCE(50);
      if (lookahead == '/') ADVANCE(44);
      END_STATE();
    case 6:
      if (lookahead == '*') ADVANCE(53);
      if (lookahead == '/') ADVANCE(8);
      if (sym__whitespace_character_set_2(lookahead)) ADVANCE(41);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 7:
      if (lookahead == '*') ADVANCE(53);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '*') ADVANCE(51);
      if (lookahead == '/') ADVANCE(45);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 9:
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == 'R') ADVANCE(20);
      if (sym__whitespace_character_set_2(lookahead)) ADVANCE(40);
      END_STATE();
    case 10:
      if (lookahead == '0') ADVANCE(105);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(108);
      END_STATE();
    case 11:
      if (lookahead == '0') ADVANCE(113);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(114);
      END_STATE();
    case 12:
      if (lookahead == '0') ADVANCE(69);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(70);
      END_STATE();
    case 13:
      if (lookahead == '0') ADVANCE(116);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(115);
      if (('A' <= lookahead && lookahead <= 'H') ||
          ('J' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      if (lookahead == 'I') ADVANCE(90);
      END_STATE();
    case 14:
      if (lookahead == '0') ADVANCE(116);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(115);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 15:
      if (lookahead == '0') ADVANCE(72);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(71);
      if (lookahead == 'A') ADVANCE(88);
      if (('B' <= lookahead && lookahead <= 'N') ||
          ('P' <= lookahead && lookahead <= 'T') ||
          ('V' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      if (lookahead == 'O') ADVANCE(89);
      if (lookahead == 'U') ADVANCE(91);
      END_STATE();
    case 16:
      if (lookahead == '0') ADVANCE(72);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(71);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 17:
      if (lookahead == '=') ADVANCE(56);
      END_STATE();
    case 18:
      if (lookahead == '=') ADVANCE(57);
      END_STATE();
    case 19:
      if (lookahead == '=') ADVANCE(58);
      END_STATE();
    case 20:
      if (lookahead == 'A') ADVANCE(21);
      if (lookahead == 'O') ADVANCE(22);
      END_STATE();
    case 21:
      if (lookahead == 'M') ADVANCE(63);
      END_STATE();
    case 22:
      if (lookahead == 'M') ADVANCE(65);
      END_STATE();
    case 23:
      if (lookahead == '\\') ADVANCE(26);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '\'') ADVANCE(3);
      END_STATE();
    case 24:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(28);
      END_STATE();
    case 25:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(106);
      END_STATE();
    case 26:
      if (lookahead == '\'' ||
          lookahead == '0' ||
          lookahead == '\\' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't') ADVANCE(4);
      END_STATE();
    case 27:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(107);
      END_STATE();
    case 28:
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(112);
      END_STATE();
    case 29:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(31);
      if (('A' <= lookahead && lookahead <= 'H') ||
          ('J' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      if (lookahead == 'I') ADVANCE(90);
      END_STATE();
    case 30:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(31);
      if (('A' <= lookahead && lookahead <= 'T') ||
          ('V' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      if (lookahead == 'U') ADVANCE(91);
      END_STATE();
    case 31:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(31);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 32:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(109);
      END_STATE();
    case 33:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 34:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      END_STATE();
    case 35:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    case 36:
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1);
      END_STATE();
    case 37:
      if (eof) ADVANCE(38);
      if (lookahead == '\'') ADVANCE(23);
      if (lookahead == '.') ADVANCE(68);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == '0') ADVANCE(105);
      if (lookahead == '<') ADVANCE(17);
      if (lookahead == '=') ADVANCE(18);
      if (lookahead == '>') ADVANCE(19);
      if (lookahead == '@') ADVANCE(35);
      if (lookahead == 'A' ||
          lookahead == 'C' ||
          ('E' <= lookahead && lookahead <= 'L') ||
          lookahead == 'N' ||
          lookahead == 'O' ||
          lookahead == 'Q' ||
          ('T' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      if (lookahead == 'B') ADVANCE(86);
      if (lookahead == 'D') ADVANCE(98);
      if (lookahead == 'M') ADVANCE(29);
      if (lookahead == 'P') ADVANCE(82);
      if (lookahead == 'R') ADVANCE(30);
      if (lookahead == 'S') ADVANCE(94);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(43);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(10);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(108);
      if (sym__whitespace_character_set_1(lookahead)) ADVANCE(40);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_macro);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym__whitespace);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '*') ADVANCE(53);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(49);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym__newline);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead == '*') ADVANCE(53);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(49);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '*') ADVANCE(52);
      if (lookahead == '/') ADVANCE(46);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(49);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '/') ADVANCE(47);
      if (sym__whitespace_character_set_2(lookahead)) ADVANCE(42);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead)) ADVANCE(49);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(49);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      if (lookahead == '*') ADVANCE(53);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(7);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(49);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '*') ADVANCE(53);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(7);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(50);
      if (lookahead == '/') ADVANCE(44);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_BITS);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_MINREG);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_MINHEAP);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_MINSTACK);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_RUN);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_RAM);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_RAM);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_ROM);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_ROM);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_DW);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_register);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == '0') ADVANCE(70);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(70);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == '0') ADVANCE(71);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(71);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_register);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(31);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_program_counter);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_stack_pointer);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(56);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(58);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'G') ||
          ('I' <= lookahead && lookahead <= 'Q') ||
          ('T' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      if (lookahead == 'H') ADVANCE(83);
      if (lookahead == 'R') ADVANCE(84);
      if (lookahead == 'S') ADVANCE(97);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'A' ||
          lookahead == 'B' ||
          ('D' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      if (lookahead == 'C') ADVANCE(73);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'A' ||
          lookahead == 'B' ||
          ('D' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      if (lookahead == 'C') ADVANCE(87);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'A' ||
          lookahead == 'B' ||
          ('D' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      if (lookahead == 'C') ADVANCE(33);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'D') ||
          ('F' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      if (lookahead == 'E') ADVANCE(100);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'D') ||
          ('F' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      if (lookahead == 'E') ADVANCE(85);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('H' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      if (lookahead == 'G') ADVANCE(59);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'H') ||
          ('J' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      if (lookahead == 'I') ADVANCE(96);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'J') ||
          ('L' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      if (lookahead == 'K') ADVANCE(61);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'L') ||
          ('N' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      if (lookahead == 'M') ADVANCE(64);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'L') ||
          ('N' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      if (lookahead == 'M') ADVANCE(66);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'M') ||
          ('O' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      if (lookahead == 'N') ADVANCE(79);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'M') ||
          ('O' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      if (lookahead == 'N') ADVANCE(62);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'O') ||
          ('Q' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      if (lookahead == 'P') ADVANCE(74);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'O') ||
          ('Q' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      if (lookahead == 'P') ADVANCE(60);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'O') ||
          ('Q' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      if (lookahead == 'P') ADVANCE(33);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'R') ||
          ('T' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      if (lookahead == 'S') ADVANCE(55);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'S') ||
          ('U' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      if (lookahead == 'T') ADVANCE(95);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'S') ||
          ('U' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      if (lookahead == 'T') ADVANCE(99);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'V') ||
          ('X' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      if (lookahead == 'W') ADVANCE(67);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      if (lookahead == 'A') ADVANCE(81);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      if (lookahead == 'A') ADVANCE(93);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'b') ADVANCE(25);
      if (lookahead == 'o') ADVANCE(27);
      if (lookahead == 'x') ADVANCE(32);
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
      ACCEPT_TOKEN(sym_char);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_char_escape);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_relative);
      if (lookahead == '0') ADVANCE(112);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(112);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_memory);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_memory);
      if (lookahead == '0') ADVANCE(114);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(114);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_memory);
      if (lookahead == '0') ADVANCE(115);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(115);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_memory);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(31);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_port);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 37},
  [2] = {.lex_state = 37},
  [3] = {.lex_state = 37},
  [4] = {.lex_state = 37},
  [5] = {.lex_state = 37},
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 37},
  [8] = {.lex_state = 37},
  [9] = {.lex_state = 37},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 37},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 2},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 2},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 2},
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
  [45] = {.lex_state = 9},
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
  [58] = {.lex_state = 2},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 2},
  [61] = {.lex_state = 2},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 48},
  [64] = {.lex_state = 6},
  [65] = {.lex_state = 2},
  [66] = {(TSStateId)(-1)},
  [67] = {(TSStateId)(-1)},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_comment] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_macro] = ACTIONS(1),
    [sym__whitespace] = ACTIONS(3),
    [sym__newline] = ACTIONS(1),
    [anon_sym_SLASH_SLASH] = ACTIONS(5),
    [anon_sym_SLASH_STAR] = ACTIONS(7),
    [anon_sym_SLASH] = ACTIONS(1),
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
    [sym__header] = STATE(56),
    [sym_header_BITS] = STATE(55),
    [sym_header_MINREG] = STATE(55),
    [sym_header_MINHEAP] = STATE(55),
    [sym_header_MINSTACK] = STATE(55),
    [sym_header_RUN] = STATE(55),
    [sym_define_word] = STATE(56),
    [sym_label_def] = STATE(30),
    [sym_label] = STATE(54),
    [sym__line] = STATE(26),
    [sym_instruction] = STATE(56),
    [aux_sym_source_file_repeat1] = STATE(2),
    [aux_sym_source_file_repeat2] = STATE(3),
    [aux_sym_instruction_repeat1] = STATE(17),
    [ts_builtin_sym_end] = ACTIONS(9),
    [sym_macro] = ACTIONS(11),
    [sym__whitespace] = ACTIONS(3),
    [sym__newline] = ACTIONS(13),
    [anon_sym_SLASH_SLASH] = ACTIONS(5),
    [anon_sym_SLASH_STAR] = ACTIONS(7),
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
  [0] = 23,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(11), 1,
      sym_macro,
    ACTIONS(13), 1,
      sym__newline,
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
    STATE(2), 1,
      sym_comment,
    STATE(4), 1,
      aux_sym_source_file_repeat2,
    STATE(8), 1,
      aux_sym_source_file_repeat1,
    STATE(17), 1,
      aux_sym_instruction_repeat1,
    STATE(30), 1,
      sym_label_def,
    STATE(33), 1,
      sym__line,
    STATE(54), 1,
      sym_label,
    STATE(56), 3,
      sym__header,
      sym_define_word,
      sym_instruction,
    STATE(55), 5,
      sym_header_BITS,
      sym_header_MINREG,
      sym_header_MINHEAP,
      sym_header_MINSTACK,
      sym_header_RUN,
  [76] = 21,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(11), 1,
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
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    STATE(3), 1,
      sym_comment,
    STATE(5), 1,
      aux_sym_source_file_repeat2,
    STATE(17), 1,
      aux_sym_instruction_repeat1,
    STATE(30), 1,
      sym_label_def,
    STATE(33), 1,
      sym__line,
    STATE(54), 1,
      sym_label,
    STATE(56), 3,
      sym__header,
      sym_define_word,
      sym_instruction,
    STATE(55), 5,
      sym_header_BITS,
      sym_header_MINREG,
      sym_header_MINHEAP,
      sym_header_MINSTACK,
      sym_header_RUN,
  [146] = 21,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(11), 1,
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
    ACTIONS(33), 1,
      ts_builtin_sym_end,
    STATE(4), 1,
      sym_comment,
    STATE(5), 1,
      aux_sym_source_file_repeat2,
    STATE(17), 1,
      aux_sym_instruction_repeat1,
    STATE(30), 1,
      sym_label_def,
    STATE(31), 1,
      sym__line,
    STATE(54), 1,
      sym_label,
    STATE(56), 3,
      sym__header,
      sym_define_word,
      sym_instruction,
    STATE(55), 5,
      sym_header_BITS,
      sym_header_MINREG,
      sym_header_MINHEAP,
      sym_header_MINSTACK,
      sym_header_RUN,
  [216] = 20,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
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
    STATE(17), 1,
      aux_sym_instruction_repeat1,
    STATE(30), 1,
      sym_label_def,
    STATE(51), 1,
      sym__line,
    STATE(54), 1,
      sym_label,
    STATE(5), 2,
      sym_comment,
      aux_sym_source_file_repeat2,
    STATE(56), 3,
      sym__header,
      sym_define_word,
      sym_instruction,
    STATE(55), 5,
      sym_header_BITS,
      sym_header_MINREG,
      sym_header_MINHEAP,
      sym_header_MINSTACK,
      sym_header_RUN,
  [284] = 12,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(66), 1,
      anon_sym_DOT,
    ACTIONS(70), 1,
      anon_sym_LT,
    ACTIONS(72), 1,
      sym_identifier,
    STATE(6), 1,
      sym_comment,
    STATE(50), 1,
      sym__operand,
    ACTIONS(68), 2,
      sym_register,
      sym_memory,
    ACTIONS(64), 3,
      sym_macro,
      sym_relative,
      sym_port,
    ACTIONS(74), 3,
      sym_number,
      sym_char,
      sym_char_escape,
    STATE(46), 3,
      sym_label,
      sym_placeholder,
      sym__immediate_literal,
  [328] = 8,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(13), 1,
      sym__newline,
    STATE(7), 1,
      sym_comment,
    STATE(8), 1,
      aux_sym_source_file_repeat1,
    ACTIONS(35), 3,
      ts_builtin_sym_end,
      sym_macro,
      anon_sym_DOT,
    ACTIONS(76), 7,
      anon_sym_BITS,
      anon_sym_MINREG,
      anon_sym_MINHEAP,
      anon_sym_MINSTACK,
      anon_sym_RUN,
      anon_sym_DW,
      sym_identifier,
  [361] = 7,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(80), 1,
      sym__newline,
    STATE(8), 2,
      sym_comment,
      aux_sym_source_file_repeat1,
    ACTIONS(78), 3,
      ts_builtin_sym_end,
      sym_macro,
      anon_sym_DOT,
    ACTIONS(83), 7,
      anon_sym_BITS,
      anon_sym_MINREG,
      anon_sym_MINHEAP,
      anon_sym_MINSTACK,
      anon_sym_RUN,
      anon_sym_DW,
      sym_identifier,
  [392] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    STATE(9), 1,
      sym_comment,
    ACTIONS(85), 4,
      ts_builtin_sym_end,
      sym_macro,
      sym__newline,
      anon_sym_DOT,
    ACTIONS(87), 7,
      anon_sym_BITS,
      anon_sym_MINREG,
      anon_sym_MINHEAP,
      anon_sym_MINSTACK,
      anon_sym_RUN,
      anon_sym_DW,
      sym_identifier,
  [420] = 9,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(89), 1,
      anon_sym_LBRACK,
    ACTIONS(91), 1,
      sym_string,
    STATE(10), 1,
      sym_comment,
    STATE(37), 1,
      sym__dw_literal,
    STATE(35), 2,
      sym_array,
      sym__immediate_literal,
    ACTIONS(93), 3,
      sym_number,
      sym_char,
      sym_char_escape,
  [451] = 7,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    STATE(11), 1,
      sym_comment,
    STATE(43), 1,
      sym__immediate_literal,
    ACTIONS(93), 3,
      sym_number,
      sym_char,
      sym_char_escape,
    ACTIONS(95), 3,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
  [477] = 8,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(97), 1,
      anon_sym_RBRACK,
    STATE(12), 1,
      sym_comment,
    STATE(14), 1,
      aux_sym_array_repeat1,
    STATE(23), 1,
      sym__immediate_literal,
    ACTIONS(93), 3,
      sym_number,
      sym_char,
      sym_char_escape,
  [504] = 7,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(99), 1,
      anon_sym_RBRACK,
    STATE(23), 1,
      sym__immediate_literal,
    STATE(13), 2,
      sym_comment,
      aux_sym_array_repeat1,
    ACTIONS(101), 3,
      sym_number,
      sym_char,
      sym_char_escape,
  [529] = 8,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(104), 1,
      anon_sym_RBRACK,
    STATE(13), 1,
      aux_sym_array_repeat1,
    STATE(14), 1,
      sym_comment,
    STATE(23), 1,
      sym__immediate_literal,
    ACTIONS(93), 3,
      sym_number,
      sym_char,
      sym_char_escape,
  [556] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    STATE(15), 1,
      sym_comment,
    ACTIONS(106), 6,
      ts_builtin_sym_end,
      sym__newline,
      anon_sym_RBRACK,
      sym_number,
      sym_char,
      sym_char_escape,
  [577] = 8,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(110), 1,
      anon_sym_DOT,
    STATE(30), 1,
      sym_label_def,
    STATE(54), 1,
      sym_label,
    ACTIONS(108), 2,
      sym_macro,
      sym_identifier,
    STATE(16), 2,
      sym_comment,
      aux_sym_instruction_repeat1,
  [604] = 9,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(27), 1,
      anon_sym_DOT,
    STATE(16), 1,
      aux_sym_instruction_repeat1,
    STATE(17), 1,
      sym_comment,
    STATE(30), 1,
      sym_label_def,
    STATE(54), 1,
      sym_label,
    ACTIONS(113), 2,
      sym_macro,
      sym_identifier,
  [633] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(115), 1,
      sym__newline,
    STATE(18), 2,
      sym_comment,
      aux_sym_source_file_repeat1,
    ACTIONS(78), 3,
      sym_macro,
      anon_sym_DOT,
      sym_identifier,
  [655] = 7,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(120), 1,
      sym__newline,
    STATE(18), 1,
      aux_sym_source_file_repeat1,
    STATE(19), 1,
      sym_comment,
    ACTIONS(118), 3,
      sym_macro,
      anon_sym_DOT,
      sym_identifier,
  [679] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    STATE(20), 1,
      sym_comment,
    STATE(41), 1,
      sym__immediate_literal,
    ACTIONS(93), 3,
      sym_number,
      sym_char,
      sym_char_escape,
  [700] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    STATE(21), 1,
      sym_comment,
    ACTIONS(85), 4,
      sym_macro,
      sym__newline,
      anon_sym_DOT,
      sym_identifier,
  [719] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    STATE(22), 1,
      sym_comment,
    STATE(52), 1,
      sym__immediate_literal,
    ACTIONS(93), 3,
      sym_number,
      sym_char,
      sym_char_escape,
  [740] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    STATE(23), 1,
      sym_comment,
    ACTIONS(122), 4,
      anon_sym_RBRACK,
      sym_number,
      sym_char,
      sym_char_escape,
  [759] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    STATE(24), 1,
      sym_comment,
    STATE(40), 1,
      sym__immediate_literal,
    ACTIONS(93), 3,
      sym_number,
      sym_char,
      sym_char_escape,
  [780] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    STATE(25), 1,
      sym_comment,
    STATE(42), 1,
      sym__immediate_literal,
    ACTIONS(93), 3,
      sym_number,
      sym_char,
      sym_char_escape,
  [801] = 7,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(13), 1,
      sym__newline,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    STATE(7), 1,
      aux_sym_source_file_repeat1,
    STATE(26), 1,
      sym_comment,
  [823] = 6,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(126), 1,
      sym__whitespace,
    STATE(27), 1,
      sym_comment,
    STATE(32), 1,
      aux_sym_instruction_repeat2,
    ACTIONS(124), 2,
      ts_builtin_sym_end,
      sym__newline,
  [843] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(130), 1,
      sym__whitespace,
    ACTIONS(128), 2,
      ts_builtin_sym_end,
      sym__newline,
    STATE(28), 2,
      sym_comment,
      aux_sym_instruction_repeat2,
  [861] = 6,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(126), 1,
      sym__whitespace,
    STATE(28), 1,
      aux_sym_instruction_repeat2,
    STATE(29), 1,
      sym_comment,
    ACTIONS(133), 2,
      ts_builtin_sym_end,
      sym__newline,
  [881] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    STATE(30), 1,
      sym_comment,
    ACTIONS(135), 3,
      sym_macro,
      anon_sym_DOT,
      sym_identifier,
  [899] = 7,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(13), 1,
      sym__newline,
    ACTIONS(137), 1,
      ts_builtin_sym_end,
    STATE(7), 1,
      aux_sym_source_file_repeat1,
    STATE(31), 1,
      sym_comment,
  [921] = 6,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(126), 1,
      sym__whitespace,
    STATE(28), 1,
      aux_sym_instruction_repeat2,
    STATE(32), 1,
      sym_comment,
    ACTIONS(139), 2,
      ts_builtin_sym_end,
      sym__newline,
  [941] = 7,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(13), 1,
      sym__newline,
    ACTIONS(33), 1,
      ts_builtin_sym_end,
    STATE(7), 1,
      aux_sym_source_file_repeat1,
    STATE(33), 1,
      sym_comment,
  [963] = 6,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(126), 1,
      sym__whitespace,
    STATE(29), 1,
      aux_sym_instruction_repeat2,
    STATE(34), 1,
      sym_comment,
    ACTIONS(141), 2,
      ts_builtin_sym_end,
      sym__newline,
  [983] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    STATE(35), 1,
      sym_comment,
    ACTIONS(143), 2,
      ts_builtin_sym_end,
      sym__newline,
  [1000] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    STATE(36), 1,
      sym_comment,
    ACTIONS(145), 2,
      ts_builtin_sym_end,
      sym__newline,
  [1017] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    STATE(37), 1,
      sym_comment,
    ACTIONS(147), 2,
      ts_builtin_sym_end,
      sym__newline,
  [1034] = 4,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    STATE(38), 1,
      sym_comment,
    ACTIONS(149), 3,
      ts_builtin_sym_end,
      sym__whitespace,
      sym__newline,
  [1049] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    STATE(39), 1,
      sym_comment,
    ACTIONS(151), 2,
      ts_builtin_sym_end,
      sym__newline,
  [1066] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    STATE(40), 1,
      sym_comment,
    ACTIONS(153), 2,
      ts_builtin_sym_end,
      sym__newline,
  [1083] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    STATE(41), 1,
      sym_comment,
    ACTIONS(155), 2,
      ts_builtin_sym_end,
      sym__newline,
  [1100] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    STATE(42), 1,
      sym_comment,
    ACTIONS(157), 2,
      ts_builtin_sym_end,
      sym__newline,
  [1117] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    STATE(43), 1,
      sym_comment,
    ACTIONS(159), 2,
      ts_builtin_sym_end,
      sym__newline,
  [1134] = 4,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    STATE(44), 1,
      sym_comment,
    ACTIONS(106), 3,
      ts_builtin_sym_end,
      sym__whitespace,
      sym__newline,
  [1149] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    STATE(45), 1,
      sym_comment,
    ACTIONS(161), 2,
      anon_sym_RAM,
      anon_sym_ROM,
  [1166] = 4,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    STATE(46), 1,
      sym_comment,
    ACTIONS(163), 3,
      ts_builtin_sym_end,
      sym__whitespace,
      sym__newline,
  [1181] = 4,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    STATE(47), 1,
      sym_comment,
    ACTIONS(163), 3,
      ts_builtin_sym_end,
      sym__whitespace,
      sym__newline,
  [1196] = 4,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    STATE(48), 1,
      sym_comment,
    ACTIONS(165), 3,
      ts_builtin_sym_end,
      sym__whitespace,
      sym__newline,
  [1211] = 4,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    STATE(49), 1,
      sym_comment,
    ACTIONS(163), 3,
      ts_builtin_sym_end,
      sym__whitespace,
      sym__newline,
  [1226] = 4,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    STATE(50), 1,
      sym_comment,
    ACTIONS(167), 3,
      ts_builtin_sym_end,
      sym__whitespace,
      sym__newline,
  [1241] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(13), 1,
      sym__newline,
    STATE(7), 1,
      aux_sym_source_file_repeat1,
    STATE(51), 1,
      sym_comment,
  [1260] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    STATE(52), 1,
      sym_comment,
    ACTIONS(169), 2,
      ts_builtin_sym_end,
      sym__newline,
  [1277] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    STATE(53), 1,
      sym_comment,
    ACTIONS(171), 2,
      ts_builtin_sym_end,
      sym__newline,
  [1294] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(120), 1,
      sym__newline,
    STATE(19), 1,
      aux_sym_source_file_repeat1,
    STATE(54), 1,
      sym_comment,
  [1313] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    STATE(55), 1,
      sym_comment,
    ACTIONS(173), 2,
      ts_builtin_sym_end,
      sym__newline,
  [1330] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    STATE(56), 1,
      sym_comment,
    ACTIONS(175), 2,
      ts_builtin_sym_end,
      sym__newline,
  [1347] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(177), 1,
      ts_builtin_sym_end,
    STATE(57), 1,
      sym_comment,
  [1363] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(179), 1,
      anon_sym_GT,
    STATE(58), 1,
      sym_comment,
  [1379] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(149), 1,
      sym__newline,
    STATE(59), 1,
      sym_comment,
  [1395] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(181), 1,
      sym_identifier,
    STATE(60), 1,
      sym_comment,
  [1411] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(183), 1,
      sym_identifier,
    STATE(61), 1,
      sym_comment,
  [1427] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(185), 1,
      anon_sym_SLASH,
    STATE(62), 1,
      sym_comment,
  [1443] = 5,
    ACTIONS(187), 1,
      sym__whitespace,
    ACTIONS(189), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(191), 1,
      aux_sym_comment_token1,
    ACTIONS(193), 1,
      anon_sym_SLASH_STAR,
    STATE(63), 1,
      sym_comment,
  [1459] = 5,
    ACTIONS(187), 1,
      sym__whitespace,
    ACTIONS(189), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(193), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(195), 1,
      aux_sym_comment_token2,
    STATE(64), 1,
      sym_comment,
  [1475] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(197), 1,
      sym_identifier,
    STATE(65), 1,
      sym_comment,
  [1491] = 1,
    ACTIONS(199), 1,
      ts_builtin_sym_end,
  [1495] = 1,
    ACTIONS(201), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 76,
  [SMALL_STATE(4)] = 146,
  [SMALL_STATE(5)] = 216,
  [SMALL_STATE(6)] = 284,
  [SMALL_STATE(7)] = 328,
  [SMALL_STATE(8)] = 361,
  [SMALL_STATE(9)] = 392,
  [SMALL_STATE(10)] = 420,
  [SMALL_STATE(11)] = 451,
  [SMALL_STATE(12)] = 477,
  [SMALL_STATE(13)] = 504,
  [SMALL_STATE(14)] = 529,
  [SMALL_STATE(15)] = 556,
  [SMALL_STATE(16)] = 577,
  [SMALL_STATE(17)] = 604,
  [SMALL_STATE(18)] = 633,
  [SMALL_STATE(19)] = 655,
  [SMALL_STATE(20)] = 679,
  [SMALL_STATE(21)] = 700,
  [SMALL_STATE(22)] = 719,
  [SMALL_STATE(23)] = 740,
  [SMALL_STATE(24)] = 759,
  [SMALL_STATE(25)] = 780,
  [SMALL_STATE(26)] = 801,
  [SMALL_STATE(27)] = 823,
  [SMALL_STATE(28)] = 843,
  [SMALL_STATE(29)] = 861,
  [SMALL_STATE(30)] = 881,
  [SMALL_STATE(31)] = 899,
  [SMALL_STATE(32)] = 921,
  [SMALL_STATE(33)] = 941,
  [SMALL_STATE(34)] = 963,
  [SMALL_STATE(35)] = 983,
  [SMALL_STATE(36)] = 1000,
  [SMALL_STATE(37)] = 1017,
  [SMALL_STATE(38)] = 1034,
  [SMALL_STATE(39)] = 1049,
  [SMALL_STATE(40)] = 1066,
  [SMALL_STATE(41)] = 1083,
  [SMALL_STATE(42)] = 1100,
  [SMALL_STATE(43)] = 1117,
  [SMALL_STATE(44)] = 1134,
  [SMALL_STATE(45)] = 1149,
  [SMALL_STATE(46)] = 1166,
  [SMALL_STATE(47)] = 1181,
  [SMALL_STATE(48)] = 1196,
  [SMALL_STATE(49)] = 1211,
  [SMALL_STATE(50)] = 1226,
  [SMALL_STATE(51)] = 1241,
  [SMALL_STATE(52)] = 1260,
  [SMALL_STATE(53)] = 1277,
  [SMALL_STATE(54)] = 1294,
  [SMALL_STATE(55)] = 1313,
  [SMALL_STATE(56)] = 1330,
  [SMALL_STATE(57)] = 1347,
  [SMALL_STATE(58)] = 1363,
  [SMALL_STATE(59)] = 1379,
  [SMALL_STATE(60)] = 1395,
  [SMALL_STATE(61)] = 1411,
  [SMALL_STATE(62)] = 1427,
  [SMALL_STATE(63)] = 1443,
  [SMALL_STATE(64)] = 1459,
  [SMALL_STATE(65)] = 1475,
  [SMALL_STATE(66)] = 1491,
  [SMALL_STATE(67)] = 1495,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(34),
  [40] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(11),
  [43] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(25),
  [46] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(20),
  [49] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(24),
  [52] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(45),
  [55] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(10),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(60),
  [61] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(34),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [68] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [76] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [80] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(9),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 1),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 1),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2),
  [101] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(15),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__immediate_literal, 1),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_instruction_repeat1, 2),
  [110] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_instruction_repeat1, 2), SHIFT_REPEAT(60),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [115] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(21),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label_def, 2),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 1),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 2, .production_id = 6),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_instruction_repeat2, 2, .production_id = 8),
  [130] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_instruction_repeat2, 2, .production_id = 8), SHIFT_REPEAT(6),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 2, .production_id = 2),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_instruction_repeat1, 1),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 3),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 3, .production_id = 10),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 1, .production_id = 1),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__dw_literal, 1),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 3),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_define_word, 2),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 2, .production_id = 5),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header_RUN, 2, .production_id = 4),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header_MINSTACK, 2, .production_id = 3),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header_MINHEAP, 2, .production_id = 3),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header_MINREG, 2, .production_id = 3),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header_BITS, 2, .production_id = 3),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__operand, 1),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_placeholder, 3),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_instruction_repeat2, 2, .production_id = 7),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header_BITS, 3, .production_id = 9),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 2),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__header, 1),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__line, 1),
  [177] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 3),
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
