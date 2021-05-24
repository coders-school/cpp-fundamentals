#include <iostream>
#include "nwdNww.hpp"

int main() {
  int l,r;
  std::cin>>l;
  std::cin>>r;
  


  std::cout << "NWW("<<l<<","<<r<<") = " << NWW(l, r) << "\n";
  std::cout << "NWD("<<l<<","<<r<<") = " << NWD(l, r) << "\n";

  return 0;
}
