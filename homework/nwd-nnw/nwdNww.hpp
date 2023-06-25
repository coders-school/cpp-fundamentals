#pragma once

int NWD(int lhs, int rhs) {

    if (lhs == 0 && rhs != 0)
		return std::abs(rhs);
	else if (rhs == 0 && lhs != 0)
		return std::abs(lhs);
	else if (lhs == 0 && rhs ==0)
		return 0;
	
	int max_divider = 1;
	if (std::abs(lhs) < std::abs(rhs))
		max_divider = std::abs(lhs);
	else
		max_divider = std::abs(rhs);
		
	int nwd = 1;
	
	for (int i = 2; i <= max_divider; i++) {
		if (std::abs(lhs) % i == 0 && std::abs(rhs) % i == 0)
			nwd = i;
	}
	
	return nwd;
}

int NWW(int lhs, int rhs) {
    if (lhs == 0 || rhs == 0)
		return 0;
	return std::abs(lhs) / NWD(lhs, rhs) * std::abs(rhs);
}
