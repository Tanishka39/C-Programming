// Program to check whether a character is an alphabet or not
#include <stdio.h>
void main()
{
char ch;
clrscr();
printf("Enter a character:");
scanf("%c",&ch);
if (ch>='a'&& ch<='z')
printf("Character is an alphabet");
else
printf("Character is not an alphabet");
getch();
}