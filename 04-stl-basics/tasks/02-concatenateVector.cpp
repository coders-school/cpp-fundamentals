#include <iostream>
#include <vector>

std::vector<int> concatenateVector(std::vector<int>& vec1, std::vector<int>& vec2) {
    std::vector<int> concatenateVec {};
    for (size_t i = 0; i < vec1.size(); ++i) {
        concatenateVec.push_back(vec1[i]);
        concatenateVec.push_back(vec2[i]);
    }
    return concatenateVec;
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
