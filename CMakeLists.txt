cmake_minimum_required(VERSION 3.20)
set(CMAKE_LEGACY_CYGWIN_WIN32 OFF)

project(whereami2cpp_project C CXX)

add_library(whereami2cpp "source/whereami2cpp.cpp" "third_party/whereami/src/whereami.c")
set_property(TARGET whereami2cpp PROPERTY CXX_STANDARD 11)
target_include_directories(whereami2cpp PRIVATE "third_party/whereami/src")
