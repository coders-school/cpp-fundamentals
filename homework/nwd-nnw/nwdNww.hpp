#pragma once

int NWD(int lhs, int rhs) {
	int pom;

  	while(rhs!=0)
	{
    	pom = rhs;
    	rhs = lhs%rhs;
    	lhs = pom;  
  	}
	if (lhs<0){
		lhs*=-1;
	}
    return lhs;
}

int NWW(int lhs, int rhs) {
  int pom;
  int c=lhs, d=rhs;
  int e;
  	while(rhs!=0){
    	pom = rhs;
    	rhs = lhs%rhs;
    	lhs = pom;  
  	}
	if (lhs<0){
		lhs*=-1;
	}
	if(lhs==0){
		return 0;
	}else {
	e=(c/lhs) * d;
	}
	if (e<0){
		e*=-1;
	}
	
	return e;	
}
