#include<stdio.h>

int main ()
{
int option;

printf ("Choose an option (0 - 5) : ");
scanf("%d", &option);

switch (option)
{
case (0):  printf("you chose option %d \n", option);
break;

case (1):  printf("you chose option %d \n", option);
break;

case (2):  printf("you chose option %d \n", option);
break;

case (3):  printf("you chose option %d \n", option);
break;

case (4):  printf("you chose option %d \n", option);
break;

case (5):  printf("you chose option %d \n", option);
break;

default:   printf("you didn't choose the available options. \n");

}

return 0;
}