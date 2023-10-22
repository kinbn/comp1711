#include<stdio.h>

int main()
{
int M;
 
printf("Enter your score: ");
scanf("%d", &M);

if (M < 50 )
{
    printf("yo! you failed.\n");
}

else if (M >= 50 && M < 70 )
{
    printf("You passed bruh. \n");
} 

else
{
    printf(" you passed with distinction. \n");
}

return 0;
}