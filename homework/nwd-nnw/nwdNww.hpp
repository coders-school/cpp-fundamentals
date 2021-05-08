#pragma once

int NWD(int lhs, int rhs) {
	if (!lhs)
		return rhs;
	if (!rhs)
		return lhs;
	
	if (lhs < 0)
		lhs = abs(lhs);
	if (rhs < 0)
		rhs = abs(rhs);

	int i{ lhs < rhs ? lhs : rhs };
	int nwd{};
	while (i > 0) {
		if (!(lhs % i) && !(rhs % i)) {
			nwd = i;
			break;
		}
		--i;
	}
	return nwd;
}

int NWW(int lhs, int rhs) {
	if (lhs == 0 || rhs == 0)
		return 0;

	if (lhs < 0)
		lhs = abs(lhs);
	if (rhs < 0)
		rhs = abs(rhs);

	int i{ lhs > rhs ? lhs : rhs };
	int nww{ lhs * rhs };
	while (i <= nww) {
		if (!(i % lhs) && !(i % rhs)) {
			nww = i;
			break;
		}
		++i;
	}
	return nww;
}

