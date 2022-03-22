#include <iostream>

// Write your function here

int max(const int&, const int&, const int&);

int main() {
    std::cout << "max (1, 2, 3): " << max (1, 2, 3) << "\n";
    std::cout << "max (1, 3, 2): " << max (1, 3, 2) << "\n";
    std::cout << "max (2, 3, 1): " << max (2, 3, 1) << "\n";
    std::cout << "max (2, 1, 3): " << max (2, 1, 3) << "\n";
    std::cout << "max (3, 2, 1): " << max (3, 2, 1) << "\n";
    std::cout << "max (3, 1, 2): " << max (3, 1, 2) << "\n";

    return 0;
}

int max(const int& a, const int& b,const int& c)
{
  int max = a;
  if(b > max) max = b;
  if(c > max) max = c;
  return max;
}
