#include<stdio.h>

int main ()
{
int C, F;

printf("Enter the temperature in Celsius:");
scanf ("%d", &C);

F = (C * 1.8) + 32;

printf("Temp in Farenheit is %d \n", F); 

}