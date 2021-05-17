#pragma once

int NWD(int lhs, int rhs) {
    int pom;
    
	while(rhs!=0)
    {
		pom = rhs;
		rhs = lhs%rhs;
		lhs = pom;	
	} if (lhs<0){
            return lhs/-1;	
	} else
     return lhs;   
}


int NWW(int lhs, int rhs) {
     int nww;
    int pom;
    int c = lhs*rhs;
    if(lhs==0||rhs==0){
	return 0;
	} while(rhs!=0){
		pom = rhs;
		rhs = lhs%rhs;
		lhs = pom;
        	} nww = c/lhs;
        	if(nww<0) {
        	return nww/-1;
        	} else
        	return nww;
}
