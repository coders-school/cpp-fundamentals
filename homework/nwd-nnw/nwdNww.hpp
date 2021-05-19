#pragma once

int NWD(int lhs, int rhs) {
    // TODO: Implement me :)
    if (lhs <= 0 || rhs <= 0) {
        std::cout << "the numbers must be positive";
        return 1;
    } else {
        int second;

        while (rhs != 0) {
            second = rhs;
            rhs = lhs % rhs;
            lhs = second;
        }
        return lhs;
    }
}

int NWW(int lhs, int rhs) {
    // TODO: Implement me :)
    if (lhs <= 0 || rhs <= 0) {
        std::cout << "the numbers must be positive";
        return 0;
    } else {
        return (lhs / NWD(lhs, rhs)) * rhs;
    }
}
