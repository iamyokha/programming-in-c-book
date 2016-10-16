#include <stdio.h>

int main (void)
{
	float res = 0;
	float arr[10];
	printf("enter 10 floats\n");
	for(int i =  0; i < 10; i++)
	{
		scanf("%f", &arr[i]);
	}
	for (int i = 0; i < 10; i++)
	{
		res += arr[i];
	}
	res = res / 10;
	printf("the middle value of an array is %.2f\n", res);
	return 0;
}

