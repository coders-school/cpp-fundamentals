#pragma once

int NWD(int lhs, int rhs)
{
    if (lhs < 0)
        lhs *= -1;
    else if (lhs == 0)
        return rhs;
    if (rhs < 0)
        rhs *= -1;
    else if (rhs == 0)
        return lhs;

    while (rhs != lhs)
    {
        if (rhs > lhs)
        {
            rhs = rhs - lhs;
        }
        else
        {
            lhs = lhs - rhs;
        }
    }

    return lhs;
}

int NWW(int lhs, int rhs)
{
    if (lhs < 0)
        lhs *= -1;
    else if (lhs == 0)
        return 0;
    if (rhs < 0)
        rhs *= -1;
    else if (rhs == 0)
        return 0;
    return (lhs * rhs / (NWD(lhs, rhs)));
}
