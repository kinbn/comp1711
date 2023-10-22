#include<stdio.h>
#include<math.h>

float r;
float TT = M_PI;
float ar_circle (float r);

float ar_circle (float r)
{
    float area;
    area =  TT * r * r;
    return area;
}

int main ()
{
    printf("Enter the radius circle: ");
    scanf("%f", &r);

    float x = ar_circle(r);

    printf("The area of circle is %.2f square units.\n", x);
    
    return 0;

}