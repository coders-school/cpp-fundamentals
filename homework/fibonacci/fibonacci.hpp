#pragma once

int fibonacci_iterative(int sequence) {
    // TODO: Your implementation goes here
    return 0;
}

int fibonacci_recursive(int sequence) {
if(sequence<3)
    return 1;

return fibonacci_recursive(sequence-2)+fibonacci_recursive(sequence-1);
    
}
