#pragma once
#include <iostream>

int fibonacci_iterative(int sequence) {
    const int first_terms[2] = {0, 1};
    
    if(sequence <= 1) {
        return first_terms[sequence];
    }

    int * fibonacci;
    fibonacci = new int [sequence+1];

    if (fibonacci == nullptr)
        std::cout << "Error: memory could not be allocated";

    fibonacci[0] = 0;
    fibonacci[1] = 1;

    for(size_t i = 2; i <= sequence; i++) {
        fibonacci[i] = fibonacci[i-1] + fibonacci[i-2];
    }

    int ith_fibbonaci = fibonacci[sequence];
    delete[] fibonacci;

    return ith_fibbonaci;
}

int fibonacci_recursive(int sequence) {
    const int first_terms[2] = {0, 1};
    
    if(sequence <= 1) {
        return first_terms[sequence];
    }

    return fibonacci_recursive(sequence-1) + fibonacci_recursive(sequence-2);
}
