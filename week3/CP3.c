#include <stdio.h>
void main(){

int num;

printf("Enter digit: ");
scanf("%d",&num);

switch(num){
case 1 :{
	printf("One");
	break;}

case 2 :{
        printf("Two");
        break;}

case 3 :{
        printf("Three");
        break;}

case 4 :{
        printf("Four");
        break;}

case 5 :{
        printf("Five");
        break;}

case 6 :{
        printf("Six");
        break;}

case 7 :{
        printf("Seven");
        break;}

case 8 :{
        printf("Eight");
        break;}

case 9 :{
        printf("Nine");
        break;}

case 0 :{
        printf("Zero");
        break;}

default :
        printf("Retry");


}

}
