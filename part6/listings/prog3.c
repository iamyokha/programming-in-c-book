#include <stdio.h>

int main (void)
{
 int num;
 printf("enter a number to be tested:");
 scanf("%i", &num);
 printf("\n");
 if (num % 2 == 0)
 {
 	printf("the number is even\n");
 }
 else
 {
 	printf("the number is odd\n");
 }
   return 0;
}

