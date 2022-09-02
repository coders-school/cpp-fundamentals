#pragma once

int fibonacci_iterative(int sequence) {
    // TODO: Your implementation goes here
    if(sequence == 0){
        return 0;
    }else if (sequence == 1)
    {
        return 1;
    }else{
        int fibonacci = 0;
        int a = 0;
        int b = 1;
        for(int i = 2; i <= sequence; i++){
            fibonacci = a + b;
            a = b;
            b = fibonacci;
        }
        return fibonacci;
    }
}

int fibonacci_recursive(int sequence) {
    // TODO: Your implementation goes here
    if(sequence == 0){
        return 0;
    }else if (sequence == 1){
        return 1;
    }else{
        return fibonacci_recursive(sequence - 1) + fibonacci_recursive(sequence - 2);
    }
}
