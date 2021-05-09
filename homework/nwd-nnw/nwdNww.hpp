#pragma once

int NWD(int lhs, int rhs) {
	lhs = abs(lhs);
	rhs = abs(rhs);
	if (lhs == 0)
	{
		return rhs;
	}
	else if (rhs == 0)
	{
		return lhs;
	}

	int result = lhs;

	while (true)
	{
		if (lhs != rhs)
		{
			if (lhs > rhs)
			{
				result = lhs - rhs;
				lhs = result;
			}
			else if (rhs > lhs)
			{
				result = rhs - lhs;
				rhs = result;
			}
		}
		else
		{
			return result;
		}
	}
}

int NWW(int lhs, int rhs) {
    // TODO: Implement me :)
    return -1;
}
