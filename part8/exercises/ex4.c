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
	while (absoluteValue (guess * guess - x) >= epsilon)
	{
		printf("%.2f\n", guess);
		guess = (x / guess + guess) / 2.0;
	}
	
	return guess;
}

int main (void)
{
	printf("squareRoot (2.0) = %f\n", squareRoot (144.0));
	
	return 0;
}
