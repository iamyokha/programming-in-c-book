#include <stdio.h>

int main (void)
{
	int p, d;
	bool isPrime;
	
	for (p = 2; p <= 50; p++)
	{	
		isPrime = true;
		for (d = 2; d < p; d++)
			if (p % 2 == 0)
			continue;
			if (p % d == 0)
				isPrime = false;
		if (isPrime != false)
			printf("%i ", p);
	}
	printf("\n");
	return 0;
}

