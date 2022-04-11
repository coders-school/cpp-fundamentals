#pragma once
#include <cstdlib>

int NWD(int lhs, int rhs) {
    if(lhs == 0 && rhs == 0) return 0;
    if(rhs != 0) return abs(NWD(rhs, lhs%rhs));
    return lhs;

}

int NWW(int lhs, int rhs) {
    if(lhs == 0 && rhs == 0) return 0;
    return abs((lhs*rhs)/NWD(lhs, rhs));
}
