#include <stdio.h>

void main(){

char c;
int i;
i = 0;
char vowels[] = "aeiou";
printf("Enter a Letter: \n");
scanf("%c",&c);

for (i in sizeof(vowels)){
	if (c == vowels[i]){
		printf("Vowel");
		break }
	else {
		printf("Consonant");}
}

}
