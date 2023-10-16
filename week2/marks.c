#include<stdio.h>

int main()
{

int mark;

printf("marks out of 100: ");
scanf("%d", &mark);

if (mark < 40)
{
    printf("Yaay! you failed!!\n");
}

else if ( mark >= 40)
{
    printf("You passed.\n");
}

return 0;

}