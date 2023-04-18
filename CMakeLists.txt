cmake_minimum_required(VERSION 3.2)
project(c-snippets)

enable_testing()

add_executable(bubble_sort src/bubble_sort.cpp)
add_test(bubble_sort_test bubble_sort)
