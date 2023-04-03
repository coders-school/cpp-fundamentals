#pragma once

int NWD(int lhs, int rhs) {
    lhs = abs(lhs);
    rhs = abs(rhs);
    int variable = 0;
    while (rhs != 0) {
        variable = rhs;
        rhs = lhs % rhs;
        lhs = variable;
    }
    return lhs;
}

int NWW(int lhs, int rhs) {
    if (rhs == 0) {
        return 0;
    }
    lhs = abs(lhs);
    rhs = abs(rhs);
    return (lhs * rhs) / NWD(lhs, rhs);
}
