#pragma once

int NWD(int lhs, int rhs) {
    // TODO: Implement me :)
	while (lhs != rhs) {
		if (lhs < rhs) {
			rhs = rhs - lhs;
		}
		else { 
			lhs = lhs - rhs;
		}
	}
	return lhs;
}

int NWW(int lhs, int rhs) {
	// TODO: Implement me :)
	int result = (lhs * rhs) / NWD(lhs, rhs);
	return result;
}
