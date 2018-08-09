cmake_minimum_required(VERSION 2.6)

project(malloc)

add_executable(malloc main.c)
add_executable(challenge malloc_challenge.c)
add_executable(solutions challenge_solution.c)