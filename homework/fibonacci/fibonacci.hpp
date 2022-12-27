#pragma once

int fibonacci_iterative(int sequence) {
    // TODO: Your implementation goes here
 	
    int a = 0;
    int b = 1;
    int c = 1;

    for(int i = 0; i < sequence; i++)
    {      
        c = a;
        a = a + b;
        b = c; 
    }  

    return a;

}

int fibonacci_recursive(int sequence) {
    // TODO: Your implementation goes here
    
if(sequence == 0){
        return 0;
    }else if(sequence == 1){
        return 1;
    }
    return fibonacci_recursive(sequence-2)+fibonacci_recursive(sequence-1);

}
