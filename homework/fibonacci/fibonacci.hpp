#pragma once

int fibonacci_iterative(int sequence) {
    int a=1;
    int b=1;
    if(sequence==0) return 0;
    if(sequence==1) return 1;
    if(sequence==2) return 1;
    
    for (int i=3;i<sequence;i++)
    {
       a+=b;
       b=a-b;
    }
    return (a+b);
}

int fibonacci_recursive(int sequence) {
    if(sequence==0) return 0;
    if(sequence==1) return 1;
    else return (fibonacci_recursive(sequence-1)+fibonacci_recursive(sequence-2));
}
