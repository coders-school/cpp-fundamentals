#pragma once
#include <vector>

int addEven(const std::vector<int>& numbers) {
    int buffer = 0;
    int const vector_len = numbers.size();
    
    for (int i = 0; i < vector_len; i++) {
        if (numbers[i]%2 == 0) {
            buffer += numbers[i];
        }
    }
    
    // TODO: Your implementation goes here
    // Below return is only to make this function compile now
    return buffer;
}
