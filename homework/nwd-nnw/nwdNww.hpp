#pragma once

int NWD(int lhs, int rhs)
{
    if (lhs < 0)
        lhs = std::abs(lhs); // Absolute value of lhs
    if (rhs < 0)
        rhs = std::abs(rhs); // Absolute value of rhs
    while (rhs)              // while rhs is 1
    {
        int rkeeper = rhs; // copy value to temp variable
        rhs = lhs % rhs;   // get rhs by modulo
        lhs = rkeeper;     // assign to lhs value from rkeeper
    };
    return lhs; // pass lhs as score
}

int NWW(int lhs, int rhs)
{
    return (!lhs || !rhs) ? 0 : std::abs(lhs * rhs) / NWD(lhs, rhs); // if lhs or rhs are 0 return 0 if not -> count correct value and return
}
