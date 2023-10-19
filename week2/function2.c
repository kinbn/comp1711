#include<stdio.h>

float sum (float a, float b)
{
    float answer;
    answer = a + b;
    return answer;
} 

float main ()
{
    float y = 2;
    float z = sum(5, y); //defining the function.

printf("The sum of 5 and %.2F is equal to %.2F \n", y, z);

}