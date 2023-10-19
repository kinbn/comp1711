#include<stdio.h>

float f2c (float ftemp)
{
    float o_f2c;
    o_f2c = ((ftemp - 32) * 5) / 9;
    return o_f2c;
}

float f2k (float ftemp)
{
    float o_f2k;
    o_f2k = (((ftemp - 32) * 5) / 9) + 273.15;
    return o_f2k;
}

float f2n (float ftemp)
{
    float o_f2n;
    o_f2n = (ftemp - 32) * (11/60);
    return o_f2n;
} 

