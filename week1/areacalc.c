#include<stdio.h>

int main ()
{
    float l,b,a;

        printf("please enter the length of the rectangle: ");
        scanf("%f",&l);
        printf("please enter the breadth of the rectangle: ");
        scanf("%f",&b);
        a = l * b;
        printf("%.2f is the area of the rectangle with sides %.2f and %.2f.\n", a, l, b);
        return 0;
    

}