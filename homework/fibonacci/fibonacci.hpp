#pragma once

int fibonacci_iterative(int sequence) {
    int a = 0, b = 1, temp;
    if (sequence == 0)
        return a;
    for (int i = 2; i <= sequence; ++i) {
        temp = a + b;
        a = b;
        b = temp;
    }
    return b;
}

int fibonacci_recursive(int sequence) {
    if (sequence <= 1)
        return sequence;
    return fibonacci_recursive(sequence - 1) + fibonacci_recursive(sequence - 2);
}

int main() {
    std::cout << fibonacci_iterative(10) << "\n";
    std::cout << fibonacci_recursive(10) << "\n";

    return 0;
}
