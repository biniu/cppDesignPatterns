cmake_minimum_required(VERSION 3.16)
project(cppDesignPatterns)

set(CMAKE_CXX_STANDARD 20)

include(CMakeScripts/GetGtest.cmake)

#configure_file(CMakeScripts/GetGtest.cmake googletest-download/CMakeLists.txt)

add_executable(myTests main.cpp)

# This will automatically handle all of the lib linkage and include dirs
target_link_libraries(myTests
#        libraryTargetOfCodeBeingTested
        ${GTEST_LIBRARY}
        )

# Tell ctest about my tests
include(GoogleTest)
gtest_add_tests(
        TARGET      myTests
        TEST_LIST   myTests_targets
)