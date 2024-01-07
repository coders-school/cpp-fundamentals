#pragma once

int NWD(int lhs, int rhs) {

    int result = 0;

    if (lhs == 0 && rhs == 0) {
        result = 0;
    } else if (lhs == 0 && rhs != 0) {
        result = rhs;
        return std::abs(result);
    } else if (lhs != 0 && rhs == 0) {
        result = lhs;
        return std::abs(result);
    }

    while (rhs != 0) {
        int temp = rhs;
        rhs = lhs % rhs;
        lhs = temp;
    }

    result = lhs;

    return std::abs(result);
}

int NWW(int lhs, int rhs) {
    
    return -1;
}
