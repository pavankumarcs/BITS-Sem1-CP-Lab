#include <stdio.h>

void main() {

float basic,hra,allowance,total;
printf("Enter basic salary: ");
scanf("%f",&basic);
hra = (0.4)*basic;
printf("HRA = %f \n",hra);
printf("Enter allowance");
scanf("%f",&allowance);

total = basic + hra - allowance;

printf("total salary:  %f",total);

}
