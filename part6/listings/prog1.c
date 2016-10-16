#include <stdio.h>

int main (void)
{
   int num;
   printf("enter some integer number: ");
   scanf("%d", &num);
   printf("\n");
   if (num < 0)
   {
       num = -num;
   }
   printf("the absolute num is %i\n", num);
   return 0;
}

