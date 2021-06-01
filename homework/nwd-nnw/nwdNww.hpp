#pragma once

int NWD(int lhs, int rhs)
{
	// TODO: Implement me :)
	lhs = std::abs(lhs);
	rhs = std::abs(rhs);

	return rhs == 0 ? lhs : NWD(rhs, lhs % rhs);
}

int NWW(int lhs, int rhs)
{
	// TODO: Implement me :)

	lhs = std::abs(lhs);
	rhs = std::abs(rhs);

	if (lhs < 1 || rhs < 1) {
		return 0;
	}

	if (lhs < rhs)
	{
		return NWW(rhs, lhs);
	}

	int k = lhs;

	while (k % rhs != 0)
	{
		k += lhs;
	}

	return k;
}
