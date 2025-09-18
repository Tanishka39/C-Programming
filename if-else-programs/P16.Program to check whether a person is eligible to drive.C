//Program to check whether a person is eligible for driving license or not.
# include <stdio.h>
void main()
{
int age;
clrscr();
printf("Enter the age of a person:");
scanf("%d",&age);
if (age>=18)
printf("The person is eligible for driving license!");
else
printf("Person is not eligible for driving license!");
getch();
}