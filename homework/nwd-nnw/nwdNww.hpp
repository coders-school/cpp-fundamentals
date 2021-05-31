#pragma once

int NWD(int lhs, int rhs)
{
	// TODO: Implement me :)
	while (lhs != rhs)
	{
		if (lhs > rhs)
		{
			lhs -= rhs;
		}
		else
		{
			rhs -= lhs;
		}
	}
	return rhs;
}

int NWW(int lhs, int rhs)
{
	// TODO: Implement me :)
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
