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
        }   
    }
    return result;
}

int fibonacci_recursive(int sequence) {
    
    auto iteration = 1;
    auto number1 = 0;
    auto number2 = 1;
    auto result = 0;

    if (sequence <= 0){
        result = number1;
    }else if(sequence == 1){
        result = number2;
    }else {
        result = fibonacci_recursive(sequence -1) + fibonacci_recursive(sequence -2);
    }

    return result;
}
