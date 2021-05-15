#pragma once

int fibonacci_iterative(int sequence) {
    // TODO: Your implementation goes here

    if(sequence < 2)
    {
        return sequence;
    }
    // 0 1 1 2 3 5 8 13 21 34 
    int first =1;
    int second =1;
    while(sequence-- > 2)
    {
        second = second + first;
        first = second - first;
    }

    return second;
}

int fibonacci_recursive(int sequence) {
    // TODO: Your implementation goes here
   if(sequence < 2)
   {
       return sequence;
   }
   else{
       return fibonacci_recursive(sequence -1) + fibonacci_recursive(sequence -2);
    
   }
    
}
