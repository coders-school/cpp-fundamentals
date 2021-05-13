#pragma once
#include <iostream>

// 1 1 2 3 5 8 13

// first = 3
// seocnd = 5

// second = second + first -> 8
// first = second - first = 8 - 3 -> 5

// f = 5
// s = 8
// s = 5 + 8 = 13
// f = 13 - 5 = 8

int fibonacci_iterative(int sequence) {
    if (sequence < 2) {
        return sequence;
    }

    int first = 1;
    int second = 1;

    while (sequence-- > 2) {
        second += first;
        first = second - first;
    }

    return second;
}

// 5! = 1 * 2 * 3 * 4 * 5
// 6! = 1 * 2 * 3 * 4 * 5 * 6

// 6
// f(5) * 6
// f(4) * 5
// f(3) * 4 -> 1 * 2 * 3 * 4
// f(2) * 3 -> 1 * 2 * 3
// f(1) * 2 -> 1 * 2
// f(0) -> 1 
// O(n)

int factorial(int num) {
    if (num == 0) {
        return 1;
    }

    return factorial(num - 1) * num;
}

// print(10)
// 1 2 3 4 5 6 7 8 9 10
// 10 9 8 7 6 5 4 3 2 1
// 10 9 8 7 6 5 4 3 2 1 1 2 3 4 5 6 7 8 9 10
void print(int num) {
    if (num == 0) {
        return;
    }

    std::cout << num << ' ';    
    print(--num);
    std::cout << num << ' ';
}

int fibonacci_recursive(int sequence) {
    // Warunek brzegowy
    if (sequence < 2) {
        return sequence;
    }

    // Fib(3) = Fib(2) + Fib(1)
    // Fib(10) = Fib(9) + Fib(8)

    // Wywołanie rekurencyjne
    // O(2^n)
    return fibonacci_recursive(sequence - 1) + fibonacci_recursive(sequence - 2);
}
