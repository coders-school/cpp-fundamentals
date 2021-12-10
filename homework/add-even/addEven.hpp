#pragma once
#include <vector>

int addEven(const std::vector<int>& numbers) {
    int even {};
    for(const auto el : numbers){
       if(el%2 == 0){
        even += el;
      }
    }
    return even;
}
