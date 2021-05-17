#pragma once


int fibonacci_iterative(int sequence) 
{
   
   int x=1;
   int y=1;
   int z=0;
   if(sequence ==0)return 0;
   else if(sequence == 1)return x;
   else if(sequence == 2) return x;
   
   else
   {
   
   	for (int i=3; i<=sequence ; i++)
   	{
   	 z=y;
         y=y+x;
         x=z;
   	}
       return y;
   }
   
}

int fibonacci_recursive(int sequence) {
    if (sequence == 0)return 0;
    else if ((sequence ==1) || (sequence==2))return 1;
    else return fibonacci_recursive(sequence -1)+fibonacci_recursive(sequence -2);
}
