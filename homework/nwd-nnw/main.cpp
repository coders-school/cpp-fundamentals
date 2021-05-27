#include <iostream>
#include "nwdNww.hpp"

int main() {
  int l,r;
  std::cin>>l;
  print(l);
  std::cin>>r;
  print(r);
  


  std::cout << "NWW("<<l<<","<<r<<") = " << NWW(l, r) << "\n";
  std::cout << "NWD("<<l<<","<<r<<") = " << NWD(l, r) << "\n";

  return 0;
}
