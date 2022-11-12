#pragma once
#ifndef FZF_H
#define FZF_H
//////////////////////////////////////
#include <assert.h>
#include <ctype.h>
#include <errno.h>
#include <inttypes.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include "c_vector/vector/vector.h"
#include "c_stringfn/include/stringfn.h"
#include "reproc/reproc.h"

struct fzf_keybind_t {
  char *key, *cmd, *type, *desc;
};
struct fzf_options_t {
  struct Vector          *input_options;
  struct Vector          *selected_options;
  struct Vector          *fzf_keybinds_v;
  struct Vector          *fzf_header_lines_v;
  struct StringBuffer    *fzf_header_lines_sb;
  struct StringBuffer    *fzf_keybinds_sb;
  struct StringFNStrings output_lines;
  char                   *fzf_keybinds_s;
  char                   **input_array;
  char                   *input_s;
  char                   *fzf_info;
  char                   *fzf_prompt;
  char                   *fzf_history_file;
  char                   *output_file;
  char                   *tempdir;
  char                   *header;
  char                   *fzf_cmd, *fzf_pointer, *fzf_marker;
  char                   *fzf_path;
  char                   *fzf_default_opts;
  char                   *fzf_default_command;
  char                   *env_path;
  char                   *sh_path;
  char                   **subprocess_cmd;
  int                    proc_result;
  int                    proc_exit_code;
  int                    height;
  int                    preview_size;
  char                   *preview_type;
  char                   *preview_cmd, *encoded_preview_cmd, *sub_preview_cmd, *sub_preview_cmd_file;
  char                   *query_s;
  int                    top_margin, bottom_margin, left_margin, right_margin;
  int                    top_padding, bottom_padding, left_padding, right_padding;
  char                   *options_file;
  char                   *options_file_content_s;
  char                   *input_lines_s;
  char                   *fzf_header_lines_s;
  reproc_t               *proc;
  reproc_options         reproc_options;
  bool                   debug_mode, select_multiple, fzf_reverse, header_first, cycle, border, ansi;
  size_t                 header_lines;
};

struct fzf_options_t *fzf_options_new(void);
void fzf_options_free(struct fzf_options_t *);
int fzf_exec(struct fzf_options_t *);
char *fzf_items(void **items, size_t qty, char *item_name);
char *fzf_items_v(struct Vector *v, char *item_name);

#endif
