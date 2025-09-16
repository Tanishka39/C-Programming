// Program to count digits in a number
#include <stdio.h>
void main()
{
long int num;
int count=0;
clrscr();
printf("Enter a number:");
scanf("%d",&num);
if (num == 0)
{count = 1;  }
else
{while (num != 0) 
    {count= count+1;
     num = num / 10;
    }
}

printf("Digits in a number= %d ",count);
getch();
}