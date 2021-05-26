#pragma once

// void swap(int& a, int& b)
// {
//     int temp = a;
//     a = b;
//     b = temp;
// }

int NWD(int lhs, int rhs) {
    // TODO: Implement me :)
    int tmp;
    while(rhs != 0){
        tmp = lhs % rhs;
        lhs = rhs;
        rhs = tmp;
    }
    if(lhs < 0)
        lhs*=-1;
    return lhs;
}

int NWW(int lhs, int rhs) {
    // TODO: Implement me :)
    if(lhs == 0 && rhs ==0)
        return 0;
    int temp = lhs*rhs/NWD(lhs,rhs);
    if(temp < 0)
        temp*=-1;
    return temp;
}
