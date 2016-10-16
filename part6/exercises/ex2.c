#include <stdio.h>

int main (void)
{
	int num1, num2;
	float res;
	printf("enter two integer nums: ");
	scanf("%i %i", &num1, &num2);
	if (num2 != 0)
	{
		res = num1 / num2;
		printf("%.3f\n", res);
	}
	else
	{
		printf("division by zero\n");
	}
	return 0;
}

