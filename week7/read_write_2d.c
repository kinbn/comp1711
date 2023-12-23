#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void initialiseArrayRandom(int);

int main ()
{
    int A[3][4];
    int B[3][4];
    int C[3][4];

//seed the random number generator with current time
    srand(time(NULL));

    initialiseArrayRandom(A);
    initialiseArrayRandom(B);

    multiplyArrays(A, B, C);

    //print arrays A, B, and C

    printf("Array A:\n"); printArray(A);

    printf("Array B:\n"); printArray(B);

    printf("Array C(result of element-wise multiplication):\n"); printArray(C);
    
    return 0;
}

//function to initialise an array wiht random values
void initialiseArrayRandom(int a[3][4])
{
    for(int i = 0; i < 3; i++)
}