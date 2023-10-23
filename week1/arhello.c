#include<stdio.h>

int main ()
{
   char mystring[6] = "Hello";
   int count;

    printf("\\0 \n");

   for (count = 5; count >= 0; count --)
   {

   printf("%c \n", mystring[count]);

   }
    

    return 0;
}