#pragma once

int fibonacci_iterative(int sequence)
{
    int top {0};
    int previus {0};
    int current {1};
    

    for(int i{0}; i < sequence; i++){
        previus = current;
        current = top;
        top = previus + current;
    }

    return top;
}

int fibonacci_recursive(int sequence)
{
    // TODO: Your implementation goes here
    return 0;
}
