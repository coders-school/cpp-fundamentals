#pragma once

int NWD(int lhs, int rhs) {
    if (lhs == 0 && rhs != 0) {
        return rhs;
    } else if (rhs == 0 && lhs != 0) {
        return lhs;
    } else if (lhs == rhs) {
        return lhs;
    } else {
        int loVal = std::min(std::abs(lhs), std::abs(rhs));
        while (loVal > 0) {
            if ((lhs % loVal == 0) && (rhs % loVal == 0)) {
                return loVal;
            } else {
                loVal--;
            }
        }
        return 1;
    }
}

int NWW(int lhs, int rhs) {
    if (lhs == 0 || rhs == 0) {
        return 0;
    }

    int loVal = std::min(std::abs(lhs), std::abs(rhs));
    int hiVal = std::max(std::abs(lhs), std::abs(rhs));
    int multiplyLoVal = loVal;
    int multiplyHiVal = hiVal;

    while (multiplyLoVal != multiplyHiVal) {
        if (multiplyLoVal < multiplyHiVal) {
            multiplyLoVal += loVal;
        }
        if (multiplyHiVal < multiplyLoVal) {
            multiplyHiVal += hiVal;
        }
    }

    return multiplyLoVal;
}