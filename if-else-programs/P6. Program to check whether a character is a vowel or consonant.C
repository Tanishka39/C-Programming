// Program to check whether a character is vowel or consonant
#include <stdio.h>
void main()
{
char ch;
clrscr();
printf("Enter a character:");
scanf("%c",&ch);
if (ch>='a'&& ch<='z')
{if (ch=='a'||ch=='e'|| ch=='i'|| ch=='o'|| ch=='u')
printf("Character is vowel");
else
printf("Character is consonant");
}
else
printf("Given character is not an alphabet");
getch();
}










