#pragma once

int NWD(int lhs, int rhs) {
   {
	int pom;

  	while(b!=0)
	{
    	pom = b;
    	b = a%b;
    	a = pom;  
  	}
	if (a<0){
		a*=-1;
	}
    return a;
}

int NWW(int lhs, int rhs) {
    int pom;
	int c=a, d=b;
	int e;
  	while(b!=0)
	{
    	pom = b;
    	b = a%b;
    	a = pom;  
  	}
	if (a<0){
		a*=-1;
	}
	if(a==0){
		return 0;
	}else {
	e=(c/a) * d;
	if (e<0){
		e*=-1;
	}
	return e;	
	}
}
