// Program to print multiplication table of a given number
# include <stdio.h>
void main()
{
int num,i;
clrscr();
printf("Enter a number for which you want the table:");
scanf("%d",&num);
for(i=1;i<=10;i++)
{printf("%d x %d = %d \n",num,i,num*i);}
getch();
}
