#pragma once

int NWD(int lhs, int rhs) {

    if (lhs == 0 && rhs == 0) {
        return 0;
    }
    else if (lhs == 0 && rhs != 0) {
        return rhs;
    }
    else if (rhs == 0 && lhs != 0) {
        return lhs;
    }
    
    int lowerNumber = std::min(std::abs(lhs), std::abs(rhs));
    int higherNumber = std::max(std::abs(lhs), std::abs(rhs));
    // Alternative way to set the higherNumber - could be a bit more efficient?
    // int higherNumber = (lhs == lowerNumber ? rhs : lhs);
    int divisor = lowerNumber;
    int i = 2;
    while(divisor > 1) {
        if (higherNumber % divisor == 0) {
            return divisor;
        }
        if (lowerNumber % i == 0) {
            divisor = lowerNumber / i;
        }
        ++i;
    }
    return 1;

}

int NWW(int lhs, int rhs) {
    // TODO: Implement me :)
    return -1;
}
