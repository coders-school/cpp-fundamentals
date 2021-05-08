#pragma once

int fibonacci_iterative(int sequence) {
    
    
    int tab[sequence+1];
    tab[0]=0;
    tab[1]=1;
    for (int i = 2; i<=sequence; i++)
    {
        tab[i]=tab[i-2]+tab[i-1];
    }

    sequence = tab[sequence];

    if (sequence == 0)
    {
        return tab[0];
    }
    else if (sequence == 1)
    {
        return tab[1];
    }
    else 
    {
        return sequence;
    }
    
    return 0;
}

int fibonacci_recursive(int sequence) {

    if (sequence ==0)
    {
        return 0;
    }
    else if(sequence == 1 || sequence ==2)
    {
        return 1;
    }
    else
    {
        --sequence;
        return fibonacci_recursive(sequence) + fibonacci_recursive(sequence-1);
    }
    return 0;
}
