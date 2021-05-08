#pragma once

int fibonacci_iterative(int sequence) {
    
    int fibN = 0;
    if(sequence > 1) {
        int fibMinus2 = 0;
        int fibMinus1 = 1;
        for(int i = 2; i <= sequence; ++i) {
            fibN = fibMinus1 + fibMinus2;
            fibMinus2 = fibMinus1;
            fibMinus1 = fibN;
        }
    }    
    else {
        return sequence;
    }
    return fibN;
}

int fibonacci_recursive(int sequence) {

    if (sequence >= 3) {
        return fibonacci_recursive(sequence - 1) + fibonacci_recursive(sequence - 2);
    }
    else if (sequence > 0) {
        return 1;
    }
    return 0;

}
