#pragma once

int NWD(int lhs, int rhs) {
    int higher {0};

    if(lhs > rhs)
    {
        higher = lhs >= 0 ? lhs : -lhs;
    }
    else
    {
        higher = rhs >= 0 ? rhs : -rhs;
    }

    for(int i {higher}; i > 0; --i)
    {
        if(lhs%i == 0 && rhs%i == 0)
        {
            return i;
        }
    }
    return 0;
}

int NWW(int lhs, int rhs) {
    if(lhs == 0 || rhs == 0)
    {
        return 0;
    }

    int result {lhs};
    while(true)
    {
        if(result%rhs == 0)
        {
            return result >= 0 ? result : -result;
        }
        result += lhs;
    }
}
