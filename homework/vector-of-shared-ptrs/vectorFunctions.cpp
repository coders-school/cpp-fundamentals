#include "vectorFunctions.hpp"

std::vector<std::shared_ptr<int>> generate(int count){
    std::vector<std::shared_ptr<int>> vec;
    vec.reserve(count);
    for (int i = 0; i < count; i++) {
        vec.push_back(std::make_shared<int>(i));
    }
    return vec;
}