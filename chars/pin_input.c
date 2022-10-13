// Take 4 chars and display whether it is valid pin
// Date : 13-OCT-2022

#include <stdio.h>

void main()
{
  char ch;
  int i, count = 0;

     printf("Enter PIN :");

     for(i = 1; i <= 4; i ++)
     {
         ch = getch();
         putch('*');
         if(isdigit(ch))
              count ++;
     }

     if(count == 4)
        printf("\nValid PIN");
     else
        printf("\nInvalid PIN");

}
