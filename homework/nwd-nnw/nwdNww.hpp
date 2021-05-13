#pragma once

int NWD(int lhs, int rhs) 
{
    int tmp = 0;
    
	while(rhs != 0)
    {
		tmp = rhs;
		rhs = lhs % rhs;
		lhs = tmp;	
	}

    return abs(lhs);
}

int NWW(int lhs, int rhs) 
{
    // TODO: Implement me :)
    return -1;
}
