#include "vectorFunctions.hpp"
#include <iostream>
#include <string>


int main() {
    auto vec = generate(10);
    print(vec);
    add10(vec);
    print(vec);
    sub10(vec);
    print(vec);

    return 0;
}