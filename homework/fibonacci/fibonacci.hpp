#pragma once
#include<iostream>
#include<vector>
int fibonacci_iterative(int sequence) {
    std::vector<int> numbers;
    numbers.push_back(0);
    numbers.push_back(1);


    for(int i=2; i<=sequence; i++)
    {
    	numbers.push_back(numbers[i - 2] + numbers[i - 1]);

    }

    return numbers[sequence];
}

int fibonacci_recursive(int sequence) {
	if(sequence<2)
    	return sequence;
    return fibonacci_recursive(sequence - 1) + fibonacci_recursive(sequence - 2);
}
