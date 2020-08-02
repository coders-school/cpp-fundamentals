#include <tuple>
#include "fibonacci.hpp"
#include "gtest/gtest.h"

class Fibonacci : public ::testing::TestWithParam<std::tuple<int, int>> {
};

TEST_P(Fibonacci, ShouldCalculateFibonacciIteratively) {
    int sequence = std::get<0>(GetParam());
    int expected_result = std::get<1>(GetParam());
    EXPECT_EQ(fibonacci_iterative(sequence), expected_result);
}

TEST_P(Fibonacci, ShouldCalculateFibonacciRecursively) {
    int sequence = std::get<0>(GetParam());
    int expected_result = std::get<1>(GetParam());
    EXPECT_EQ(fibonacci_recursive(sequence), expected_result);
}

INSTANTIATE_TEST_SUITE_P(
    FibonacciTest,
    Fibonacci,
    ::testing::Values(
        std::make_tuple(10, 55),
        std::make_tuple(0, 0),
        std::make_tuple(1, 1),
        std::make_tuple(2, 1),
        std::make_tuple(3, 2),
        std::make_tuple(4, 3),
        std::make_tuple(5, 5),
        std::make_tuple(6, 8),
        std::make_tuple(13, 233),
        std::make_tuple(17, 1597),
        std::make_tuple(20, 6765)
    )
);
