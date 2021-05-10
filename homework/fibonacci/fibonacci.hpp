#pragma once
 
 int fibonacci_iterative(int sequence) {
 if(sequence == 0)
 {
     return 0;
 }
 if(sequence == 1 || sequence == 2 )
 {
     return 1;
 }
 int i = 2, num1 = 0, num2 = 1;
 int sumPrev;
 int suma = 2;
     while (i <= sequence )
     {
       sumPrev = num1 + num2;
       num1 = num2;
       num2 = sumPrev;
       i++;
     }
     return sumPrev;
 }
 
 int fibonacci_recursive(int sequence) {
             if(sequence <=1)
         {
             return sequence;
         }
          return fibonacci_recursive(sequence - 1 ) +  fibonacci_recursive(sequence - 2 );
 }
