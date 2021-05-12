#pragma once

int fibonacci_iterative(int sequence) {
    if (sequence == 0 || sequence == 1){
        return sequence;
        }

        auto fst = 1u;
        auto sec = 1u;

        for (size_t i = 0; i < sequence-2; i++){
            auto temp = sec;
            sec += fst;
            fst = temp;
        }
        return sec;
    }
    
    
int fibonacci_recursive(int sequence) {
 
    if (sequence <= 1){
        return sequence;
    }else{
        return fibonacci_recursive(sequence-1) + fibonacci_recursive(sequence-2);
    }

 }


