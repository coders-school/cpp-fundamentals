#include <iostream>
#pragma once
using namespace std;

int fibonacci_iterative(int sequence) {
int wynik = 1, n = 1, tmp = 1;
    if(sequence == 0) {
        return 0;
    }
    for (int i = 0; i < sequence - 1; i++) {
        tmp = wynik;
        wynik = n;
        n += tmp;
    }

    return wynik;
}
int fibonacci_recursive(int sequence) {
    if(sequence == 0) {
        return 0;
    }
    if (sequence <= 1)
        return sequence;
    return fibonacci_recursive(sequence-1) + fibonacci_recursive(sequence-2);
    return 0;
}
