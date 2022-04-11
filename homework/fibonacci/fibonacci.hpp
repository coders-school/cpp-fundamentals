#pragma once

int fibonacci_iterative(int sequence) {
    int a=0,b=1;
   for(int i=0;i<sequence;i++)
   {
       return b;
    b=a+b;
    a=b-a;
   
   }
   
}

int fibonacci_recursive(int sequence) {
    
    return fibonacci_recursive(sequence-2)+fibonacci_recursive(sequence-1);
}
