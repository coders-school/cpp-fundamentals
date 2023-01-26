#pragma once

int fibonacci_iterative(int sequence) 
{
   int term_number_1 = 0;
		int term_number_2 = 1;

		if (sequence == 0)
		{
			return 0;
		}
		

		for (int i = 0; i < sequence; i++)
		{
			if (sequence >= 0 && i == 0)
			{
				std::cout << term_number_1 << std::endl ;
			}

			int next_term = term_number_1 + term_number_2;

			std::cout << next_term << std::endl;
			term_number_1 = term_number_2;
			term_number_2 = next_term;
		}

		return term_number_1;
}

int fibonacci_recursive(int sequence) 
{
   if  (sequence = 0 || sequence = 1)
    {
        return 0
    }
    
	else if (sequence = 2)
    {
		return 1;
    }
	else return fibonacci_recursive(sequence - 1) + fibonacci_recursive(sequence - 2);
}


