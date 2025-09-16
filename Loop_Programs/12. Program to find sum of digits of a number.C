//Program to find sum of digits of a number
# include <stdio.h>
void main()
{
int num,orig_num,i,sum=0;
clrscr();
printf("Enter a number:");
scanf("%d",&num);
orig_num=num

while(num!=0);
{ i=num%10;
  sum=sum+i;
  num=num/10;
}
printf("sum of digits in %d = %d",orig_num,sum);
getch();
}