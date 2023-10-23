#include<stdio.h>

int main ()
{

int n[5] = {2,7,8,4,7};
int count;

for (count = 5; count >= 0; count --)
{
    printf("%d \n", n[count]);
}
return 0;
}