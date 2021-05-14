#include <iostream>
#include <vector>

// Implement concatenateVector.
// It should take 2 vectors and return one which has alternately elements from the first and the other one.

std::vector<int> concatenateVector(std::vector<int>, std::vector<int>);

int main() {
    std::vector<int> vec1 {1, 2, 3, 4, 5};
    std::vector<int> vec2 {11, 12, 13, 14, 15};

    auto vec = concatenateVector(vec1, vec2);
    for (const auto& el : vec) {
        std::cout << el << " ";
    }
    return 0;
}

std::vector<int> concatenateVector(std::vector<int> v1, std::vector<int> v2)    {
    std::vector<int> v;
    auto p1 = v1.begin();
    auto p2 = v2.begin();
    do  {
        v.push_back(*(p1++));
        v.push_back(*(p2++));

    }while (p1!=v1.end() and p2!=v2.end());
    return v;
}