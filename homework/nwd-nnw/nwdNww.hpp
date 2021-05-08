#pragma once

int NWD(int lhs, int rhs) {

    int tmp;

    lhs = abs(lhs);
    rhs = abs(rhs);

    while( rhs != 0 )
    {
        tmp = rhs;
        rhs = lhs % rhs;
        lhs = tmp;
    }

    return lhs;
}

int NWW(int lhs, int rhs) {

    if ( lhs == 0 or rhs == 0 )
    {
        return 0;
    }

    lhs = abs(lhs);
    rhs = abs(rhs);

    return lhs / NWD(lhs, rhs) * rhs;
}
