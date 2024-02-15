#include <iostream>

int max(int a, int b, int c)
{
    if(a>b)
    {
        if(a>c)
        {
            return a;
        }
        else return c;
    }
    else if(b>c)
    {
        return b;
    }
    else return c;
}

int main() {
    std::cout << "max (1, 2, 3): " << max (1, 2, 3) << "\n";
    std::cout << "max (1, 3, 2): " << max (1, 3, 2) << "\n";
    std::cout << "max (2, 3, 1): " << max (2, 3, 1) << "\n";
    std::cout << "max (2, 1, 3): " << max (2, 1, 3) << "\n";
    std::cout << "max (3, 2, 1): " << max (3, 2, 1) << "\n";
    std::cout << "max (3, 1, 2): " << max (3, 1, 2) << "\n";

    return 0;
}
