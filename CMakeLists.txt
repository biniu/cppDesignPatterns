cmake_minimum_required(VERSION 3.16)
project(cppDesignPatterns)

set(CMAKE_CXX_STANDARD 20)

include(CMakeScripts/GetGtest.cmake)

add_subdirectory("singleton")
