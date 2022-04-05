#pragma once
#include <iostream>
#include <vector>

int addEven(const std::vector<int>& numbers)
{
    // TODO: Your implementation goes here
    // Below return is only to make this function compile now
    int equality = 0;
    for  (int i = 0; i < numbers.size(); i++)
    {
        if (numbers[i] % 2 == 0)
        {
            equality += numbers[i];
        }
    }
    return equality;
}

int main()
{
    std::vector<int> vec{ 1, 2, 3, 4, 5 };
    //auto result = addEven(vec);  // result = 6;
    std::cout << addEven(vec) << std::endl;
    return 0;
}
