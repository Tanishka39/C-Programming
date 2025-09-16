//Program to print GP(Geometric Progression) series
# include <stdio.h>
void main()
{
int a,r,n,i;
clrscr();
printf("Enter first term:");
scanf("%d",&a);
printf("Enter common ratio:");
scanf("%d",&r);
printf("Enter no. of terms:");
scanf("%d",&n);
printf("The GP series =");
for(i=1;i<=n;i++)
{ printf("%d, ",a);
  a=a*r;i
}
getch();
}
