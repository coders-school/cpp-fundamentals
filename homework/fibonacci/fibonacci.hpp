#pragma once

int fibonacci_iterative(int sequence) {
    if (sequence == 0) {
        return 0;
    } else if (sequence == 1) {
        return 1;
    } else {
        int fibonacci_tab[sequence];
        fibonacci_tab[0] = 0;
        fibonacci_tab[1] = 1;
        
        for (int i = 2; i <= sequence; i++) {
            fibonacci_tab[i] = fibonacci_tab[i-1] + fibonacci_tab[i-2];
        }
        return fibonacci_tab[sequence];
    }

    return 0;
}

int fibonacci_recursive(int sequence) {
    // TODO: Your implementation goes here
    return 0;
}
