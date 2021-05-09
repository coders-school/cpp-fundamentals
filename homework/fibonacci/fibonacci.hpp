#pragma once

int fibonacci_iterative(int sequence) {
    if (sequence == 0) {return 0;}
    if (sequence <= 2) {return 1;}
    int f1 = 1;
    int f2 = 1;
    int f3 = 0;
    for (size_t i = 3; i <= sequence; i++)
    {
        f3 = f1 + f2;
        f1 = f2;
        f2 = f3;
    }
    return f3;
}

int fibonacci_recursive(int sequence) {
    // TODO: Your implementation goes here
    return 0;
}
