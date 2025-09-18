 #include<stdio.h>
 void main()
 {
 int num;
 clrscr();
 printf("Enter number to check even or odd:");
 scanf("%d",&num);
 
 if(num%2==0)
 printf("%d is even number",num);
 else
 printf("%d is odd number",num);
 getch();
 }

