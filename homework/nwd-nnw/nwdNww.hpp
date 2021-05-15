#pragma once

int NWD(int lhs, int rhs) 
{
    // TODO: Implement me :)
    //OK
  
    
    int kwik;
    lhs = abs(lhs);
    rhs = abs(rhs);
	while(rhs!=0)
    {
		kwik = rhs;
		rhs = lhs%rhs;
		lhs = kwik;	
	}
	
    return lhs;
}

int NWW(int lhs, int rhs) {
    // TODO: Implement me :)
    lhs = abs(lhs);
    rhs = abs(rhs);
    if(lhs == 0 || rhs == 0)
    {
        return 0;
    }

    return(lhs * rhs)/ NWD(lhs,rhs);
}
