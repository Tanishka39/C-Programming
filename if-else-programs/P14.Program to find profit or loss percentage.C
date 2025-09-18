// Program to find profit or loss percentage
# include <stdio.h>
void main()
{
float cp,sp,profit, pro_percent,loss,loss_percent;
clrscr();
printf("Enter the cost price:");
scanf("%f",&cp);
printf("Enter the selling price:");
scanf("%f",&sp);

if(sp>cp)
{ profit= sp-cp;
  pro_percent=(profit/cp)*100;
  printf("Profit = %f \n",profit);
  printf("Profit percentage = %f \n",pro_percent);
}
else if(sp<cp)
{ loss=cp-sp;
  loss_percent=(loss/cp)*100 ;
  printf("Loss=%f \n",loss);
  printf("Loss percentage = %f \n",loss_percent);
}
else if(sp==cp)
printf("No profit no loss");
getch();
}
