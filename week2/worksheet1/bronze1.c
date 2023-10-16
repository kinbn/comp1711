#include<stdio.h>

int main()
{
    int x;

    printf("Enter any integer: ");
    scanf("%d", &x);

        if (x == 0)
        {
            printf(" %d is zero i.e., neutral. \n", x);
        }

        else if (x > 0)
        {
            printf("%d is +ve.\n", x);       
        }

        else 
        {
            printf("%d is -ve. \n", x);
        }


    return 0;
}