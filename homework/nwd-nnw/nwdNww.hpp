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
    // TODO: Implement me :)
    return -1;
}
