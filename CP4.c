#include <stdio.h>

void main() {

float principal,rate,time,interest;

printf("Enter principal: ");
scanf("%f",&principal);
printf("Enter Rate: ");
scanf("%f",&rate);
printf("Enter Time: ");
scanf("%f",&time);
interest = principal*time*rate;
printf("Interest is : %f",interest);
}
