#pragma once
#include <cmath>

int NWD(int lhs, int rhs) {
  if (rhs == 0) {
    return std::abs(lhs);
  }
  return NWD(rhs, lhs % rhs);
}

int NWW(int lhs, int rhs) {
  if (rhs == 0) {
    return 0;
  }
  return std::abs(lhs * rhs) / NWD(lhs, rhs);
}
