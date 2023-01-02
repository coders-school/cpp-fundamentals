#pragma once
#include <limits>
#include <vector>

int maxOfVector(const std::vector<int>& vec) {
    // TODO: Implement me :)
    
	int maxElement = vec[0];

    for (int i = 1; i < vec.size(); i++ ){

        if (vec[i] > maxElement){
            maxElement = vec[i];
        }

    }
    return maxElement;
}
