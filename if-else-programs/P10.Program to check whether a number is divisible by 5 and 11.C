//Program to check whether a number is divisible by 5 and 11.
#include <stdio.h>
void main()
{
int num;
clrscr();
printf("Enter a number:");
scanf("%d",&num);
if (num%5==0)
printf("%d is divisible by 5",num);
else if (num%11==0)
printf("%d is divisible by 11",num);
else
printf("%d is not divisible by 5 and 11",num);
getch();
}

