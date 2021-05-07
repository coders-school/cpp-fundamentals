#pragma once

int fibonacci_iterative(int sequence) {
    // TODO: Your implementation goes here
    return 0;
}

int fibonacci_recursive(int sequence) {
    if(sequence == 0 ) {
        return 0;
    }else if(sequence == 1){
        return 1;
    }else {
        return fibonacci_recursive(sequence-1)+fibonacci_recursive(sequence-2);
    }
}
