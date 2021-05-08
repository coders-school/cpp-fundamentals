#pragma once

int NWD(int lhs, int rhs) {
    if(lhs==0 && rhs==0){return 0;}
    int divider;
    if (lhs>rhs){divider = lhs;}
    else {divider = rhs;}
    while(lhs%divider!=0 || rhs%divider!=0)
    {
        --divider;
    }

    return divider;
    
    return -1;
}

int NWW(int lhs, int rhs) {
    int multiple;

    if(lhs ==0 || rhs==0){return 0;}

    if (rhs>lhs){multiple = rhs;}
    else{multiple = lhs;}

    if(multiple<0){multiple=multiple*(-1);}

    while(multiple%lhs!=0 || multiple%rhs!=0)
    {
        ++multiple;
    }
    return multiple;

    return -1;
}
