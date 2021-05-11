#pragma once
#include <cmath>


int NWD(int lhs, int rhs)
{
	lhs = std::abs(lhs);
	rhs = std::abs(rhs);

	// We use Euclid's algorithm to find the GCD
	while (rhs != 0)
	{
		int rest = lhs % rhs;

		lhs = rhs;
		rhs = rest;
	}
	return lhs;
}

int NWW(int lhs, int rhs)
{
	if (rhs == 0)
		return 0;

	return std::abs((lhs * rhs) / NWD(lhs, rhs));
}

