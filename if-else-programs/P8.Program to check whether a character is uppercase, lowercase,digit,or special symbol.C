//Program to check whether a character is uppercase,lowercase or a digit
#include <stdio.h>
void main()
{
char ch;
clrscr();
printf("Enter a character:");
scanf("%c",&ch);
if (isupper(ch))
printf("%c character is uppercase",ch);
else if (islower(ch))
printf("%c character is lowercase",ch);
else if(isdigit(ch))
printf("%c character is digit",ch);
else
printf("%c is a special symbol", ch);
getch();
}