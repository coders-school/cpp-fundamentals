#pragma once

int fibonacci_iterative(int sequence)

 {
    int i;
    int tab[1000000];
    for(int i=0; i<= sequence; i++)
    tab[i]= tab[i-1] + tab[i-2];
    return tab[i];
}

int fibonacci_recursive(int sequence) {
    if (sequence >=3)
    {
        return fibonacci_recursive(sequence -1) + fibonacci_recursive(sequence -2);
    }
    else if (sequence > 0)
    {
        return 1;
    }

    return 0;
}
