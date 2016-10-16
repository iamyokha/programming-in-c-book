#include <stdio.h>

int main (void)
{
int number, right_digit;
int revNum = 0, remainder;
	printf("Enter your number.\n");
	scanf ("%i", &number);
	while (number != 0)
	{
		remainder = number % 10;
		revNum = revNum*10 + remainder;
		number /= 10;
	}
	while (revNum != 0)
		{
			right_digit = revNum % 10;
			revNum = revNum / 10;
		
	switch(right_digit)
	{
		case 0:
			printf("zero ");
			break;
		case 1:
			printf("one ");
			break;
		case 2:
			printf("two ");
			break;
		case 3:
			printf("three ");
			break;
		case 4:
			printf("four ");
			break;
		case 5:
			printf("five ");
			break;
		case 6:
			printf("six ");
			break;
		case 7:
			printf("seven ");
			break;
		case 8:
			printf("eight ");
			break;
		case 9:
			printf("nine ");
			break;
		default:
		printf("/unknown sign/");
	}
	}
	printf("\n");
	return 0;
}

