#include <array>
#include <vector>

#include "gtest/gtest.h"
#include "addEven.hpp"

class AddEven : public ::testing::TestWithParam<std::tuple<std::vector<int>, int>> {
};

TEST_P(AddEven, ShouldAddEvenNumbers) {
    auto vec = std::get<0>(GetParam());
    int expected_result = std::get<1>(GetParam());
    EXPECT_EQ(addEven(std::vector<int>(vec.begin(), vec.end())), expected_result);
}

INSTANTIATE_TEST_SUITE_P(
    AddEvenTest,
    AddEven,
    ::testing::Values(
        std::make_tuple(std::vector<int>{}, 0),
        std::make_tuple(std::vector<int>{1}, 0),
        std::make_tuple(std::vector<int>{1, 2}, 2),
        std::make_tuple(std::vector<int>{1, 2, 3}, 2),
        std::make_tuple(std::vector<int>{1, 2, 3, 4}, 6),
        std::make_tuple(std::vector<int>{1, 2, 3, 4, 5}, 6),
        std::make_tuple(std::vector<int>{2, 4, 6, 8, 10}, 30),
        std::make_tuple(std::vector<int>{1, 1, 1, 1, 1}, 0),
        std::make_tuple(std::vector<int>{0, 0, 0, 0, 0}, 0),
        std::make_tuple(std::vector<int>{21, 20, 18, 16, 19}, 54)
    )
);
