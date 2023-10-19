#include <iostream>
#include <vector>

std::vector<int> concatenateVector(const std::vector<int> vec1, const std::vector<int> vec2){
    std::vector<int> new_vec;
    for (size_t i = 0; i < vec1.size(); i++){
        new_vec.push_back(vec1[i]);
        new_vec.push_back(vec2[i]);
    }
    return new_vec;
}
int main() {
    std::vector<int> vec1 {1, 2, 3, 4, 5};
    std::vector<int> vec2 {11, 12, 13, 14, 15};

    auto vec = concatenateVector(vec1, vec2);
    for (const auto& el : vec) {
        std::cout << el << " ";
    }
    return 0;
}
