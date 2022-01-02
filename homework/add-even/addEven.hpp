#pragma once
#include <vector>

int addEven(const std::vector<int>& numbers) {

auto result = 0;

for (auto element : numbers){
  //  if (numbers[i] == 0){}
    if (element != 0 && element%2 == 0){result += element;}
}
    return result;
}
