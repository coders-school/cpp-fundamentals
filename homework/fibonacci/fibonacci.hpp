#pragma once
#include <stdexcept>

int fibonacci_iterative(int sequence) {
  if (sequence < 0) {
    throw std::runtime_error{"Invalid value"};
  } else if (sequence <= 1) {
    return sequence;
  }

  int first = 0, second = 1, result = 0;

  for (unsigned int i = 2; i <= sequence; ++i) {
    result = first + second;
    first = second;
    second = result;
  }
  return result;
}

int fibonacci_recursive(int sequence) {
  if (sequence < 0) {
    throw std::runtime_error{"Invalid value"};
  } else if (sequence <= 1) {
    return sequence;
  }

  return fibonacci_recursive(sequence - 1) + fibonacci_recursive(sequence - 2);
}
