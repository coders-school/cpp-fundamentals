#include <iostream>
#include <string>
#include <memory>
#include <vector>
#include "vectorFunctions.hpp"
#include "vectorFunctions.cpp"


int main() 
{
    auto vec = generate(10);
      print(vec);
      add10(vec);
      print(vec);
      sub10(vec);
      print(vec);

    return 0;
}
