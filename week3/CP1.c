#include <stdio.h>
#include <ctype.h>

void main() {

char c1,c;

printf("Enter the character to check consonant/vowel: ");
scanf("%c",&c1);

c = toupper(c1);


switch(c){
case 'A' :{
        printf("Vowel");
	break;}
case 'E' :{
        printf("Vowel");
	break;}
case 'I' :{
        printf("Vowel");
	break;}
case 'O' :{
        printf("Vowel");
	break;}
case 'U' :{
	printf("Vowel");
	break;}
default : 
        printf("Consonant");




}

}

