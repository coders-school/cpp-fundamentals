#pragma once

int NWD(int lhs, int rhs) {
    // TODO: Implement me :)
	int rest;
	if (rhs == 0) return lhs;
	else if (lhs == 0) return rhs;
	else {
		do {
		rest = lhs % rhs;
		lhs = rhs;
		rhs = rest;
		} while (rest != 0); 
		return abs(lhs);	
	}
}

int NWW(int lhs, int rhs) {
    // TODO: Implement me :)
	if (rhs == 0) return rhs;
	else if (lhs == 0) return lhs;
	else return abs((lhs * rhs) / NWD(lhs,rhs));
}
