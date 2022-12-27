#pragma once

int NWD(int lhs, int rhs) {
    // TODO: Implement me :)
	{

    while(lhs!=rhs)
       if(lhs>rhs)
           lhs = lhs - rhs;
       else
           rhs = rhs - lhs;
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
