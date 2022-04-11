#pragma once

int fibonacci_iterative(int sequence) {
    int a=0,b=1;
   for(int i=0;i<sequence;i++)
   {
    b=a+b;
    a=b-a;
   }
    return 0;
}

int fibonacci_recursive(int sequence) {
    
    return 0;
}
