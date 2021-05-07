#pragma once

int fibonacci_iterative(int sequence) {
    
   if(sequence==0||sequence==1)return sequence;

   unsigned a =1, b =1;
   for(unsigned i =0;i<sequence-2;i++)
   {
    unsigned int temp;
    temp = b;
    b+=a;
    a =temp;
   }
    return b;
}

int fibonacci_recursive(int sequence) {
    
    if(sequence<=1) {return sequence;}
    else{
        return fibonacci_recursive(sequence-1)+fibonacci_recursive(sequence-2);
    }
    
   return 0;
}
