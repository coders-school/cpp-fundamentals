#pragma once

int fibonacci_iterative(int sequence) {
    if (sequence == 0) {
        return 0;
    }
    if (sequence < 3) {
        return 1;
    }
    if (sequence == 3) {
        return 2;
    }
    int i = 3;
    int num1 = 1;
    int num2 = 2;
    int temp = 0;
    while (sequence > i) {

        temp = num1 + num2;
        num1 = num2;
        num2 = temp;
        i++;
    }
    return temp;
}

int fibonacci_recursive(int sequence) {
    if (sequence <= 1) {
        return sequence;
    }
    return fibonacci_recursive(sequence - 1) + fibonacci_recursive(sequence - 2);

    return 0;
}
