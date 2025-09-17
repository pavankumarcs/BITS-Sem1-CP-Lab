#include <stdio.h>

void main() {
float m1,m2,m3,m4,m5,percentage;

printf("Enter marks in sub1: \n");
scanf("%f",&m1);
printf("Enter marks in sub2: \n");
scanf("%f",&m2);
printf("Enter marks in sub3: \n");
scanf("%f",&m3);
printf("Enter marks in sub4: \n");
scanf("%f",&m4);
printf("Enter marks in sub5: \n");
scanf("%f",&m5);

percentage = (((m1+m2+m3+m4+m5)/500)*100);

if(percentage >80)
{printf("Distinction");}
else if (percentage>=60 && percentage<80)
{printf("First");}
else if (percentage>=45 && percentage<60)
{printf("Second");}
else if (percentage<45)
{printf("Fail");}


}
