#pragma once

int NWD(int lhs, int rhs) {
    int number;
    if (lhs>rhs) number=rhs;
    else number=rhs;
    while ((lhs%number!=0)||(rhs%number!=0))
    {
       number--;
    }
    return number;
}

int NWW(int lhs, int rhs) {
    // TODO: Implement me :)
    return -1;
}
