#pragma once

int NWD(int lhs, int rhs) 
{
    int minValue = abs(lhs) >= abs(rhs) ? abs(rhs) : abs(lhs);
	int maxValue = abs(lhs) >= abs(rhs) ? abs(lhs) : abs(rhs);

	if (minValue > 1)
	{
		minValue = 1;
	}

	if (rhs == lhs) 
	{
		return lhs;
	}

	int result = minValue;
	for (int i = minValue; i <= maxValue; i++)
	{
		if (i == 0) 
		{
			continue;
		}

		if (lhs%i == 0 && rhs%i == 0) 
		{
			result = i;
		}
	}

	return result;
}

int NWW(int lhs, int rhs) 
{
    bool foundNWW = false;

    lhs = abs(lhs);
    rhs = abs(rhs);

	int multiplayer = lhs >= rhs ? lhs : rhs;
	int result = multiplayer;

    if(rhs == 0 || lhs == 0)
    {
        return 0;
    }

	while (!foundNWW)
	{
		if (result % lhs == 0 && result % rhs == 0)
		{
			foundNWW = true;
		}
		else 
		{
			result += multiplayer;
		}
	}

	return result;
}
