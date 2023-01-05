#pragma once

int NWD(int a, int b) {
    // TODO: Implement me :)
while (a != b && a != 0 && b != 0) {
	if (a < 0)
		a = a * -1;
        else if (b < 0)
	        b = b * -1;
        else if (a > b)
	        a -= b;
        else
	        b -= a;}
	if (a == 0 && b != 0)
		a = b;
	else if(b == 0 && a != 0)
	return a;

	return a;
}

int NWW(int a, int b) {
    // TODO: Implement me :)
	if (a != 0 && b != 0)
		a = a * b / NWD(a, b);

	else if (b == 0)
		a = b;
	
	if (a < 0)
	return a * -1;
	
	else
	return a;
}
