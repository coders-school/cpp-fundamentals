#pragma once
#include <limits>
#include <vector>

int maxOfVector(const std::vector<int>& vec) {
    // TODO: Implement me :)
    int max_of_vector {vec[0]};
    int count {0};
    for (auto element : vec){
        if (count == 0){
            if (vec[count] > vec[0]){
                max_of_vector = vec[count];
            }
        } else {
            if (vec[count] > max_of_vector){
                max_of_vector = vec[count];
            }
        }
        count ++;
    }
    return max_of_vector;
}
