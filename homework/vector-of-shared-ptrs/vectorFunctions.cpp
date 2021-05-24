#include "vectorFunctions.hpp"

std::vector<std::shared_ptr<int>> generate(int count)
{

    std::vector<std::shared_ptr<int>> newVec;
    for (size_t i = 0; i < count; i++)
    {
        newVec.push_back(std::make_shared<int>(i));
    };

    return newVec;
};

void print(std::vector<std::shared_ptr<int>> &vecToPrint)
{
    for (auto &num : vecToPrint)
    {
        std::cout << *num;
    };
};

void add10(std::vector<std::shared_ptr<int>> &vecToAdd)
{
    for (auto &num : vecToAdd)
    {
        if (num)
        {
            (*num += 10);
        };
    };
};

void sub10(int *const num)
{
    if (num)
    {
        *num -= 10;
    };
};

void sub10(std::vector<std::shared_ptr<int>> &vecToSub)
{
    for (auto &num : vecToSub)
    {

        sub10(num.get());
    };
};
