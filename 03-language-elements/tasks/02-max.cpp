#include <iostream>

// Write your function here

int max(int n1, int n2, int n3)
{
    if (n1 > n2)
    {
        if (n1 > n3)
        {
            return n1;
        }
        else
        {
            return n3;
        }
    }
    else
    {
        if (n2 > n3)
        {
            return n2;
        }
        else
        {
            return n3;
        }
    }
}

int main()
{
    std::cout << "max (1, 2, 3): " << max(1, 2, 3) << "\n";
    std::cout << "max (2, 3, 1): " << max(2, 3, 1) << "\n";
    std::cout << "max (3, 2, 1): " << max(3, 2, 1) << "\n";

    return 0;
}
