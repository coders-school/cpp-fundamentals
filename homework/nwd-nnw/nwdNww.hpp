#pragma once

int NWD(int lhs, int rhs) {
if (lhs<0) lhs=-lhs;
    if (rhs<0) rhs=-rhs;
      if (lhs==0) return rhs;
      else if (rhs==0) return lhs;
      else {
        while( lhs != rhs )
        if( lhs < rhs ) rhs -= lhs; 
        else lhs -= rhs;
        }return lhs;
}

int NWW(int lhs, int rhs) {
    // TODO: Implement me :)
    return -1;
}
