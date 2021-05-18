#pragma once
#include <vector>
#include <limits>
#include <algorithm>

int maxOfVector(const std::vector<int>& vec) 
{
  std::vector<int>copy;
  copy = vec; 
    
  sort(copy.begin(), copy.end(), std::greater<int>());
  
  return copy.front();  
    
}
