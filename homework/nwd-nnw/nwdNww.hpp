#pragma once

int NWD(int lhs, int rhs) {
    int remainder;
    while (rhs != 0) {
        remainder = lhs % rhs;
        lhs = rhs;
        rhs = remainder;
    }

    return std::abs(lhs);
}

int NWW(int lhs, int rhs) {
    if (!lhs || !rhs) {
        return 0;
    }
    
    return std::llabs(static_cast<unsigned long long>(lhs) * rhs / NWD(lhs, rhs));
}
