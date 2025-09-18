// Program to find the grade of a student based on marks
# include <stdio.h>
void main()
{
int marks;
clrscr();
printf("Enter marks of the student:");
scanf("%d",&marks);
if(marks>=90)
printf("Grade = A");
else if(marks<90 && marks>=80)
printf("Grade = B");
else if(marks<80 && marks>=70)
printf("Grade = C");
else if(marks<70 && marks>=60)
printf("Grade = D");
else if(marks<60 && marks>=50)
printf("Grade = E");
else
printf("Grade = F(fail)");
getch();
}


