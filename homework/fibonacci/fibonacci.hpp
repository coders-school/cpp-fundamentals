#pragma once

int fibonacci_iterative(int sequence) {
    
    auto iteration = 0;
    auto number = 0;

    
    std::cout << sequecne << "\n";
    while (iteration < sequence)
    {
        
    std::cout << number << "\n";
        number += number;
        iteration++;
    }

    return number;
}

int fibonacci_recursive(int sequence) {
    // TODO: Your implementation goes here
    return 0;
}
