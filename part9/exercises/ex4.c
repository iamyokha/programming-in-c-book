#include <stdio.h>

struct date
{
	int day;
	int month;
	int year;
};

char M [7][9] = {
									{'M','o','n','d','a','y'},
									{'T','u','e','s','d','a','y'},
									{'W','e','d','n','e','s','d','a','y'},
									{'T','h','u','r','s','d','a','y'},
									{'F','r','i','d','a','y'},
									{'S','a','t','u','r','d','a','y'},
									{'S','u','n','d','a','y'}
	};

int main (void)
{
	int numday;
	int countingN(struct date someday);
	struct date date1;
	printf("Enter the first date (dd:mm:yyyy): ");
	scanf("%i:%i:%i", &date1.day, &date1.month, &date1.year);
	numday = countingN(date1);
	printf("It is ");
	for(int i = 0; i < 9; i++)
	{
		printf("%c",M[numday][i]);
	}
	printf("\n");
	return 0;
}

int countingN(struct date someday)
{
		int f, g, n, n_day;
		
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
	printf("n is %i\n",n);
	n_day = (n - 621049);
	printf ("the differencs between n and 621049 is %i\n", n_day);
	n_day = n_day % 7;
	printf("the day's number is %i\n", n_day);
	return n_day;
}
