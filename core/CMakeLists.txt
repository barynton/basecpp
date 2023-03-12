cmake_minimum_required(VERSION 3.22.1 FATAL_ERROR)
project(core LANGUAGES CXX)

add_executable( core
    main.cpp
)

# target_include_directories( core
# PRIVATE
#     ./
# )