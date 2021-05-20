#pragma once
#include <iostream>


int fibonacci_iterative(int sequence) {
    // TODO: Your implementation goes here
std::cin>>sequence;
int n=1;
int n1=0;
int temp=0;

if (sequence<=1) return sequence;
else{
    for (int i=2;i<=sequence;i++)    {
        temp=n+n1;
        n1=n;
        n=temp;
    }
}
    return n;
}

int fibonacci_recursive(int sequence) {
    // TODO: Your implementation goes here
    return 0;
}
