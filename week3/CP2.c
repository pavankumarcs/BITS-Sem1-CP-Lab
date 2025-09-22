#include <stdio.h>

void main() {

float num1,num2;
int operation;

printf("Enter num1: ");
scanf("%f",&num1);
printf("Enter num2: ");
switch(operation){
case 1 :{
        float add = num1 + num2;
        printf("addition is %f",add);
        break;}
case 2 :{
        float sub = num1 -  num2;
        printf("subtraction is %f",sub);
        break;}
case 3 :{
        float mul = num1 * num2;
        printf("multiplication is %f",mul);
        break;}

case 4 :{
        float div = num1 / num2;
        printf("division is %f",div);
        break;}


default :
        printf("Retry");




}

}


