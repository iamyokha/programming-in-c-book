#include <stdio.h>

int gcd (int u, int v)
{
	int temp;
	while (v != 0)
	{
		temp = u % v;
		u = v;
		v = temp;
	}
	return u;
}
int lcm (u,v)
{
	if (u >= 0 && v>= 0)
	{
		int l;
		l = u*v / gcd (u, v);
		return l;
	}
	else
	{
		printf("one of the arguments is lovest than zero\n");
		return -1;
	}
}


int main (void)
{
	int result;
	
	result = lcm (15, 10);
	printf("The gcd of 15 and 10 is %i\n", result);

	return 0;
}
