#include <iostream>
#include <vector>

// Implement concatenateVector.
// It should take 2 vectors and return one which has alternately elements from the first and the other one.
std::vector<int> concatenateVector(std::vector<int>, std::vector<int>);

int main() 
{
    std::vector<int> vec1 = {1, 2, 3, 4, 5};
    std::vector<int> vec2 = {11, 12, 13, 14, 15, 16, 17};

    auto vec = concatenateVector(vec1, vec2);
    for (const auto& el : vec) {
        std::cout << el << " ";
    }
    return 0;
}

std::vector<int> concatenateVector(std::vector<int> vec1, std::vector<int> vec2)
{
    std::vector<int> vec3;
    int count;
    if(vec1.size() >= vec2.size())
    {
        count = vec1.size();
        for (size_t i = 0; i < count; i++)
        {
            vec3.push_back(vec1[i]);
            if(vec2.size() > i) vec3.push_back(vec2[i]);
        }
    }
    else
    {
        count = vec2.size();
        for (size_t i = 0; i < count; i++)
        {
            if(vec1.size() > i) vec3.push_back(vec1[i]);
            vec3.push_back(vec2[i]);
        }
    }
    return vec3;
}
