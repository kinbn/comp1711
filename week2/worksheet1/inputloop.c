#include<stdio.h>
 int main ()
{
int X;

while (1)
{
printf("Enter a number between 0 and 100 ( -1 to terminate the program): \n");
scanf("%d", &X);


if ( X ==  -1)
{
    printf(" Terminating program. \n");
    
    break;
}

else if (X >= 0 && X <= 100)
{
    printf ("%d is within the range.\n", X);
}

else
{
 printf("The number is out of range.\n");
}
}
return 0;
}