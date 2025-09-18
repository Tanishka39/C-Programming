// Program to check whether a year is leap year or not
# include <stdio.h>
void main()
{
int year;
clrscr();
printf("Enter year to check:");
scanf("%d",&year);
if (year%4==0)
printf("%d is a leap year",year);
else
printf("%d is not a leap year",year);
getch();
}