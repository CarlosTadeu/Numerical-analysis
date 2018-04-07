#include <iostream>
#include <iomanip>
#include <thread>


long double var;
long int const N = 100000000000;

long double sequence (long int n);

void foo ()
{
	double p = 0;
	while(p < 100)
	{
		p = var*100/N;
		std::cout << p << std::endl;
	}
	std::cout << std::endl;
}


/* Main program */

int main()
{
	std::thread first (foo);

	std::cout << "Approximation of sequence: " << std::setprecision(50) << sequence(N) << std::endl;
	first.join();

	return (0);
}

long double sequence (long int n)
{
	//float value = 0;
	//if (n == 0)
	//	return (1);
	//value = (sequence(n-1)/2) + (1/sequence(n-1));
	//return (value);


	long double v = 1, j;
	for (var = 0; var < n; var++)
	{
		j = v/2 + 1/v;
		v = j; 
	}
	return (v);
}