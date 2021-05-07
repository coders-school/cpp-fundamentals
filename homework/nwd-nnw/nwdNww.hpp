#pragma once

int NWD(int lhs, int rhs)
{
    if (lhs < 0)
        lhs = std::abs(lhs); // Absolute value of lhs
    if (rhs < 0)
        rhs = std::abs(rhs); // Absolute value of rhs
    while (rhs) // while rhs is 1
    {
        int rkeeper = rhs; // copy value to temp variable
        rhs = lhs % rhs; // get rhs by modulo
        lhs = rkeeper; // if while is still active assign to lhs value from rkeeper
    };
    return lhs;
}

int NWW(int lhs, int rhs)
{
    return -1;
}
