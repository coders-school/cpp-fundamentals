#pragma once

int fibonacci_iterative(int sequence) {
    int a = 0, b = 1;
    for(int i=0;i<sequence;i++){
        b += a;
        a = b-a;
    } 
    return b;
}

int fibonacci_recursive(int sequence) {
    if(sequence==0) return 0;
    if(sequence==1) return 1;
	return fib(sequence-2)+fib(sequence-1);
}
