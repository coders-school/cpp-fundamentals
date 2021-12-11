#pragma once

int NWD(int _lhs, int _rhs) {
	int lhs = abs(_lhs);
	int rhs = abs(_rhs);

	while (lhs != rhs) {
		if (rhs != 1) {
			if (lhs < rhs or rhs == 0) {
				rhs = rhs - lhs;
				rhs = abs(rhs);
			}
		}
		lhs = lhs - rhs;
		lhs = abs(lhs);
	}
	return lhs;
}

int NWW(int _lhs, int _rhs) {
	int result;
	int lhs = abs(_lhs);
	int rhs = abs(_rhs);

	if (lhs == 0 or rhs == 0) {
		result = 0;
	}
	else {
		result = (lhs * rhs) / NWD(lhs, rhs);
	}
	return result;
}
