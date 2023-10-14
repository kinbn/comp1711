#include<stdio.h>

int main ()
{
    float SI, P, T, R;


    printf("Enter principal amount (in £'s): ");
    scanf("%f", &P);

    printf("Enter Time (in years): ");
    scanf("%f", &T);

    printf("Enter interest rate (p.a.): ");
    scanf("%f", &R);

    SI = (P * T * R)/100;

    printf("Simple interest = £%0.2f \n", SI);
    return 0;
}