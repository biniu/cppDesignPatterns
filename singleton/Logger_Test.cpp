#include <gtest/gtest.h>
#include <iostream>

#include "Logger.h"

TEST(LoggerTests, create_logger) {
  ASSERT_EQ(1+1,2);
}


int main(int argc, char** argv) {
  ::testing::InitGoogleTest(&argc, argv);

  return RUN_ALL_TESTS();
}