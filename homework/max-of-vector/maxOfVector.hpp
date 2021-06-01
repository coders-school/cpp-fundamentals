#pragma once
#include <vector>
#include <limits>

int maxOfVector(const std::vector<int>& vec) {
    int num={-2147483648};
for(auto element : vec){
if(element>num)
num=element;
}
return num;
}
