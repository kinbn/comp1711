#include<stdio.h>
#include<math.h>

int main()
{
    long double r;
    long double TT = M_PI;

    printf("Enter the radius of your circle:");
    scanf ("%Lf", &r);

    printf("Area of your circle is %0.2Lf sq.units. \n", r * r * TT);
    return 0;
    
}