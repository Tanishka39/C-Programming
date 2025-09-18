
// Program to classify triangle as equilateral,isosceles or scalene
# include <stdio.h>
void main()
{
int s1,s2,s3;
clrscr();
printf("Enter side 1 of a triangle:");
scanf("%d",&s1);
printf("Enter side 2 of a triangle:");
scanf("%d",&s2);
printf("Enter side 3 of a triangle:");
scanf("%d",&s3);
if (s1==s2==s3)
printf("Triangle is equilateral");
else if(s1==s2 || s2==s3|| s1==s3)
printf("Triangle is isosceles");
else
printf("Triangle is scalene");
getch();
}