#pragma once
#include <vector>

    bool checkIfEven(int number){
        return number%2==0;
    }

int addEven(const std::vector<int>& numbers) {
    // TODO: Your implementation goes here
    // Below return is only to make this function compile now

    int sumOfEven {};
    for(const int number : numbers){
        if (checkIfEven(number))
            sumOfEven += number;
    }

    return sumOfEven;
}
