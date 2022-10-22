cmake_minimum_required(VERSION 3.14)

project(yoyo-sxhkd LANGUAGES C)
set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(TARGET yoyo-sxhkd)

add_executable(yoyo-sxhkd
  grab.c
  helpers.c
  parse.c
  sxhkd.c
  types.c
)

install(TARGETS yoyo-sxhkd DESTINATION ${CMAKE_INSTALL_BINDIR})