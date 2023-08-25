#pragma once

int fibonacci_iterative(int sequence) {
  int a = 0, b = 1, res = 0,z=0;
  for (int i = 0; i < sequence+1; i++) {
    res = a+b;
    z=a;
    a = b;
    b = res;
  }
  return z;
}
int fibonacci_recursive(int sequence) {
     if (sequence == 0)
        return 0;

    if (sequence == 1)
        return 1;

    return fibonacci_recursive(sequence-1)+fibonacci_recursive(sequence-2);
}
