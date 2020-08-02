#include "gtest/gtest.h"
#include "calculate.hpp"

TEST(calculate, ShouldAdd) {
  EXPECT_EQ(calculate("add", 10, 20), "30");
  EXPECT_EQ(calculate("add", 15, 5), "20");
  EXPECT_EQ(calculate("add", 0, 0), "0");
  EXPECT_EQ(calculate("add", 1, -20), "-19");
}

TEST(calculate, ShouldSubtract) {
  EXPECT_EQ(calculate("subtract", 10, 20), "-10");
  EXPECT_EQ(calculate("subtract", 15, 5), "10");
  EXPECT_EQ(calculate("subtract", 0, 0), "0");
  EXPECT_EQ(calculate("subtract", 1, -20), "21");
}

TEST(calculate, ShouldMultiply) {
  EXPECT_EQ(calculate("multiply", 10, 20), "200");
  EXPECT_EQ(calculate("multiply", 15, 5), "75");
  EXPECT_EQ(calculate("multiply", 0, 0), "0");
  EXPECT_EQ(calculate("multiply", 1, -20), "-20");
}

TEST(calculate, ShouldDivide) {
  EXPECT_EQ(calculate("divide", 10, 20), "0");
  EXPECT_EQ(calculate("divide", 15, 5), "3");
  EXPECT_EQ(calculate("divide", 0, 0), "Division by 0");
  EXPECT_EQ(calculate("divide", -20, 10), "-2");
}

TEST(calculate, ShouldReturnInvalidData) {
  EXPECT_EQ(calculate("quit", 10, 20), "Invalid data");
  EXPECT_EQ(calculate("q", 15, 5), "Invalid data");
  EXPECT_EQ(calculate("5", 0, 0), "Invalid data");
  EXPECT_EQ(calculate("sth", -20, 10), "Invalid data");
}
