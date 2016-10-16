#include <stdio.h>

float absVal(float x)
{
	if (x<0)
	x = -x;
	
	return x;
}

float sqRoot(float x)
{
	const float epsilon = .00001;
	float guess = 1.0;
	while (absVal( guess*guess - x ) >= epsilon)
	{
		guess = (x / guess + guess) / 2.0;
	}
	return guess;
}

void roots ()
{
	float a, b, c;
	float x1, x2, d;
	printf("enter the a b c through spaces for ax^2 + bx + c = 0\n");
	scanf("%f %f %f", &a, &b, &c);
	
	d = (b*b) - (4*a*c);
	if (d < 0)
	{
		printf("as D < 0 this one has no roots\n");
	}
	else
	{
		x1 = (-b + sqRoot(d)) / (2*a);
		printf("x1 = %.2f\n", x1);
		x2 = (-b - sqRoot(d)) / (2*a);
		printf("x2 = %.2f\n", x2);
	}
}

int main (void)
{
	roots();
	
	return 0;
}
