#pragma once

int NWD(int lhs, int rhs) {
    
    int hel;
    
    while (rhs!=0){
        
        hel = rhs;
        rhs = lhs%rhs;
        lhs = hel;
        
    }
    
    if (lhs < 0){
    
        return lhs * (-1);
        
    }
    else {
        
        return lhs;
    }
}

int NWW(int lhs, int rhs) {

    if (lhs == 0 and rhs == 0){
        return 0;
    }
    
    int results = lhs/ NWD( lhs, rhs) * rhs;
    
    if (results < 0){
        return results * (-1);
    }
    
    else {
        return results;
    }
    
}
