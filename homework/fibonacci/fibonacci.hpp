#pragma once

int fibonacci_iterative(int sequence) {
  if (sequence != 0) {
    auto b{1};
    for (auto i = 1, a = 0; i < sequence; i++) {
      b += a;
      a = b - a;
    }
    return b;
  }
  return 0;
}

int fibonacci_recursive(int sequence) {

  if (sequence == 0) {
    return 0;
  } else if (sequence == 1) {
    return 1;
  }
  return fibonacci_recursive(sequence - 2) +
         (fibonacci_recursive(sequence - 1));
}
