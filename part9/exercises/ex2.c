#include <stdio.h>

struct date
{
	int day;
	int month;
	int year;
};


int main (void)
{
	int diff;
	int countingN(struct date someday);
	int n1, n2;
	struct date date1;
	struct date date2;
	printf("Enter the first date (dd:mm:yyyy): ");
	scanf("%i:%i:%i", &date1.day, &date1.month, &date1.year);
	printf("Enter the second date (dd:mm:yyyy): ");
	scanf("%i:%i:%i", &date2.day, &date2.month, &date2.year);
	n1 = countingN(date1);
	n2 = countingN(date2);
	diff = n2 - n1;
	printf("the difference between thise dates is %i days\n", diff);
	
	return 0;
}

int countingN(struct date someday)
{
		int f, g;
		float n;
		if(someday.month <= 2)
		{
			f = someday.year - 1;
			g = someday.month + 13;
		}
		else
		{
			f = someday.year;
			g = someday.month + 1;
		}
	n = 1461 * f / 4 + 153 * g / 5 + someday.day;
	return n;
}
