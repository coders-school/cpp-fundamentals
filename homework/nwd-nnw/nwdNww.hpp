#pragma once
#include <cmath>

int NWD(int lhs, int rhs) {
  lhs = abs(lhs);
  rhs = abs(rhs);

  if (rhs == 0 && lhs == 0) {
    return 0;
  }
  while (lhs != rhs) {
    if (lhs > rhs)
      lhs -= rhs;
    else
      rhs -= lhs;
  }
  return lhs;
}

int NWW(int lhs, int rhs) {
  auto i{1};
  while (rhs != 0) {
    i = rhs;
    rhs = lhs % rhs;
    lhs = i;
  }
  return lhs;
}
