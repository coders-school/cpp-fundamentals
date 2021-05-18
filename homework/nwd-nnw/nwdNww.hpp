#pragma once

int NWD(int lhs, int rhs) {
    // TODO: Implement me :)
    if(lhs == 0 || rhs == 0) {
        return std::max(lhs,rhs);
    } else if(lhs < 0 || rhs < 0) {
        return std::min(std::abs(lhs),std::abs(rhs));
    } else {
        while(lhs!=rhs)
        if(lhs>rhs)
           lhs-=rhs; 
        else
           rhs-=lhs; 
        return lhs; 
    }


}

int NWW(int lhs, int rhs) {
    // TODO: Implement me :)
    int pom;
  	while(rhs!=0)
	{
    	pom = rhs;
    	rhs = lhs%rhs;
    	lhs = pom;  
  	}
    return lhs;
}
