// Take 10 chars and display each char in inverted case
// Date : 14-OCT-2022

#include <stdio.h>

void main()
{
  char ch;
  int i;

     printf("Enter Chars :");

     for(i = 1; i <= 10; i ++)
     {
         ch = getch();
         if(isupper(ch))
            putch(tolower(ch));
         else
            putch(toupper(ch));
     }
}
