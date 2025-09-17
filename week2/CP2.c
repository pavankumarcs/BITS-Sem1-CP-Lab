#include <stdio.h>

void main() {

int x,y,temp;
printf("Enter x: ");
scanf("%d",&x);
printf("Enter y: ");
scanf("%d",&y);

temp = x;
x = y;
y = temp;

printf("X is %d, Y is %d",x,y);

}
