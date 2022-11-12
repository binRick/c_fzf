project('c_fzf', ['c'],default_options: ['warning_level=2','c_std=gnu99',],subproject_dir: 'subprojects',version: '0.0.1')
cc = meson.get_compiler('c')
pwd = meson.current_source_dir()
c_deps_dir = join_paths(meson.current_source_dir(),'submodules/c_deps')
make_program = find_program('make', required: true)
inc = [include_directories(
  '.',
  'submodules/',
  'submodules/c_deps',
  'submodules/c_deps/submodules',
  'submodules/c_deps/submodules/c_ansi',
)]

#############################################################################
subdir('submodules')
subdir('fzf')
#############################################################################
