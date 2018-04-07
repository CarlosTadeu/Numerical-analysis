/* File: PrimeFactorization.cpp
 * ----------------------------
 * This program display the prime
 * factorization of a number n > 1.
 */

#include <iostream>
#include <math.h>

/* Function prototypes */

int nextPrime (int n);

/* Main program */

int main()
{
	int number;

	std::cout << "This program factors a number." << std::endl;
	std::cout << "Enter number to be factored: ";
	std::cin >> number;

	int primeFactor = 2;
	while (number > 1)
	{
		if (number % primeFactor == 0)
		{
			while (number % primeFactor == 0)
			{
				if (number / primeFactor == 1)
					std::cout << primeFactor;

				else
					std::cout << primeFactor << " x ";

				number /= primeFactor;
			}
		}
		primeFactor = nextPrime (primeFactor);
	}
	std::cout << std::endl;
	return (0);
}

/*
 * Function: nexPrime
 * Usage: int p = nexPrime (int n);
 * --------------------------------
 * Returns the next prime number as from n.
 */

int nextPrime (int n)
{
	if (n == 2)
		return (n + 1);

	while (true)
	{
		bool isPrime = true;
		n += 2;
		int value = 3;
		while (value <= sqrt(n))
		{
			if (n % value == 0)
			{
				isPrime = false;
				break;
			}
			value += 2;
		}
		if (isPrime)
			return (n);
	}
}