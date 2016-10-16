#include <stdio.h>

int arrSum (int values[], int numberOfElements)
{
	int sum = 0;
	for (int i = 0; i < numberOfElements; i++)
	{
		sum += values[i];
	}
	return sum;
}

int main (void)
{
	int array1[5] = {157, -28, -37, 26, 10};
	int array2[7] = {12, 45, 1, 10, 5, 3, 22};
	int array3[3] = {3, 3, 3};
	//int minimum (int values, int numberOfElements);
	
	printf("the sum of elements is %i\n", arrSum (array1, 5));
	printf("the sum of elements is %i\n", arrSum (array2, 7));
	printf("the sum of elements is %i\n", arrSum (array3, 3));
	
	return 0;
}
