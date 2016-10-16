#include <stdio.h>

long int x_to_the_n (float x, float n);

int main (void)
{
	x_to_the_n (2, 3);
	return 0;
}

long int x_to_the_n (float x, float n)
{
	long int res = 1;
	for(int i = 0; i < n; i++)
	{
		res *= x;
	}
	
	printf("the power of %.2f to %.2f is %ld\n",x, n, res);
	return res;
}
