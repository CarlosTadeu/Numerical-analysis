/* File: QuarterCircleArea.cpp
 * ---------------------------
 * This program calculates an approximation
 * of the quarter circle area dividing it
 * into retangles.
 */

#include <iostream>
#include <cmath>
#include <iomanip>

/*
 * Constant: DIVISION
 * ------------------
 * This constant defines the value derived by
 * dividing the radius by the number of retangles.
 */

const int NUM_RETANGLES = 100000000;
const double DIVISION 	= 2.0 / NUM_RETANGLES;
const int radius = 2;

/* Main program */

int main()
{
	double area = 0.0;	// Approx of area
	double h;			// Height of the retangle
	double x = 0.0;

	
	for (int i = 0; i < NUM_RETANGLES; i++)
	{
		h = (radius*radius) - (x*x);
		h = sqrt(h);
		area = area + h;
		x += (DIVISION);
	}
	std::cout << "Approx of area: " << std::setprecision(50) << area*DIVISION << std::endl;

	return (0);
}