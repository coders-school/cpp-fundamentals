#pragma once


int fibonacci_iterative(int sequence) {
    // TODO: Your implementation goes here

    int n=1;
    int n1=0;
    int temp=0;

    if (sequence<=1) return sequence;

    for (int i=2;i<=sequence;i++)    {
        temp=n+n1;
        n1=n;
        n=temp;
    }

        return n;
}

int fibonacci_recursive(int sequence) {
    // TODO: Your implementation goes here

if (sequence<=1) return sequence;
return fibonacci_recursive(sequence-1)+fibonacci_recursive(sequence-2);

}
