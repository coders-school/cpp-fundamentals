#pragma once

int NWD(int lhs, int rhs) {
    // TODO: Implement me :)

    lhs = std::abs(lhs);
    rhs = std::abs(rhs);

    if (lhs == 0 && rhs == 0) {
        return 0;
    }

    if (lhs == 0 && rhs != 0) {
        return rhs;
    }

    if (lhs != 0 && rhs == 0) {
        return lhs;
    }

    if (rhs >= lhs) {
        int tmp{0};
        tmp = lhs;
        lhs = rhs;
        rhs = tmp;
    }

    if (lhs % rhs == 0) {
        return rhs;
    }

    while (rhs > 0) {
        int tmp{0};
        tmp = rhs;
        rhs = lhs % rhs;
        lhs = tmp;
    }

    return lhs;
}

int NWW(int lhs, int rhs) {
    lhs = std::abs(lhs);
    rhs = std::abs(rhs);

    if (lhs == 0 || rhs == 0) {
        return 0;
    }

    if (lhs == rhs) {
        return lhs;
    }

    int gcd = NWD(lhs, rhs);

    if (gcd > 0) {
        return lhs * rhs / gcd;
    }
    return lhs * rhs;
}
