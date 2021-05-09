#pragma once

int fibonacci_iterative(int sequence) {
    if (sequence == 0)
    {
        return 0;
    }
    else if (sequence ==1)
    {
        return 1;
    }

    int p0 = 0;
	int p1 = 1;
	int p2 = 0;

	for (int i = 2; i <= sequence; i++)
	{
		p0 = p1 + p2;
		p2 = p1;
		p1 = p0;
	}    
	return p0;
}

int fibonacci_recursive(int sequence) {
	if (sequence > 1)
	{
		return fibonacci_recursive(sequence - 1) + fibonacci_recursive(sequence - 2);
	}
	else
	{
		return sequence;
	}
}
