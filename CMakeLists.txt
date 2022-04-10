cmake_minimum_required(VERSION 3.17)
project(labsort C)

set(CMAKE_C_STANDARD 11)

add_executable(labsort main.c item.h selectsort.c selectsort.h insert_sort.c insert_sort.h bubble_sort.c bubble_sort.h shaker_sort.c shaker_sort.h merge_sort.c merge_sort.h)