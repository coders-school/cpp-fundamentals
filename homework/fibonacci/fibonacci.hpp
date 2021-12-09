#pragma once

int fibonacci_iterative(int sequence) {
    int x {0}, y {1}, z{0};
    for(int i=0; i<sequence; ++i){
            z = x + y;
            x = y;
            y = z;
        };
    return x;
}

int fibonacci_recursive(int sequence) {
    if(sequence == 0)
     {return 0;}
     else if(sequence == 1 || sequence == 2)
     {return 1;}
     return fibonacci_recursive(sequence-1) + fibonacci_recursive(sequence-2);
}
