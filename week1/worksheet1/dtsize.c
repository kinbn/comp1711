#include<stdio.h>

int main()
{
// assigning variables for thr data types.

    int  intsize;
    char  charsize;
    float  floatsize;
    double  doublesize;

// printing out the size values
    printf("the max size for int: %ld \n", sizeof(intsize));
    printf("the max size for char: %ld \n", sizeof(charsize));
    printf("the max size for float: %ld \n", sizeof(floatsize));
    printf("the max size for double: %ld \n", sizeof(doublesize));

    return 0;

}