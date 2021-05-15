#pragma once

int fibonacci_iterative(int sequence) {
    // TODO: Your implementation goes here
    if (sequence < 2){
    	return sequence;
    }
    int a = 1;
    int b = 1;
    while (sequence--> 2){
    	b += a;
    	a = b - a;
    }
    return b;
}

int fibonacci_recursive(int sequence) {
    // TODO: Your implementation goes here
    if (sequence <=1){
    	return sequence;
    } 
    
    return fibonacci_recursive(sequence-1) + fibonacci_recursive(sequence-2);
   
}
