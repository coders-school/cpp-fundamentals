#pragma once
#include <vector>

int addEven(const std::vector<int>& numbers) {
   int a=0;
    for (size_t i=0;i<numbers.size();i++){
        if (!(numbers[i] % 2)){
        a+=numbers[i];
        }

    }
return a;
}
