// Program to find the youngest among three persons
# include <stdio.h>
void main()
{
int p1,p2,p3;
clrscr();
printf("Enter the age of a first person,A:");
scanf("%d",&p1);
printf("Enter the age of a second person,B:");
scanf("%d",&p2);
printf("Enter the age of a third person,C:");
scanf("%d",&p3);
if(p1<p2 && p1<p3)
printf("A is youngest");
else if(p2<p1 && p2<p3)
printf("B is youngest");
else
printf("C is youngest");
getch();
}