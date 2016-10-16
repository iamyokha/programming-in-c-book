#include <stdio.h>
#include <stdbool.h>

int main (void)
{

	int n = 150;
	
	//Step 1
	int P[n];
	int i;
	for (i = 2; i <= n; i++)
	{
		P[i] = 0;
	}
	
	//step 2
	i = 2;
	
		//step 3
	while (i <= n){
		//step 4
		if (P[i] == 0)
		{
			printf ("%i ", i);
		}
		//step 5
		for (int j = 2; i*j <= n; j++)
		{
			P[i*j] = 1;
		}
		//step 6
		i++;
	}
	printf ("\n");
	return 0;
}


