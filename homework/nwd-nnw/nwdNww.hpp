#pragma once
#include <numeric>

int NWD(int lhs, int rhs) {
    return std::gcd(lhs, rhs);
}

int NWW(int lhs, int rhs) {
    return std::lcm(lhs, rhs);
}
