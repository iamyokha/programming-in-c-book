#include <stdio.h>

int main (void)
{
	int c, i;
	int a = 0;
	int b = 1;
	
	
	for (i = 2; i < 15; i++)
	{
		c = a + b;
		a = b;
		b = c;
		printf("%i\n", c);
	}
	return 0;
}
/*
int main (void)
{
	int Fib[15], i;
	Fib[0] = 0;
	Fib[1] = 1;
	for (i = 2; i < 15; i++)
	{
		Fib[i] = Fib[i-2] + Fib[i-1];
	}
	for(i = 0; i < 15; i++)
	{
		printf("%i\n", Fib[i]);
	}
	return 0;
}
*/
