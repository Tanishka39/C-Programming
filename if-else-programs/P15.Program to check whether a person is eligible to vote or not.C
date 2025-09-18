//Program to check whether a person is eligible to vote or not.
# include <stdio.h>
void main()
{
int age;
clrscr();
printf("Enter the age of a person:");
scanf("%d",&age);
if (age>=18)
printf("The person is eligible to vote!");
else
printf("Person is not eligible to vote !");
getch();
}