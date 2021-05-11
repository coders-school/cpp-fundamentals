#pragma once

inline int GetSmaller(const int lhs, const int rhs)
{
	return lhs < rhs ? lhs : rhs;
}

inline int GetLarger(const int lhs, const int rhs)
{
	return lhs > rhs ? lhs : rhs;
}

inline bool IsMeetAssumption(const int lhs, const int rhs)
{
	if (lhs >= 0 || rhs >= 0)
		return true;
	return false;
}

int NWD(int lhs, int rhs) {
    if (!IsMeetAssumption(lhs, rhs))
		return -1;

	// We use Euclid's algorithm to find the GCD
	for (int i = 0;; ++i)
	{
		int rest = lhs % rhs;

		if (rest == 0)
			return rhs;

		lhs = rhs;
		rhs = rest;
	}
}

int NWW(int lhs, int rhs) {
    if (!IsMeetAssumption(lhs, rhs))
		return -1;

	// Choose the smallest number
	int divider = GetSmaller(lhs, rhs);
	const int smaller = GetSmaller(lhs, rhs);
	const int larger = GetLarger(lhs, rhs);

	for (int i = 0;; ++i)
	{
		// if our divider is divided by both of numbers and is equal or greater than larger number,
		// then it must be our LCM
		if (divider % lhs == 0 && divider % rhs == 0 && divider >= larger)
			return divider;

		divider += smaller;
	}
}
