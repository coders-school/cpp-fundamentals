#include "vectorFunctions.hpp"

std::vector<std::shared_ptr<int>> generate(int count) {
    std::vector<std::shared_ptr<int>> vec;
    for (size_t i=0; i < count; i++) {
        vec.at(i) = std::make_shared<int>(i);
        i++; 
    }
    return vec;
}
void print(std::vector<std::shared_ptr<int>> vec) {
    for (auto it = vec.cbegin(); it != vec.cend(); it++) {
        std::cout << **it << " ";
    }
    std::cout << '\n';
}
void add10(std::vector<std::shared_ptr<int>> vec) {
    for (auto it = vec.cbegin(); it != vec.cend(); it++) {
        *it+=10;
        it++; 
    }
}