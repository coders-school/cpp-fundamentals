#pragma once
#include <vector>

int addEven(const std::vector<int>& numbers) {
    // TODO: Your implementation goes here
    // Below return is only to make this function compile now
    int temp {0};

    for(auto element : numbers){   
        if(element % 2 == 0){
            temp += element;
        }
    }
    return temp;
}
