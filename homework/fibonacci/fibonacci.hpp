#pragma once

int fibonacci_iterative(int sequence) 
{
    // TODO: Your implementation goes here
    if(sequence < 2)
    {
        return sequence;
    }
    int first = 1;
    int secound = 1;

    while(sequence-- > 2)
    {
        secound += first;
        first = secound - first;

    }
    return secound;
}

int fibonacci_recursive(int sequence) 
{
   if (sequence <= 1)
   {
       return sequence;
   }
   return fibonacci_recursive(sequence - 1) + fibonacci_recursive(sequence - 2);
}
