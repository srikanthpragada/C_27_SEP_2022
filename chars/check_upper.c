// Take a char and display whether it is uppercase
// Date : 13-OCT-2022

#include <stdio.h>

void main()
{
  char ch;

     printf("Enter char :");
     ch = getch();

     if(ch >= 'A' && ch <= 'Z')
        printf("Uppercase");
     else
       if(ch >= 'a' && ch <= 'z')
          printf("Lowercase");
       else
          printf("Other char");

}
