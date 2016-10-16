#include <stdio.h>

//here's the function which counts the absolute value of a number
float absoluteValue(float x)
{
	if (x < 0)
	{
		x = -x;
	}
	return (x);
}

//here's another function which counts the square root of the number
double squareRoot (double x)
{
	const double epsilon = .0000000001;
	double guess = 1.0;
	while (absoluteValue (guess * guess - x) >= epsilon)
	{
		guess = (x / guess + guess) / 2.0;
	}
	
	return guess;
}

int main (void)
{
	printf("squareRoot (2.0) = %d\n", squareRoot (2.0));
	printf("squareRoot (144.0) = %f\n", squareRoot (144.0));
	printf("squareRoot (17.5) = %f\n", squareRoot (17.5));
	
	return 0;
}
