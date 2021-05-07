#pragma once

int fibonacci_iterative(int sequence) {
    auto result = sequence;
    auto a = 0, b = 1;
    for (auto i=1;i<sequence;i++) {
        result = a + b;
        a = b;
        b = result;
    }

    return result;
}

int fibonacci_recursive(int sequence) {
    if (sequence<2) return sequence;
    return fibonacci_recursive(sequence - 2) + fibonacci_recursive(sequence - 1);
}
