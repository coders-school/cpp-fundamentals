#pragma once

int NWD(int lhs, int rhs) {
    // TODO: Implement me :)
    if(lhs *  rhs == 0)
    {
	return lhs == 0? rhs : lhs;
    }
    int remainder = -1;
    int a = lhs;
    int b = rhs;
    while (remainder != 0)
    {
	remainder = a % b;
	if(remainder != 0)
	{
		a = b;
		b = remainder;
	}
    }
    if(b<0)
    {
	b *= -1;
    }

    return b;
}

int NWW(int lhs, int rhs) {
    // TODO: Implement me :)
    return -1;
}
