#include <stdio.h>

int main (void)
{
	float value, saveValue;
	char operator1;
	
	printf("type in your expression\nusing one of this operators: S (save), E (exit)\ngeneral usage: Value operator\nenter here: ");
	//do
	//{
		scanf("%f %c", &value, &operator1);
		printf("you have to save the value first\n");
	//}
	//while(operator1 != 'S' || operator1 != 'E');
	
	if (operator1 == 'E')
	{
		printf("exiting the program\n");
		return 0;
	} 
	else if (operator1 == 'S')
	{
		saveValue = value;
		printf("the saved value is %.2f\n", saveValue);
	}
	float value2;
	char operator2;
	printf("now let's do something with this value\ngeneral usage is the same but with another operators: +, -, *, /\nenter here: ");
	scanf("%f %c", &value2, &operator2);
	
	switch(operator2)
	{
		case '+':
			printf("%.2f\n", saveValue + value2);
			break;
		case '-':
			printf("%.2f\n", saveValue - value2);
			break;
		case '*':
			printf("%.2f\n", saveValue * value2);
			break;
		case '/':
			if (value2 == 0)
			{
				printf("division by 0\n");
				break;
			}
			else
			{
			printf("%.2f\n", saveValue / value2);
			break;
			};
		default:
		printf("cannot understand this shit\n");
	}
	
}

