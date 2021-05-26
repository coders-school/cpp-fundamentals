#pragma once
#include <iostream>

int fibonacci_iterative(int sequence) {
    
    auto iteration = 1;
    auto number1 = 0;
    auto number2 = 1;
    auto result = 0;

    if (sequence == 0){
        result = number1;
    }else if (sequence == 1){
        result = number2;
    }else {
         while (iteration < sequence)
        {         
            result = number1 + number2;
            iteration++;
            number1 = number2;
            number2 = result;
            std::cout << result << "\n";
        }   
    }
    return result;
}

int fibonacci_recursive(int sequence) {
    // TODO: Your implementation goes here
    return 0;
}
