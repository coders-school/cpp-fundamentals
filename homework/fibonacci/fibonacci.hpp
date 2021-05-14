int fibonacci_iterative(int sequence) {
    int a = 0;
    int b = 1;
     for (int i = 0; i < sequence; ++i) {
        b += a;
        a = b - a;
    }
    return a;
}

int fibonacci_recursive(int sequence) {
    if (sequence < 2) {
        return sequence;
    }
    return fibonacci_recursive(sequence - 1) + fibonacci_recursive(sequence - 2);
}
