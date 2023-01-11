#pragma once

int NWD(int lhs, int rhs) {
    int tmp = 0;
    if (lhs == 0) {
       tmp = abs(rhs);
    } else if (rhs == 0) {
        tmp = abs(lhs);
    } else if (abs(lhs) < abs(rhs)) {
        if (rhs % lhs == 0) {
            tmp = abs(lhs);
        } else {
            int tmp1 = lhs;
            lhs = rhs % lhs;
            rhs = tmp1;
            tmp = abs(NWD(lhs,rhs));
        }
    } else if (abs(lhs) > abs(rhs)) {
        if ( lhs % rhs == 0) {
            tmp = abs(rhs);
        } else {
            int tmp1 = rhs;
            rhs = lhs % rhs;
            lhs = tmp1;
            tmp = abs(NWD(lhs, rhs));
        }
    } else {
        tmp = abs(lhs);
    }
    return tmp;
}

int NWW(int lhs, int rhs) {
    // TODO: Implement me :)
    return -1;
}
