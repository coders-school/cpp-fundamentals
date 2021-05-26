#pragma once
#include <iostream>

int fibonacci_iterative(int sequence) {
    
    auto iteration = 0;
    auto number = 1;
    auto result = 0

    if (sequence == 0){
        result = 0;
    }else if(sequence > 0){
         while (iteration < sequence)
        {
             std::cout << number << "\n";
            result += number;
            iteration++;
            number = result;
        }   
    }
    return result;
}

int fibonacci_recursive(int sequence) {
    // TODO: Your implementation goes here
    return 0;
}
