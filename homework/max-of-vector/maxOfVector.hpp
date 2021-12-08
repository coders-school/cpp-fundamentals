#pragma once
#include <vector>
#include <limits>

int maxOfVector(const std::vector<int>& vec) {
  int hold = 0;
    for (size_t i=0; i<vec.size();i++){
            if(hold<vec[i]){
                hold=vec[i];
            }
        }
    return hold;
}
