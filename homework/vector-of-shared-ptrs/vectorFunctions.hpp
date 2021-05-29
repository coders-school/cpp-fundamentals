#include <vector>
#include <memory>
#include <numeric>
#include <iostream>

std::vector<std::shared_ptr<int>> generate(int count) {
    std::vector<std::shared_ptr<int>> generated_vector;
    generated_vector.reserve(count);
    for (int value = 0; value < count; value++) {
        generated_vector.push_back(std::make_shared<int>(value));
    }
    return generated_vector;
}



