#pragma once
#include <iostream>
#include <vector>

int fibonacci_iterative(int sequence) {
int first, second, fibElement;
first = 0; 
second =1; 
fibElement = 0;
for(size_t i = 0; i< sequence; i++){
    first = second;
    second = fibElement;
    fibElement = first + second;
}
return fibElement;
} 
   

int fibonacci_recursive(int sequence) {
  if (sequence <= 1){return sequence;}
    return fibonacci_recursive(sequence - 1) + fibonacci_recursive(sequence - 2);
}
