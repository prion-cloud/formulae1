cmake_minimum_required(VERSION 3.18)

set(Z3_BUILD_DOCUMENTATION   OFF)
set(Z3_BUILD_DOTNET_BINDINGS OFF)
set(Z3_BUILD_JAVA_BINDINGS   OFF)
set(Z3_BUILD_JULIA_BINDINGS  OFF)
set(Z3_BUILD_LIBZ3_SHARED    ON)
set(Z3_BUILD_PYTHON_BINDINGS OFF)

set(Z3_ENABLE_EXAMPLE_TARGETS       OFF)
set(Z3_ENABLE_TRACING_FOR_NON_DEBUG OFF)

# ---------------------------------------------------------------------------- #

add_subdirectory(z3)

# ---------------------------------------------------------------------------- #

add_library(z3
  ALIAS
    libz3)

target_include_directories(libz3
  INTERFACE
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/z3/src/api>)
