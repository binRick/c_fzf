fzf_srcs = [
  'fzf.c',
]

inc = get_variable('inc', join_paths(meson.current_source_dir(),'..'))

fzf_include_dirs = [
  '.',
  inc,
]

fzf_deps = [
  ansi_codes_dep,
  c_vector_dep,
  tempdir_dep,
  which_dep,
  c_fsio_dep,
  c_stringfn_dep,
  c_string_buffer_dep,
  timestamp_dep,
  log_dep,
  ms_dep,
  bytes_dep,
  reproc_dep,
]

fzf_c_args = [
]

fzf_link_args = [
]

fzf_lib = library('fzf',
  fzf_srcs,
  install: false,
  dependencies: fzf_deps,
  c_args: fzf_c_args,
  include_directories: fzf_include_dirs
)

fzf_dep = declare_dependency(
  include_directories: fzf_include_dirs,
  link_with: fzf_lib,
  link_args: fzf_link_args,
)
