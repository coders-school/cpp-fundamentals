#pragma once

int fibonacci_iterative(int sequence) {
    // TODO: Your implementation goes here
    int myArr[sequence + 2];
    myArr[0] = 0;
    myArr[1] = 1;
    
    for(int i = 2; i <= sequence; i++) {
        myArr[i] = myArr[i - 1] + myArr[i - 2];
    }

    return myArr[sequence];
}

int fibonacci_recursive(int sequence) {
    // TODO: Your implementation goes here
    if(sequence <= 1) {\
        return sequence;
    } else {
        return fibonacci_recursive(sequence - 1) + fibonacci_recursive(sequence - 2);
    }
}
