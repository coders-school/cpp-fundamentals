#include "vectorFunctions.hpp"

#include <iostream>

// generates a vector of shared pointers pointing to numbers
// from 0 to count -1
// returns empty vector if count is negative or exceeds vector maximum size
std::vector<std::shared_ptr<int>> generate(int count)
{
    std::vector<std::shared_ptr<int>> vec;
    // generate vector elements only if valid vector size passed
    if (count > 0 && count <= vec.max_size()) {
        vec.reserve(count);
        for (auto i = 0; i < count; ++i) {
            vec.emplace_back(std::make_shared<int>(i));
        }
    }
    // return generated or empty vector depending of count value
    return vec;
}

// prints all the numbers pointed by vector elements
void print(const std::vector<std::shared_ptr<int>>& ptr_vec)
{
    for (const auto& ptr : ptr_vec) {
        if (ptr) {
            std::cout << *ptr;
        }
    }
}

// adds 10 to every number pointed by vector elements
void add10(const std::vector<std::shared_ptr<int>>& ptr_vec)
{
    for (const auto& ptr : ptr_vec) {
        if (ptr) {
            *ptr += 10;
        }
    }
}

// substracts 10 from the object pointed by ptr
void sub10(int* const ptr)
{}

// substracts 10 from every number pointed by vector elements
void sub10(const std::vector<std::shared_ptr<int>>& ptr_vec)
{}