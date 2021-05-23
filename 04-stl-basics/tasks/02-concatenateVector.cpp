#include <iostream>
#include <vector>

// Implement concatenateVector.
// It should take 2 vectors and return one which has alternately elements from the first and the other one.

std::vector<int> concatenateVector(std::vector<int> vec1, std::vector<int> vec2)
{
    std::vector<int> ret;
    int size = (vec1.size() > vec2.size()) ? vec1.size() : vec2.size();

    for (int i = 0; i < size; i++)
    {
        if (i + 1 <= vec1.size())
        {
            ret.push_back(vec1[i]);
        }
        if (i + 1 <= vec2.size())
        {
            ret.push_back(vec2[i]);
        }
    }
}

int main()
{
    std::vector<int> vec1{1, 2, 3, 4, 5};
    std::vector<int> vec2{11, 12, 13, 14, 15};

    auto vec = concatenateVector(vec1, vec2);
    for (const auto &el : vec)
    {
        std::cout << el << " ";
    }
    return 0;
}
