#include<stdio.h>

int main ()
{
    int n[5] = {1,4,6,8,5};
    int sum = 0;

    for (int i = 0; i < 5; i ++)
    {
        sum += n[i];
    }

    printf("The sum is : %d \n", sum);

    return 0;
}