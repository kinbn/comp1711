#include<stdio.h>

int main()
{
    int a [11];
    int count;
    
    for (count = 0; count < 11; count++ )
    {
        a[count] = count * 10 + count;
    }

    printf ("The first and second elements are %d and %d & %d \n", a[0], a[1], a[10]);
    printf("Or, using pointers, %d and %d & %d \n", *a, *(a+1), *(a+10));
    
    return 0;

}