// Program to check whether a triangle is valid or not
# include <stdio.h>
void main()
{
int a1,a2,a3;
clrscr();
printf("Enter angle 1 of triangle:");
scanf("%d",&a1);
printf("Enter angle 2 of triangle:");
scanf("%d",&a2);
printf("Enter angle 3 of triangle:");
scanf("%d",&a3);

if(a1+a2+a3==180)
printf("Triangle is valid");
else
printf("Triangle is not valid");
getch();
}
