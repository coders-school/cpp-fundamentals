#pragma once
#include <vector>
#include <limits>

int maxOfVector(const std::vector<int>& vec) {
 int temp = vec[0];
 for(const auto& el : vec)
 {
     if(el > temp)
         temp = el;
     
}
return temp;
}
