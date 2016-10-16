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
float squareRoot (float x, const float epsilon)
{
	//const float epsilon = .00001;
	float guess = 1.0;
	while (absoluteValue (guess * guess - x) >= epsilon)
	{
		guess = (x / guess + guess) / 2.0;
	}
	
	return guess;
}

int main (void)
{
	printf("squareRoot (2.0) = %f\n", squareRoot (3.0, .00001));
	printf("squareRoot (144.0) = %f\n", squareRoot (3.0, .001));
	printf("squareRoot (17.5) = %f\n", squareRoot (3.0, .1));
	
	return 0;
}
