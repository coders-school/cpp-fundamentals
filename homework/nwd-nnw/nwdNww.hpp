#pragma once

int NWD(int lhs, int rhs) {
    if(lhs==0&&rhs==0){
        return 0;
    } else {

        if(lhs==0){
            return rhs;
        }
        if(rhs==0){
            return lhs;
        }

        if(lhs<0){
        lhs*=-1;
        }
        if(rhs<0){
        rhs*=-1;
        }
    
        for(int i=lhs; i>0; i--){
            if(lhs%i==0){
                for(int j=rhs; j>0; j--){
                    if(rhs%j==0){
                        if(j==i){
                        
                         return j;    
                        }
                    }
                 }
            }
        }   
    }
    
    
    return 1;
}

int NWW(int lhs, int rhs) {
    if(lhs==0||rhs==0){
        return 0;
    }else{
        if(lhs<0){
        lhs*=-1;
        }
        if(rhs<0){
        rhs*=-1;
        }
        return (lhs * rhs) / NWD(lhs,rhs);
    }
}
    
