#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 64
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 59
#define ALIAS_COUNT 0
#define TOKEN_COUNT 36
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 7
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
  aux_sym_define_word_repeat1 = 56,
  aux_sym_array_repeat1 = 57,
  aux_sym_instruction_repeat1 = 58,
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
  [aux_sym_define_word_repeat1] = "define_word_repeat1",
  [aux_sym_array_repeat1] = "array_repeat1",
  [aux_sym_instruction_repeat1] = "instruction_repeat1",
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
      if (eof) ADVANCE(36);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '#') ADVANCE(12);
      if (lookahead == '$') ADVANCE(13);
      if (lookahead == '%') ADVANCE(31);
      if (lookahead == '\'') ADVANCE(23);
      if (lookahead == '.') ADVANCE(66);
      if (lookahead == '/') ADVANCE(52);
      if (lookahead == '0') ADVANCE(104);
      if (lookahead == '<') ADVANCE(74);
      if (lookahead == '=') ADVANCE(17);
      if (lookahead == '>') ADVANCE(76);
      if (lookahead == '@') ADVANCE(32);
      if (lookahead == 'B') ADVANCE(87);
      if (lookahead == 'D') ADVANCE(99);
      if (lookahead == 'M') ADVANCE(14);
      if (lookahead == 'P') ADVANCE(81);
      if (lookahead == 'R') ADVANCE(77);
      if (lookahead == 'S') ADVANCE(93);
      if (lookahead == '[') ADVANCE(101);
      if (lookahead == ']') ADVANCE(102);
      if (lookahead == 'm') ADVANCE(15);
      if (lookahead == 'r') ADVANCE(78);
      if (lookahead == '~') ADVANCE(24);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(41);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(11);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(107);
      if (sym__whitespace_character_set_1(lookahead)) ADVANCE(38);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(103);
      if (lookahead == '\\') ADVANCE(33);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '\'') ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '\'') ADVANCE(109);
      END_STATE();
    case 3:
      if (lookahead == '\'') ADVANCE(110);
      END_STATE();
    case 4:
      if (lookahead == '*') ADVANCE(48);
      if (lookahead == '/') ADVANCE(42);
      END_STATE();
    case 5:
      if (lookahead == '*') ADVANCE(51);
      if (lookahead == '/') ADVANCE(7);
      if (sym__whitespace_character_set_2(lookahead)) ADVANCE(39);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 6:
      if (lookahead == '*') ADVANCE(51);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '*') ADVANCE(49);
      if (lookahead == '/') ADVANCE(43);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 8:
      if (lookahead == '.') ADVANCE(66);
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == '@') ADVANCE(32);
      if (lookahead == 'D') ADVANCE(99);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(41);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(29);
      if (sym__whitespace_character_set_1(lookahead)) ADVANCE(38);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 9:
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == 'R') ADVANCE(19);
      if (sym__whitespace_character_set_2(lookahead)) ADVANCE(38);
      END_STATE();
    case 10:
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(29);
      if (sym__whitespace_character_set_2(lookahead)) ADVANCE(38);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 11:
      if (lookahead == '0') ADVANCE(104);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(107);
      END_STATE();
    case 12:
      if (lookahead == '0') ADVANCE(112);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(113);
      END_STATE();
    case 13:
      if (lookahead == '0') ADVANCE(67);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(68);
      END_STATE();
    case 14:
      if (lookahead == '0') ADVANCE(115);
      if (lookahead == 'I') ADVANCE(91);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(114);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 15:
      if (lookahead == '0') ADVANCE(115);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(114);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 16:
      if (lookahead == '=') ADVANCE(54);
      END_STATE();
    case 17:
      if (lookahead == '=') ADVANCE(55);
      END_STATE();
    case 18:
      if (lookahead == '=') ADVANCE(56);
      END_STATE();
    case 19:
      if (lookahead == 'A') ADVANCE(21);
      if (lookahead == 'O') ADVANCE(22);
      END_STATE();
    case 20:
      if (lookahead == 'I') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(29);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 21:
      if (lookahead == 'M') ADVANCE(61);
      END_STATE();
    case 22:
      if (lookahead == 'M') ADVANCE(63);
      END_STATE();
    case 23:
      if (lookahead == '\\') ADVANCE(26);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '\'') ADVANCE(2);
      END_STATE();
    case 24:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(28);
      END_STATE();
    case 25:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(105);
      END_STATE();
    case 26:
      if (lookahead == '\'' ||
          lookahead == '0' ||
          lookahead == '\\' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't') ADVANCE(3);
      END_STATE();
    case 27:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(106);
      END_STATE();
    case 28:
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(111);
      END_STATE();
    case 29:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(29);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 30:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(108);
      END_STATE();
    case 31:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 32:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      END_STATE();
    case 33:
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1);
      END_STATE();
    case 34:
      if (eof) ADVANCE(36);
      if (lookahead == '#') ADVANCE(12);
      if (lookahead == '$') ADVANCE(13);
      if (lookahead == '%') ADVANCE(31);
      if (lookahead == '\'') ADVANCE(23);
      if (lookahead == '.') ADVANCE(66);
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == '0') ADVANCE(104);
      if (lookahead == '<') ADVANCE(73);
      if (lookahead == '>') ADVANCE(75);
      if (lookahead == '@') ADVANCE(32);
      if (lookahead == 'P') ADVANCE(81);
      if (lookahead == 'S') ADVANCE(93);
      if (lookahead == ']') ADVANCE(102);
      if (lookahead == '~') ADVANCE(24);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(41);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(11);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(15);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(78);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(107);
      if (sym__whitespace_character_set_1(lookahead)) ADVANCE(38);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 35:
      if (eof) ADVANCE(36);
      if (lookahead == '\'') ADVANCE(23);
      if (lookahead == '.') ADVANCE(66);
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == '0') ADVANCE(104);
      if (lookahead == '<') ADVANCE(16);
      if (lookahead == '=') ADVANCE(17);
      if (lookahead == '>') ADVANCE(18);
      if (lookahead == '@') ADVANCE(32);
      if (lookahead == 'B') ADVANCE(87);
      if (lookahead == 'D') ADVANCE(99);
      if (lookahead == 'M') ADVANCE(20);
      if (lookahead == 'R') ADVANCE(98);
      if (lookahead == 'm') ADVANCE(29);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(41);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(11);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(107);
      if (sym__whitespace_character_set_1(lookahead)) ADVANCE(38);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_macro);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym__whitespace);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '*') ADVANCE(51);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(47);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym__newline);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead == '*') ADVANCE(51);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(47);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '*') ADVANCE(50);
      if (lookahead == '/') ADVANCE(44);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(47);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '/') ADVANCE(45);
      if (sym__whitespace_character_set_2(lookahead)) ADVANCE(40);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead)) ADVANCE(47);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(47);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      if (lookahead == '*') ADVANCE(51);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(6);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(47);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '*') ADVANCE(51);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(6);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(48);
      if (lookahead == '/') ADVANCE(42);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_BITS);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_MINREG);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_MINHEAP);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_MINSTACK);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_RUN);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_RAM);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_RAM);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_ROM);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_ROM);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_DW);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_register);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == '0') ADVANCE(68);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(68);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == '0') ADVANCE(69);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(69);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_register);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_program_counter);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_stack_pointer);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(54);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(56);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '0') ADVANCE(70);
      if (lookahead == 'A') ADVANCE(89);
      if (lookahead == 'O') ADVANCE(90);
      if (lookahead == 'U') ADVANCE(92);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(69);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '0') ADVANCE(70);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(69);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'G') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'H') ADVANCE(83);
      if (lookahead == 'R') ADVANCE(84);
      if (lookahead == 'S') ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'K') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'W') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'b') ADVANCE(25);
      if (lookahead == 'o') ADVANCE(27);
      if (lookahead == 'x') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(107);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(105);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(106);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(107);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(108);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_char);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_char_escape);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_relative);
      if (lookahead == '0') ADVANCE(111);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(111);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_memory);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_memory);
      if (lookahead == '0') ADVANCE(113);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(113);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_memory);
      if (lookahead == '0') ADVANCE(114);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(114);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_memory);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(29);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_port);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 35},
  [2] = {.lex_state = 35},
  [3] = {.lex_state = 35},
  [4] = {.lex_state = 35},
  [5] = {.lex_state = 35},
  [6] = {.lex_state = 34},
  [7] = {.lex_state = 34},
  [8] = {.lex_state = 34},
  [9] = {.lex_state = 34},
  [10] = {.lex_state = 34},
  [11] = {.lex_state = 34},
  [12] = {.lex_state = 34},
  [13] = {.lex_state = 34},
  [14] = {.lex_state = 34},
  [15] = {.lex_state = 34},
  [16] = {.lex_state = 35},
  [17] = {.lex_state = 35},
  [18] = {.lex_state = 35},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 8},
  [22] = {.lex_state = 8},
  [23] = {.lex_state = 35},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 8},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 8},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 8},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 8},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 9},
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
  [56] = {.lex_state = 34},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 10},
  [59] = {.lex_state = 10},
  [60] = {.lex_state = 46},
  [61] = {.lex_state = 5},
  [62] = {(TSStateId)(-1)},
  [63] = {(TSStateId)(-1)},
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
    [sym__header] = STATE(49),
    [sym_header_BITS] = STATE(53),
    [sym_header_MINREG] = STATE(53),
    [sym_header_MINHEAP] = STATE(53),
    [sym_header_MINSTACK] = STATE(53),
    [sym_header_RUN] = STATE(53),
    [sym_define_word] = STATE(49),
    [sym_label_def] = STATE(34),
    [sym_label] = STATE(54),
    [sym__line] = STATE(36),
    [sym_instruction] = STATE(49),
    [aux_sym_source_file_repeat1] = STATE(2),
    [aux_sym_source_file_repeat2] = STATE(4),
    [aux_sym_define_word_repeat1] = STATE(21),
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
    STATE(5), 1,
      aux_sym_source_file_repeat2,
    STATE(17), 1,
      aux_sym_source_file_repeat1,
    STATE(21), 1,
      aux_sym_define_word_repeat1,
    STATE(34), 1,
      sym_label_def,
    STATE(38), 1,
      sym__line,
    STATE(54), 1,
      sym_label,
    STATE(49), 3,
      sym__header,
      sym_define_word,
      sym_instruction,
    STATE(53), 5,
      sym_header_BITS,
      sym_header_MINREG,
      sym_header_MINHEAP,
      sym_header_MINSTACK,
      sym_header_RUN,
  [76] = 20,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
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
    STATE(21), 1,
      aux_sym_define_word_repeat1,
    STATE(34), 1,
      sym_label_def,
    STATE(50), 1,
      sym__line,
    STATE(54), 1,
      sym_label,
    STATE(3), 2,
      sym_comment,
      aux_sym_source_file_repeat2,
    STATE(49), 3,
      sym__header,
      sym_define_word,
      sym_instruction,
    STATE(53), 5,
      sym_header_BITS,
      sym_header_MINREG,
      sym_header_MINHEAP,
      sym_header_MINSTACK,
      sym_header_RUN,
  [144] = 21,
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
      aux_sym_source_file_repeat2,
    STATE(4), 1,
      sym_comment,
    STATE(21), 1,
      aux_sym_define_word_repeat1,
    STATE(34), 1,
      sym_label_def,
    STATE(38), 1,
      sym__line,
    STATE(54), 1,
      sym_label,
    STATE(49), 3,
      sym__header,
      sym_define_word,
      sym_instruction,
    STATE(53), 5,
      sym_header_BITS,
      sym_header_MINREG,
      sym_header_MINHEAP,
      sym_header_MINSTACK,
      sym_header_RUN,
  [214] = 21,
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
    ACTIONS(62), 1,
      ts_builtin_sym_end,
    STATE(3), 1,
      aux_sym_source_file_repeat2,
    STATE(5), 1,
      sym_comment,
    STATE(21), 1,
      aux_sym_define_word_repeat1,
    STATE(34), 1,
      sym_label_def,
    STATE(37), 1,
      sym__line,
    STATE(54), 1,
      sym_label,
    STATE(49), 3,
      sym__header,
      sym_define_word,
      sym_instruction,
    STATE(53), 5,
      sym_header_BITS,
      sym_header_MINREG,
      sym_header_MINHEAP,
      sym_header_MINSTACK,
      sym_header_RUN,
  [284] = 13,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(27), 1,
      anon_sym_DOT,
    ACTIONS(70), 1,
      anon_sym_LT,
    STATE(6), 1,
      sym_comment,
    STATE(10), 1,
      aux_sym_instruction_repeat1,
    STATE(15), 1,
      sym__operand,
    ACTIONS(64), 2,
      ts_builtin_sym_end,
      sym__newline,
    ACTIONS(66), 3,
      sym_macro,
      sym_relative,
      sym_port,
    ACTIONS(72), 3,
      sym_number,
      sym_char,
      sym_char_escape,
    STATE(12), 3,
      sym_label,
      sym_placeholder,
      sym__immediate_literal,
    ACTIONS(68), 5,
      sym_register,
      sym_program_counter,
      sym_stack_pointer,
      sym_identifier,
      sym_memory,
  [335] = 13,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(27), 1,
      anon_sym_DOT,
    ACTIONS(70), 1,
      anon_sym_LT,
    STATE(6), 1,
      aux_sym_instruction_repeat1,
    STATE(7), 1,
      sym_comment,
    STATE(15), 1,
      sym__operand,
    ACTIONS(74), 2,
      ts_builtin_sym_end,
      sym__newline,
    ACTIONS(66), 3,
      sym_macro,
      sym_relative,
      sym_port,
    ACTIONS(72), 3,
      sym_number,
      sym_char,
      sym_char_escape,
    STATE(12), 3,
      sym_label,
      sym_placeholder,
      sym__immediate_literal,
    ACTIONS(68), 5,
      sym_register,
      sym_program_counter,
      sym_stack_pointer,
      sym_identifier,
      sym_memory,
  [386] = 13,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(27), 1,
      anon_sym_DOT,
    ACTIONS(70), 1,
      anon_sym_LT,
    STATE(8), 1,
      sym_comment,
    STATE(10), 1,
      aux_sym_instruction_repeat1,
    STATE(15), 1,
      sym__operand,
    ACTIONS(76), 2,
      ts_builtin_sym_end,
      sym__newline,
    ACTIONS(66), 3,
      sym_macro,
      sym_relative,
      sym_port,
    ACTIONS(72), 3,
      sym_number,
      sym_char,
      sym_char_escape,
    STATE(12), 3,
      sym_label,
      sym_placeholder,
      sym__immediate_literal,
    ACTIONS(68), 5,
      sym_register,
      sym_program_counter,
      sym_stack_pointer,
      sym_identifier,
      sym_memory,
  [437] = 13,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(27), 1,
      anon_sym_DOT,
    ACTIONS(70), 1,
      anon_sym_LT,
    STATE(8), 1,
      aux_sym_instruction_repeat1,
    STATE(9), 1,
      sym_comment,
    STATE(15), 1,
      sym__operand,
    ACTIONS(78), 2,
      ts_builtin_sym_end,
      sym__newline,
    ACTIONS(66), 3,
      sym_macro,
      sym_relative,
      sym_port,
    ACTIONS(72), 3,
      sym_number,
      sym_char,
      sym_char_escape,
    STATE(12), 3,
      sym_label,
      sym_placeholder,
      sym__immediate_literal,
    ACTIONS(68), 5,
      sym_register,
      sym_program_counter,
      sym_stack_pointer,
      sym_identifier,
      sym_memory,
  [488] = 12,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(85), 1,
      anon_sym_DOT,
    ACTIONS(91), 1,
      anon_sym_LT,
    STATE(15), 1,
      sym__operand,
    ACTIONS(80), 2,
      ts_builtin_sym_end,
      sym__newline,
    STATE(10), 2,
      sym_comment,
      aux_sym_instruction_repeat1,
    ACTIONS(82), 3,
      sym_macro,
      sym_relative,
      sym_port,
    ACTIONS(94), 3,
      sym_number,
      sym_char,
      sym_char_escape,
    STATE(12), 3,
      sym_label,
      sym_placeholder,
      sym__immediate_literal,
    ACTIONS(88), 5,
      sym_register,
      sym_program_counter,
      sym_stack_pointer,
      sym_identifier,
      sym_memory,
  [537] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
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
  [570] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
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
  [602] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
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
  [634] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
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
  [666] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
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
  [698] = 8,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(13), 1,
      sym__newline,
    STATE(16), 1,
      sym_comment,
    STATE(17), 1,
      aux_sym_source_file_repeat1,
    ACTIONS(33), 3,
      ts_builtin_sym_end,
      sym_macro,
      anon_sym_DOT,
    ACTIONS(117), 7,
      anon_sym_BITS,
      anon_sym_MINREG,
      anon_sym_MINHEAP,
      anon_sym_MINSTACK,
      anon_sym_RUN,
      anon_sym_DW,
      sym_identifier,
  [731] = 7,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(121), 1,
      sym__newline,
    STATE(17), 2,
      sym_comment,
      aux_sym_source_file_repeat1,
    ACTIONS(119), 3,
      ts_builtin_sym_end,
      sym_macro,
      anon_sym_DOT,
    ACTIONS(124), 7,
      anon_sym_BITS,
      anon_sym_MINREG,
      anon_sym_MINHEAP,
      anon_sym_MINSTACK,
      anon_sym_RUN,
      anon_sym_DW,
      sym_identifier,
  [762] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    STATE(18), 1,
      sym_comment,
    ACTIONS(126), 4,
      ts_builtin_sym_end,
      sym_macro,
      sym__newline,
      anon_sym_DOT,
    ACTIONS(128), 7,
      anon_sym_BITS,
      anon_sym_MINREG,
      anon_sym_MINHEAP,
      anon_sym_MINSTACK,
      anon_sym_RUN,
      anon_sym_DW,
      sym_identifier,
  [790] = 9,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(130), 1,
      anon_sym_LBRACK,
    ACTIONS(132), 1,
      sym_string,
    STATE(19), 1,
      sym_comment,
    STATE(48), 1,
      sym__dw_literal,
    STATE(52), 2,
      sym_array,
      sym__immediate_literal,
    ACTIONS(72), 3,
      sym_number,
      sym_char,
      sym_char_escape,
  [821] = 9,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(130), 1,
      anon_sym_LBRACK,
    ACTIONS(132), 1,
      sym_string,
    STATE(20), 1,
      sym_comment,
    STATE(41), 1,
      sym__dw_literal,
    STATE(52), 2,
      sym_array,
      sym__immediate_literal,
    ACTIONS(72), 3,
      sym_number,
      sym_char,
      sym_char_escape,
  [852] = 11,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(27), 1,
      anon_sym_DOT,
    ACTIONS(134), 1,
      sym_macro,
    ACTIONS(136), 1,
      anon_sym_DW,
    ACTIONS(138), 1,
      sym_identifier,
    STATE(21), 1,
      sym_comment,
    STATE(22), 1,
      aux_sym_define_word_repeat1,
    STATE(34), 1,
      sym_label_def,
    STATE(54), 1,
      sym_label,
  [886] = 9,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(140), 1,
      sym_macro,
    ACTIONS(144), 1,
      anon_sym_DOT,
    STATE(34), 1,
      sym_label_def,
    STATE(54), 1,
      sym_label,
    ACTIONS(142), 2,
      anon_sym_DW,
      sym_identifier,
    STATE(22), 2,
      sym_comment,
      aux_sym_define_word_repeat1,
  [916] = 7,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    STATE(23), 1,
      sym_comment,
    STATE(46), 1,
      sym__immediate_literal,
    ACTIONS(72), 3,
      sym_number,
      sym_char,
      sym_char_escape,
    ACTIONS(147), 3,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
  [942] = 8,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(149), 1,
      anon_sym_RBRACK,
    STATE(24), 1,
      sym_comment,
    STATE(26), 1,
      aux_sym_array_repeat1,
    STATE(33), 1,
      sym__immediate_literal,
    ACTIONS(72), 3,
      sym_number,
      sym_char,
      sym_char_escape,
  [969] = 7,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(151), 1,
      sym__newline,
    ACTIONS(119), 2,
      sym_macro,
      anon_sym_DOT,
    ACTIONS(124), 2,
      anon_sym_DW,
      sym_identifier,
    STATE(25), 2,
      sym_comment,
      aux_sym_source_file_repeat1,
  [994] = 8,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(154), 1,
      anon_sym_RBRACK,
    STATE(26), 1,
      sym_comment,
    STATE(28), 1,
      aux_sym_array_repeat1,
    STATE(33), 1,
      sym__immediate_literal,
    ACTIONS(72), 3,
      sym_number,
      sym_char,
      sym_char_escape,
  [1021] = 8,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(158), 1,
      sym__newline,
    STATE(25), 1,
      aux_sym_source_file_repeat1,
    STATE(27), 1,
      sym_comment,
    ACTIONS(156), 2,
      sym_macro,
      anon_sym_DOT,
    ACTIONS(160), 2,
      anon_sym_DW,
      sym_identifier,
  [1048] = 7,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(162), 1,
      anon_sym_RBRACK,
    STATE(33), 1,
      sym__immediate_literal,
    STATE(28), 2,
      sym_comment,
      aux_sym_array_repeat1,
    ACTIONS(164), 3,
      sym_number,
      sym_char,
      sym_char_escape,
  [1073] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    STATE(29), 1,
      sym_comment,
    ACTIONS(128), 2,
      anon_sym_DW,
      sym_identifier,
    ACTIONS(126), 3,
      sym_macro,
      sym__newline,
      anon_sym_DOT,
  [1095] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    STATE(30), 1,
      sym_comment,
    STATE(43), 1,
      sym__immediate_literal,
    ACTIONS(72), 3,
      sym_number,
      sym_char,
      sym_char_escape,
  [1116] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    STATE(31), 1,
      sym_comment,
    STATE(51), 1,
      sym__immediate_literal,
    ACTIONS(72), 3,
      sym_number,
      sym_char,
      sym_char_escape,
  [1137] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    STATE(32), 1,
      sym_comment,
    STATE(45), 1,
      sym__immediate_literal,
    ACTIONS(72), 3,
      sym_number,
      sym_char,
      sym_char_escape,
  [1158] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    STATE(33), 1,
      sym_comment,
    ACTIONS(167), 4,
      anon_sym_RBRACK,
      sym_number,
      sym_char,
      sym_char_escape,
  [1177] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    STATE(34), 1,
      sym_comment,
    ACTIONS(169), 2,
      sym_macro,
      anon_sym_DOT,
    ACTIONS(171), 2,
      anon_sym_DW,
      sym_identifier,
  [1198] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    STATE(35), 1,
      sym_comment,
    STATE(39), 1,
      sym__immediate_literal,
    ACTIONS(72), 3,
      sym_number,
      sym_char,
      sym_char_escape,
  [1219] = 7,
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
    STATE(16), 1,
      aux_sym_source_file_repeat1,
    STATE(36), 1,
      sym_comment,
  [1241] = 7,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(13), 1,
      sym__newline,
    ACTIONS(173), 1,
      ts_builtin_sym_end,
    STATE(16), 1,
      aux_sym_source_file_repeat1,
    STATE(37), 1,
      sym_comment,
  [1263] = 7,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(13), 1,
      sym__newline,
    ACTIONS(62), 1,
      ts_builtin_sym_end,
    STATE(16), 1,
      aux_sym_source_file_repeat1,
    STATE(38), 1,
      sym_comment,
  [1285] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    STATE(39), 1,
      sym_comment,
    ACTIONS(175), 2,
      ts_builtin_sym_end,
      sym__newline,
  [1302] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    STATE(40), 1,
      sym_comment,
    ACTIONS(177), 2,
      ts_builtin_sym_end,
      sym__newline,
  [1319] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    STATE(41), 1,
      sym_comment,
    ACTIONS(179), 2,
      ts_builtin_sym_end,
      sym__newline,
  [1336] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    STATE(42), 1,
      sym_comment,
    ACTIONS(181), 2,
      ts_builtin_sym_end,
      sym__newline,
  [1353] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    STATE(43), 1,
      sym_comment,
    ACTIONS(183), 2,
      ts_builtin_sym_end,
      sym__newline,
  [1370] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    STATE(44), 1,
      sym_comment,
    ACTIONS(185), 2,
      anon_sym_RAM,
      anon_sym_ROM,
  [1387] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    STATE(45), 1,
      sym_comment,
    ACTIONS(187), 2,
      ts_builtin_sym_end,
      sym__newline,
  [1404] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    STATE(46), 1,
      sym_comment,
    ACTIONS(189), 2,
      ts_builtin_sym_end,
      sym__newline,
  [1421] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    STATE(47), 1,
      sym_comment,
    ACTIONS(191), 2,
      ts_builtin_sym_end,
      sym__newline,
  [1438] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    STATE(48), 1,
      sym_comment,
    ACTIONS(193), 2,
      ts_builtin_sym_end,
      sym__newline,
  [1455] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    STATE(49), 1,
      sym_comment,
    ACTIONS(195), 2,
      ts_builtin_sym_end,
      sym__newline,
  [1472] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(13), 1,
      sym__newline,
    STATE(16), 1,
      aux_sym_source_file_repeat1,
    STATE(50), 1,
      sym_comment,
  [1491] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    STATE(51), 1,
      sym_comment,
    ACTIONS(197), 2,
      ts_builtin_sym_end,
      sym__newline,
  [1508] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    STATE(52), 1,
      sym_comment,
    ACTIONS(199), 2,
      ts_builtin_sym_end,
      sym__newline,
  [1525] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    STATE(53), 1,
      sym_comment,
    ACTIONS(201), 2,
      ts_builtin_sym_end,
      sym__newline,
  [1542] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(158), 1,
      sym__newline,
    STATE(27), 1,
      aux_sym_source_file_repeat1,
    STATE(54), 1,
      sym_comment,
  [1561] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(203), 1,
      anon_sym_SLASH,
    STATE(55), 1,
      sym_comment,
  [1577] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(205), 1,
      anon_sym_GT,
    STATE(56), 1,
      sym_comment,
  [1593] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(207), 1,
      ts_builtin_sym_end,
    STATE(57), 1,
      sym_comment,
  [1609] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(209), 1,
      sym_identifier,
    STATE(58), 1,
      sym_comment,
  [1625] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(211), 1,
      sym_identifier,
    STATE(59), 1,
      sym_comment,
  [1641] = 5,
    ACTIONS(213), 1,
      sym__whitespace,
    ACTIONS(215), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(217), 1,
      aux_sym_comment_token1,
    ACTIONS(219), 1,
      anon_sym_SLASH_STAR,
    STATE(60), 1,
      sym_comment,
  [1657] = 5,
    ACTIONS(213), 1,
      sym__whitespace,
    ACTIONS(215), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(219), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(221), 1,
      aux_sym_comment_token2,
    STATE(61), 1,
      sym_comment,
  [1673] = 1,
    ACTIONS(223), 1,
      ts_builtin_sym_end,
  [1677] = 1,
    ACTIONS(225), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 76,
  [SMALL_STATE(4)] = 144,
  [SMALL_STATE(5)] = 214,
  [SMALL_STATE(6)] = 284,
  [SMALL_STATE(7)] = 335,
  [SMALL_STATE(8)] = 386,
  [SMALL_STATE(9)] = 437,
  [SMALL_STATE(10)] = 488,
  [SMALL_STATE(11)] = 537,
  [SMALL_STATE(12)] = 570,
  [SMALL_STATE(13)] = 602,
  [SMALL_STATE(14)] = 634,
  [SMALL_STATE(15)] = 666,
  [SMALL_STATE(16)] = 698,
  [SMALL_STATE(17)] = 731,
  [SMALL_STATE(18)] = 762,
  [SMALL_STATE(19)] = 790,
  [SMALL_STATE(20)] = 821,
  [SMALL_STATE(21)] = 852,
  [SMALL_STATE(22)] = 886,
  [SMALL_STATE(23)] = 916,
  [SMALL_STATE(24)] = 942,
  [SMALL_STATE(25)] = 969,
  [SMALL_STATE(26)] = 994,
  [SMALL_STATE(27)] = 1021,
  [SMALL_STATE(28)] = 1048,
  [SMALL_STATE(29)] = 1073,
  [SMALL_STATE(30)] = 1095,
  [SMALL_STATE(31)] = 1116,
  [SMALL_STATE(32)] = 1137,
  [SMALL_STATE(33)] = 1158,
  [SMALL_STATE(34)] = 1177,
  [SMALL_STATE(35)] = 1198,
  [SMALL_STATE(36)] = 1219,
  [SMALL_STATE(37)] = 1241,
  [SMALL_STATE(38)] = 1263,
  [SMALL_STATE(39)] = 1285,
  [SMALL_STATE(40)] = 1302,
  [SMALL_STATE(41)] = 1319,
  [SMALL_STATE(42)] = 1336,
  [SMALL_STATE(43)] = 1353,
  [SMALL_STATE(44)] = 1370,
  [SMALL_STATE(45)] = 1387,
  [SMALL_STATE(46)] = 1404,
  [SMALL_STATE(47)] = 1421,
  [SMALL_STATE(48)] = 1438,
  [SMALL_STATE(49)] = 1455,
  [SMALL_STATE(50)] = 1472,
  [SMALL_STATE(51)] = 1491,
  [SMALL_STATE(52)] = 1508,
  [SMALL_STATE(53)] = 1525,
  [SMALL_STATE(54)] = 1542,
  [SMALL_STATE(55)] = 1561,
  [SMALL_STATE(56)] = 1577,
  [SMALL_STATE(57)] = 1593,
  [SMALL_STATE(58)] = 1609,
  [SMALL_STATE(59)] = 1625,
  [SMALL_STATE(60)] = 1641,
  [SMALL_STATE(61)] = 1657,
  [SMALL_STATE(62)] = 1673,
  [SMALL_STATE(63)] = 1677,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(9),
  [38] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(23),
  [41] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(32),
  [44] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(35),
  [47] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(30),
  [50] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(44),
  [53] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(20),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(59),
  [59] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(9),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 3, .production_id = 8),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [68] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 2, .production_id = 6),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 2, .production_id = 2),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 1, .production_id = 1),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_instruction_repeat1, 2),
  [82] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_instruction_repeat1, 2), SHIFT_REPEAT(12),
  [85] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_instruction_repeat1, 2), SHIFT_REPEAT(59),
  [88] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_instruction_repeat1, 2), SHIFT_REPEAT(12),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_instruction_repeat1, 2), SHIFT_REPEAT(58),
  [94] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_instruction_repeat1, 2), SHIFT_REPEAT(11),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__immediate_literal, 1),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__immediate_literal, 1),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__operand, 1),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__operand, 1),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_placeholder, 3),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_placeholder, 3),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 2, .production_id = 5),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label, 2, .production_id = 5),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_instruction_repeat1, 1),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_instruction_repeat1, 1),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [121] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(18),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 1),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 1),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [136] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_define_word_repeat1, 2),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_define_word_repeat1, 2),
  [144] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_define_word_repeat1, 2), SHIFT_REPEAT(59),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [151] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(29),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label_def, 2),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label_def, 2),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2),
  [164] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(11),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 1),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_define_word_repeat1, 1),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_define_word_repeat1, 1),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 3),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header_MINHEAP, 2, .production_id = 3),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 2),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_define_word, 2, .production_id = 3),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header_RUN, 2, .production_id = 4),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header_MINSTACK, 2, .production_id = 3),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header_MINREG, 2, .production_id = 3),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header_BITS, 2, .production_id = 3),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 3, .production_id = 10),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_define_word, 3, .production_id = 9),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__line, 1),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header_BITS, 3, .production_id = 7),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__dw_literal, 1),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__header, 1),
  [203] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [207] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [213] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [215] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [217] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [219] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [221] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 3),
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
