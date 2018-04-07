/* File: ApproximationPi.cpp
 * -------------------------
 * This program calculates an approximation
 * of pi (3.1415...) through Leibniz's series.
 */

#include <iostream>
#include <iomanip>

/* Main program */

int main()
{
	long double approxPi = 4.0;
	long double value = 3.0;

	int signal = -1;
	for (long long int i = 0; i < 1000000000000; i++)
	{
		approxPi = approxPi + (4.0/value) * signal;
		value += 2;
		signal *= -1; 
	}

	std::cout << "Approximation of PI: " << std::setprecision(50) <<approxPi << std::endl;
	return (0);
}