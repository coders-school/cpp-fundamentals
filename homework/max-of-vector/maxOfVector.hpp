#pragma once
#include <vector>
#include <limits>

int maxOfVector(std::vector<int> vec) {
    
    int size = vec.size(), first = 0;
    for (int i = 0; i < size; i++) {
        if (i == 0) {
            first = vec.at( 0 );
        } else if (first < vec.at( i )) {
            first = vec.at( i );
        }
    }
    return first;
}
