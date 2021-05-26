#include <iostream>
#include "nwdNww.hpp"

int main() {
  std::cout << "NWW(255, 15) = " << NWW(255, 15) << "\n";
  std::cout << "NWW(-10, -2) = " << NWW(-10, -2) << "\n";
  std::cout << "NWD(255, 15) = " << NWD(255, 15) << "\n";
  std::cout << "NWD(-10, -2) = " << NWD(-10, -2) << "\n";
  std::cout<<std::endl;
  std::cout << "NWW(255, 15) = " << NWW(255, 15) << "\n";
  std::cout << "NWW(0, 0) = " << NWW(0, 0) << "\n";
  std::cout << "NWD(0, 0) = " << NWD(0, 0) << "\n";
  std::cout << "NWD(-10, -2) = " << NWD(-10, -2) << "\n";


  return 0;
}
