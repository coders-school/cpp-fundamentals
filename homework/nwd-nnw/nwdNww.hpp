#pragma once
#include <cmath>
#include <cstdlib>
#include <iostream>

int NWD(int lhs, int rhs) {
  lhs = abs(lhs);
  rhs = abs(rhs);
  auto i{lhs};
  while (lhs != 0) {
    i = lhs;
    lhs = rhs % lhs;
    rhs = i;
  }
  return rhs;
}

int NWW(int lhs, int rhs) {

  lhs = abs(lhs);
  rhs = abs(rhs);

  if (lhs == 0 || rhs == 0) {
    return 0;
  }
  return lhs / NWD(lhs, rhs) * rhs;
}
