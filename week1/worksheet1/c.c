#include<stdio.h>

int main ()
{
    float c = 299792458;
    float t;

    printf("how long has the light been travelling(in days)?\n");
    scanf("%f", &t);

    float d = c * t * 24 *3600;

    printf("the light has travelled %5.2f meters. \n", d/1000000000 );
    
    return 0;
}