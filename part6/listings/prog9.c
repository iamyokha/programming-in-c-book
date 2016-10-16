#include <stdio.h>

int main (void)
{
	float value1, value2;
	char operator;
	
	printf("type in your expression: ");
	scanf("%f %c %f", &value1, &operator, &value2);
	
	switch(operator)
	{
		case '+':
			printf("%.2f\n", value1 + value2);
			break;
		case '-':
			printf("%.2f\n", value1 - value2);
			break;
		case '*':
			printf("%.2f\n", value1 * value2);
			break;
		case '/':
			if (value2 == 0)
			{
				printf("division by 0\n");
				break;
			}
			else
			{
			printf("%.2f\n", value1 / value2);
			break;
			};
		default:
		printf("cannot understand this shit\n");
	}
	
	return 0;
}

