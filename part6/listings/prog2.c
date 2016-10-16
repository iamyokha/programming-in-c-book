#include <stdio.h>

int main (void)
{
	int numberOfGrades, i, grade;
	int gradeTotal = 0;
	int failureCount = 0;
	float average;
	
	printf("how many grades will you be entering?: ");
	scanf("%d", &numberOfGrades);
	printf("\n");
	
	for (i=1; i <= numberOfGrades; i++)
	{
		printf("enter the grade #%i:",i);
		scanf("%d", &grade);
		gradeTotal += grade;
		printf("\n");
		if (grade < 65)
		{
			failureCount++;
		}
	}
	average = (float) gradeTotal / numberOfGrades;
	printf("the average grade is %.2f\n", average);
	printf("the number of failuers is %d\n", failureCount);

   return 0;
}

