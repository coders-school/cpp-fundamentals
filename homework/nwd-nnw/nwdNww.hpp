#pragma once

int NWD(int r_lhs, int r_rhs) {
    int aux;
    int lhs = abs(r_lhs);
	int rhs = abs(r_rhs);
    
    if (lhs==0 or rhs==0) {
        return lhs + rhs;
    }

	while(rhs!=0)
    {
		aux = rhs;
		rhs = lhs%rhs;
		lhs = aux;	
	}
    return lhs;
}

int NWW(int r_lhs, int r_rhs) {
	int result;
	int lhs = abs(r_lhs);
	int rhs = abs(r_rhs);

	if (lhs == 0 or rhs == 0) {
		result = 0;
	}
	else {
		result = (lhs * rhs) / NWD(lhs, rhs);
	}
	return result;
}