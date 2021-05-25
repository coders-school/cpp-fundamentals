#include <vector>
#include <limits>

#include "gtest/gtest.h"
#include "maxOfVector.hpp"

class MaxOfVectorTestFixture : public ::testing::TestWithParam<std::tuple<std::vector<int>, int>> {
};

TEST_P(MaxOfVectorTestFixture, ShouldFindMax) {
    auto vec = std::get<0>(GetParam());
    auto expected_result = std::get<1>(GetParam());
    EXPECT_EQ(maxOfVector(std::vector<int>(vec.begin(), vec.end())), expected_result);
}

INSTANTIATE_TEST_SUITE_P(
    MaxOfVectorTests,
    MaxOfVectorTestFixture,
    ::testing::Values(
        std::make_tuple(std::vector<int>{0}, 0),
        std::make_tuple(std::vector<int>{0, -1}, 0),
        std::make_tuple(std::vector<int>{0, 1}, 1),
        std::make_tuple(std::vector<int>{-5, -1}, -1),
        std::make_tuple(std::vector<int>{std::numeric_limits<int>::min(), -1}, -1),
        std::make_tuple(std::vector<int>{std::numeric_limits<int>::max(), -1}, std::numeric_limits<int>::max()),
        std::make_tuple(std::vector<int>{4, 3, 2, 5, 6, 7, 9, 1, 0}, 9),
        std::make_tuple(std::vector<int>{0, 0, 0, -1, 0, 0, 0, 0, 0}, 0),
        std::make_tuple(std::vector<int>{1, 1, 1, 1, 1, 2, 1, 1, 1}, 2),
        std::make_tuple(std::vector<int>{-1, -1, -1, -1, -2, -1, 0, -1, -2}, 0),
        std::make_tuple(std::vector<int>{22, 88, 10, 0, 5, 6, 7, 8, 9}, 88),
        std::make_tuple(std::vector<int>{-1, 0, 1, -2, -4, -6, -7, -8, -8}, 1)
    )
);
