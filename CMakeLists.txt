cmake_minimum_required(VERSION 2.6)

project(binarytree)

include_directories("include/")
add_library(binarytree "src/binary_tree.cpp")


# Enable C++11
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Add Google Test
add_subdirectory(googletest)
enable_testing()

# Add the binary tree library and test executable
add_executable(binary_tree_tests "test/binary_tree_tests.cpp")
target_link_libraries(binary_tree_tests gtest_main)


# Add the test to CMake
add_test(NAME binary_tree_tests COMMAND binary_tree_tests)
