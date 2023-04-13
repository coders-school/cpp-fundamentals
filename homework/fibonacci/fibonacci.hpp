#pragma once

int fibonacci_iterative(int sequence) {
    if(sequence <= 0)
        return 0;
    if (sequence == 1)
        return 1;

    int f{ 0 };
    int s{ 1 };
    int output{};
    for(int i{2}; i < sequence; ++i){
        output = f + s;
        f = s;
        s = output;
    }
    output = f + s;
    return output;
}

int fibonacci_recursive(int sequence) {
    if (sequence <= 0)
        return 0;
    else if (sequence == 1)
        return 1;
    else
        return fibonacci_recursive(sequence - 1) + fibonacci_recursive(sequence - 2);
    return 0;
}
