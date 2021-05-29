#include <vector>
#include <memory>
#include <numeric>
#include <iostream>

std::vector<std::shared_ptr<int>> generate(int count) {
    std::vector<std::shared_ptr<int>> generated_vector;
    generated_vector.reserve(count);
    std::iota(generated_vector.begin(), generated_vector.end(), 0);
    for (auto value : generated_vector) {
        value = std::make_shared<int>(value);
        std::cout<<value<<'\t';
    }
    return generated_vector;
}



