#include<stdio.h>

int main ()
{
int T;

printf(" Enter a temp: ");
scanf("%d", &T);

if (T >= -10 && T <= 40 )
{
    printf("The temperature is within the range. \n");    
} 

else 
{
    printf(" The temperature isn't within the range. \n");
}

return 0;

}