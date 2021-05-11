#pragma once

int fibonacci_iterative(int sequence) {
    // TODO: Your implementation goes here
        int an1 = 1; // a(n-1) - n-1 element of fibonacci series
    int an2 = 0; // a(n-2) - n-2 element of fibonacci series
    int an = 0; // a(n) - n element of fibonacci series

    if(sequence == 0){
        return 0;
    }
    if(sequence == 1){
        return 1;
    }
    if (sequence >= 2){
        for(int n = 2; n <= sequence; n++){
            an = an2 + an1;
            an2 = an1;
            an1 = an;
        }
        return an;
    }
    return 0;
}

int fibonacci_recursive(int sequence) {
    // TODO: Your implementation goes here
    return 0;
}
