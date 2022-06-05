#pragma once
#include <vector>


int fibonacci_iterative(int sequence) {
    int result;
    
    
    if (sequence <= 1) { result = sequence;
        return result;
    }
    
    std::vector <int> list;
    list.push_back(0);
    list.push_back(1);
    
    for (int i = 2; i <= sequence; i++) {
        list.push_back(list[i-2] + list[i-1]);
    }
    
    result = list.back();
    return result;
}







int fibonacci_recursive(int sequence) {
    int result;
    if (sequence <= 1) {
        result = sequence;
    } else {
        result = fibonacci_recursive(sequence-2) + fibonacci_recursive(sequence - 1);
    }
    return result;
    
}
