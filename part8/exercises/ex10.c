#include <stdio.h>
#include <stdbool.h>

int isPrime (void)
{
	int arg;
	printf("Enter a number and i'll tell you if it's prime: ");
	scanf("%i", &arg);
	if (arg < 0)
	{
		printf("you've entered a negative integer\n");
		return 1;
	}
	else if (arg == 0)
	{
		printf("you've entered zero!\n");
		return 1;
	}
	else if (arg == 1)
	{
		printf("you've enered 1 which can not be used\n");
		return 1;
	}
	else
	{
		int isPrime = 1;
		for (int i = 2; i < arg; i++)
		{
			if(arg % i == 0)
			{
				isPrime = 0;
			}
		}
		if (isPrime == 1)
		{
			printf("Number %i is prime\n", arg);
		}
		else
		{
			printf("Number %i is not prime\n", arg);
		}
		return isPrime;
	}
}


int main (void)
{
	isPrime ();
	printf("\n");
	return 0;
}
