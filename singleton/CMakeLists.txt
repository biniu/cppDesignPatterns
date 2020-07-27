cmake_minimum_required(VERSION 3.16)
project(Singleton)

add_executable(Logger
        Logger.cpp
        Logger_Test.cpp
        )

# This will automatically handle all of the lib linkage and include dirs
target_link_libraries(Logger
#        libraryTargetOfCodeBeingTested
        ${GTEST_LIBRARY}
        )

# Tell ctest about my tests
include(GoogleTest)
gtest_add_tests(
        TARGET      Logger
        TEST_LIST   Logger_targets
)
