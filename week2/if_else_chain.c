#include<stdio.h>

int main ()
{
int mark;

printf("Please enter your marks out of 100: ");
scanf ("%d", &mark);

if (0 <= mark && mark <= 100)
{
if (mark == 0)
{

    printf(" We're sorry to inform you this, we consider 0 to be fail unfortunately.\n");

}

else if (mark >= 40)
{
    printf("You passed.\n");
}

else
{
printf("Yayy! you failed.\n");

}
}

else
{
    printf("Please enter a mark between 0 and 100.\n");
}

return 0;

}