#include <iostream>
#include <vector>

auto concatenateVector(std::vector<int> vec1, std::vector<int> vec2)
{
    std::vector<int> v;
    for(int el1 : vec1)
    {
        v.push_back(vec1[el1-1]);
        v.push_back(vec2[el1-1]); 
    }
    return v;
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
