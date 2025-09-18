// Program to find positive and negative number
# include <stdio.h>
void main()
{
int num;
clrscr();
printf("Enter a number:");
scanf("%d",&num);

if(num>0)
printf("%d is positive ",num);
else if (num==0)
printf("Number is zero");
else
printf("%d is negative number",num);
getch();
}

