#include<stdio.h>

int main ()
{

    int Temp;

    printf("what's the temperature like? \n");
    scanf("%d", &Temp );


    if( Temp < 0)
    {
        printf("Wear a damn jacket!\n");
    
    }
     
    else ( Temp > 0);
    {
        printf("It's cozy out here!\n");

    }

    return 0;
}