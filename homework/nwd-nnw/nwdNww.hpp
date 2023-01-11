#pragma once

int NWD(int lhs, int rhs) {
    // TODO: Implement me :)
    if (lhs == 0) {
        return abs(rhs);
    } else if (rhs == 0) {
        return abs(lhs);
    } else if (abs(lhs) < abs(rhs)) {
        if (rhs % lhs == 0) {
            return abs(lhs);
        } else {
            int tmp = lhs;
            lhs = rhs % lhs;
            rhs = tmp;
            return abs(NWD(lhs, rhs));
        }
    } else if (abs(lhs) > abs(rhs)) {
        if ( lhs % rhs == 0) {
            return abs(rhs);
        } else {
            int tmp = rhs;
            rhs = lhs % rhs;
            lhs = tmp;
            return abs(NWD(lhs, rhs));
        }
    } else {
        return abs(lhs);
    }
}

int NWW(int lhs, int rhs) {
    // TODO: Implement me :)
    return -1;
}
