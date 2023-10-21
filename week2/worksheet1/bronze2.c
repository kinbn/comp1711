#include<stdio.h>

int main()
{
int x;

printf("Enter a number that is divisible by 4 and 5:  ");
scanf ("%d", &x);

if( x % 4 == 0 && x % 5 == 0 )
{
    printf("%d is divisible by 4 and 5.\n", x);
}

else if ( x % 4 == 0 && x % 5 != 0 )
{
    printf("%d is divisible by 4 but not 5.\n", x);
}

else if (x % 4 != 0 && x % 5 == 0 )
{
    printf("%d is divisible by 5 but 4. \n", x);
}

else
{
    printf("%d is not divisible by either 4 or 5. \n", x);
}

return 0;
}