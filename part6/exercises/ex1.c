#include <stdio.h>

int main (void)
{
	int num1, num2;
	printf("enter two integer nums: ");
	scanf("%i %i", &num1, &num2);
	if(num1 % num2 == 0)
	{
		printf("cool!\n");
	}
	else
	{
		printf("not cool :(\n");
	}
	return 0;
}

