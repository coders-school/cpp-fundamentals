#pragma once
#include <cmath>
#include <cstdlib>
#include <iostream>

int NWD(int lhs, int rhs) {
  lhs = abs(lhs);
  rhs = abs(rhs);
  while (lhs != rhs) {

    if (lhs > rhs) {
      lhs -= rhs;
    } else {
      rhs -= lhs;
    }
    // std::cout <<rhs<<" rhs"<<'\n';
    // std::cout <<lhs<<" lhs"<<'\n';
  }
  //std::cout << "lhs  " << lhs << "<--poza while" << '\n';
  return lhs;
}

int NWW(int lhs, int rhs) {
  auto a = lhs;
  lhs = abs(lhs);
  rhs = abs(rhs);

  while (lhs != rhs) {

    if (lhs > rhs) {
      lhs -= rhs;
    } else {
      rhs -= lhs;
    }
  }
  return 99;
}
