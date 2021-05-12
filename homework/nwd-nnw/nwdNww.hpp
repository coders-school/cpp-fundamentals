#pragma once

int NWD(int lhs, int rhs) {

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
