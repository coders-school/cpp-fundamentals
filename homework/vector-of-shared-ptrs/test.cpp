#include <vector>
#include <memory>
#include "vectorFunctions.hpp"
#include "gtest/gtest.h"

constexpr const int count = 10;

struct Homework : public testing::Test {
    auto generateExpectedVector(int count) {
        std::vector<std::shared_ptr<int>> expected;
        expected.reserve(count);
        for (size_t i = 0 ; i < count ; ++i) {
            expected.emplace_back(std::make_shared<int>(i));
        }
        return expected;
    }
};

TEST_F(Homework, ShouldGenerateVectorOfProperSize) {
    auto expected = generateExpectedVector(count);
    auto result = generate(count);
    ASSERT_EQ(expected.size(), result.size());
    for (size_t i = 0 ; i < count ; ++i) {
        EXPECT_EQ(*result[i], i);
    }
}

TEST_F(Homework, ShouldAdd10ToEachElement) {
    auto result = generate(count);
    add10(result);

    for (size_t i = 0 ; i < count ; ++i) {
        EXPECT_EQ(*result[i], i + 10);
    }
}

TEST_F(Homework, ShouldNotAdd10WhenNullptr) {
    std::vector<std::shared_ptr<int>> vec(count);
    for (auto& num : vec) {
      num = nullptr;
    }
    add10(vec);
    for (size_t i = 0 ; i < count ; ++i) {
        EXPECT_EQ(vec[i], nullptr);
    }
}

TEST_F(Homework, ShouldSubtract10ForPtr) {
    auto ptr = std::make_shared<int>(10);
    sub10(ptr.get());
    ASSERT_TRUE(ptr);
    EXPECT_EQ(*ptr, 0);
}

TEST_F(Homework, ShouldNotSubtract10ForNullptr) {
    int* ptr = nullptr;
    sub10(ptr);
    EXPECT_EQ(ptr, nullptr);
}

TEST_F(Homework, ShouldSubtract10ForVector) {
    std::vector<std::shared_ptr<int>> vec;
    vec.reserve(count);
    for (size_t i = 0 ; i < count ; ++i) {
        vec.emplace_back(std::make_shared<int>(i + 10));
    }
    sub10(vec);

    for (size_t i = 0 ; i < count ; ++i) {
        EXPECT_EQ(*vec[i], i);
    }
}

TEST_F(Homework, BehavioralTest) {
    std::vector<std::shared_ptr<int>> vec;
    vec.reserve(count);
    for (size_t i = 0 ; i < count ; ++i) {
        vec.emplace_back(std::make_shared<int>(i + 10));
    }
    auto copyVec = vec;
    sub10(vec);
    add10(vec);
    EXPECT_EQ(copyVec, vec);
    for (size_t i = 0 ; i < count ; ++i) {
        EXPECT_EQ(vec[i], copyVec[i]);
    }
}
