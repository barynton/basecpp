cmake_minimum_required(VERSION 3.22.1 FATAL_ERROR)
project(test LANGUAGES CXX)

add_executable(test
main.cpp
)

target_compile_definitions(test PRIVATE -DCATCH_CONFIG_ENABLE_BENCHMARKING -DTBB_SUPPRESS_DEPRECATED_MESSAGES=1)

target_link_libraries( test PRIVATE
    CONAN_PKG::catch2
)