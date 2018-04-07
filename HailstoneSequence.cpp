/* File: PrimeFactorization.cpp
 * ----------------------------
 * This program reads a number from the user
 * and then generates the hailstone sequence
 * from that point.
 */

#include <iostream>

/* Main program */

int main()
{
	int number;

	std::cout << "Enter a number: ";
	std::cin >> number;

	while (number != 1)
	{
		if (!(number % 2))
		{
			std::cout << number << " is even, so I divide it by 2 to get " << number/2 << std::endl;
			number /= 2;
		}
		else
		{
			std::cout << number << " is odd, so I multiply by 3 and add 1 to get " << (number*3) + 1 << std::endl;
			number = (number*3 + 1);
		}
	}
	return (0);
}