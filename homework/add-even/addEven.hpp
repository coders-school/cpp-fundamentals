#pragma once
#include <vector>
#include <numeric>
int sum;
std::vector<int> vector;
int addEven(const std::vector<int>& numbers)
 {
     if(!numbers.empty())
     {
            for(int i =0; i<numbers.size(); i++)
             {
            if(numbers[i] % 2 == 0)
            {
            vector.push_back(numbers[i]);
            }
    }
    sum = std::accumulate(vector.begin(), vector.end(), 0);
    return sum;
     }
     else
     sum = 0;

     return sum;
}
