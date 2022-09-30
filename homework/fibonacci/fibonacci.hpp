#pragma once

int fibonacci_iterative(int sequence)
{
      // TODO: Your implementation goes here
      //
      int Fibonacci[sequence];

      for (int i =0; i <= sequence; i++)
      {

            if (i == 0)  //added for 1 exeption - than it have to be one without anything
            {
                  Fibonacci[0]=0;
            }
            else if (i == 1)
            {
                  Fibonacci[1]=1;
            }
            else
            {
                  Fibonacci[i] = Fibonacci [i -2] + Fibonacci[i -1];
            }
      }

      return Fibonacci[sequence];
}

int fibonacci_recursive(int sequence)
{
      // TODO: Your implementation goes here
      int num = 0; //Additional variable for returning value
      switch(sequence)
      {
      case 0:
            num = 0;
            break;
      case 1:
            num = 1;
            break;
      default:
            num = fibonacci_recursive(sequence - 2) + fibonacci_recursive( sequence - 1);
      }
      return num;
}
