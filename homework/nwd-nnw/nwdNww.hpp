#pragma once

int NWD(int lhs, int rhs) {
    // TODO: Implement me :)
    int pom;
    
if(lhs == 0 && rhs == 0){
    return 0;
}    
else{
    lhs=abs(lhs);
    rhs=abs(rhs);
        
        while(rhs!=0)
        {
            pom = rhs;
            rhs = lhs%rhs;
            lhs = pom;	
        }
        
        return lhs;
    }
}

int NWW(int lhs, int rhs) {
    // TODO: Implement me :)
    if(lhs == 0 || rhs == 0){
        return 0;
    }
    else{
        lhs=abs(lhs);
        rhs=abs(rhs);
        return lhs*rhs/NWD(lhs, rhs);
    }
}
