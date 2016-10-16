#include <stdio.h>

void sort (int a[], int n, char way)
{
	int temp;
	if (way == 'u')
	{
		for (int i = 0; i < n - 1; i++)
		{
			for (int j = i + 1; j < n; j++)
			{
				if (a[i] > a[j])
				{
					temp = a[i];
					a[i] = a[j];
					a[j] = temp;
				}
			}
		}
	}
	else if (way == 'd')
	{
		for (int i = 0; i < n - 1; i++)
		{
			for (int j = i + 1; j < n; j++)
			{
				if (a[i] < a[j])
				{
					temp = a[i];
					a[i] = a[j];
					a[j] = temp;
				}
			}
		}
	}
	else
	{
		printf ("unknown parameter, you should've entered u or d\n");
	}
}

int main (void)
{
	int i;
	int array[16] = {34, -5, 6, 0, 12, 100, 56, 22, 44, -3, -9, 12, 17, 22, 6, 11};
	void sort(int a[], int n, char way);
	
	printf ("The array before the sort:\n");
	for (i = 0; i < 16; i++)
	{
		printf("%i ", array[i]);
	}
	sort (array, 16, 'u');
	printf("\nThe array after the sort:\n");
	for (i = 0; i < 16; i++)
	{
		printf("%i ", array[i]);
	}
	printf("\n");
	return 0;
}
