// Program to find largest of two numbers
#include<stdio.h>
void main()
{
int a,b;
clrscr();
printf("Enter first number:");
scanf("%d",&a);
printf("Enter second number:");
scanf("%d",&b);
if(a>b)
printf("%d is largest",a);
else if(a==b)
printf("Both numbers are same");
else
printf("%d is largest",b);
getch();
}