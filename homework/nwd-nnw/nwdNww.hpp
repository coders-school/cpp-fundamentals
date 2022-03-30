#pragma once

int NWD(int lhs, int rhs) {
    if (lhs < 0) {
        lhs = lhs * -1;
    }

    if (rhs < 0) {
        rhs = rhs * -1;
    }

    while (rhs) {
        auto temp = lhs;
        lhs = rhs;
        rhs = temp  % rhs;
    }

    return lhs;
}

int NWW(int lhs, int rhs) {
    if (lhs == 0 || rhs == 0) {
        return 0;
    }

    if (lhs < 0) {
        lhs = lhs * -1;
    }

    if (rhs < 0) {
        rhs = rhs * -1;
    }

    auto lhsrhs = lhs * rhs;

    while (rhs) {
        auto temp = lhs;
        lhs = rhs;
        rhs = temp % rhs;
    }

    return lhsrhs / lhs;
}
