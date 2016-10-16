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
float squareRoot (float x)
{
	const float epsilon = .00001;
	float guess = 1.0;
	while (absoluteValue ((guess * guess) / x -1.0) >= epsilon)
	{
		guess = ((x / guess) + guess) / 2.0;
	}
	
	return guess;
}

int main (void)
{
	printf("squareRoot (0.3) = %f\n", squareRoot (0.3));
	
	return 0;
}
