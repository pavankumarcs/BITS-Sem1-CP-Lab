#include <stdio.h>

int main()
{
int num1;
printf("enter num1: ");
scanf("%d",&num1);

int num2;
printf("enter num2: ");
scanf("%d",&num2);

int num3;
printf("enter num3: ");
scanf("%d",&num3);


int num4;
printf("enter num4: ");
scanf("%d",&num4);


int num5;
printf("enter num5: ");
scanf("%d",&num5);


int avg = (num1 + num2 + num3 + num4 + num5)/5;
printf("The average is: %d",avg);

return 0;
}
