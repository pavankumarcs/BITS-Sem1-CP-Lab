#include <stdio.h>

void main() {
int ascii_int;
printf("Enter an integer for which equivalent ascii character is to be obtained: ");
scanf("%d",&ascii_int);

if (ascii_int >=0 && ascii_int <=255) {
 	printf("The value of ascii int %d in ascii is %c",ascii_int,ascii_int);}

}
