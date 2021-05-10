#pragma once

int NWD(int lhs, int rhs) {
    int x;
    while (rhs)
    {
        x=rhs;
        rhs= lhs%rhs;
        lhs=x;
    }
    
    return lhs;
}
int NWW(int lhs, int rhs) {
    lhs = abs(lhs);
	rhs = abs(rhs);
    if (lhs == 0 && rhs == 0)
	{
		return 0;
	}
	int result = lhs;
	result = (lhs / NWD(lhs, rhs)) * rhs;
	return result;
}
