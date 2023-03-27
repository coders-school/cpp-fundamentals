
int fibonacci_iterative(int sequence) {

      int fib = 0;
    int fib_prev = 1;

    for (int i = 0; i < sequence; i++) {
        int temp = fib;
        fib += fib_prev;
        fib_prev = temp;
    }

    return fib;
}

int fibonacci_recursive(int sequence) {

    if (sequence <= 1) {
        return sequence;
    }

    return fibonacci_recursive(sequence - 1) + fibonacci_recursive(sequence - 2);
}
//done
