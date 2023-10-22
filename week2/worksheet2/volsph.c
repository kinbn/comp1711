#include<stdio.h>
#include<math.h>

float volume (float);
float pi = M_PI;
float r, vol;

float volume (float);
{
    float f_vol;
    f_vol = (4/3) * pi * r * r * r;
    return f_vol;
}

int main ()
{
printf("Enter the radius of the sphere: ");
scanf("%f", &r);

vol = volume(r);

printf("The volume of the sphere is %0.2f cubic units.\n", vol);
return 0;



}