#pragma once

int fibonacci_iterative(int sequence) {
    // TODO: Your implementation goes here
    
    if (sequence > 1) {
        int Fn_2 = 0;
        int Fn_1 = 1;
        int Fn = Fn_2 + Fn_1;

        for(int i = 0; i < sequence-2 ;i++)
        {
            Fn_2 = Fn_1;
            Fn_1 = Fn;
            Fn = Fn_1 + Fn_2;
        }
        return Fn;
    } else if (sequence == 1){
        int Fn = 1;
        return Fn;
    }
    
    int Fn = 0;
    return Fn;
}

int fibonacci_recursive(int sequence) {
    // TODO: Your implementation goes here
    return 0;
}
