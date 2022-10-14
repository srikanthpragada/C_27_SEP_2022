// Take 8 chars and display whether it is valid password
// Date : 14-OCT-2022

#include <stdio.h>

void main()
{
  char ch;
  int i, upper = 0, digit = 0;

     printf("Enter password :");

     for(i = 1; i <= 8; i ++)
     {
         ch = getche();
         if(isupper(ch))
            upper = 1;
         else
            if (isdigit(ch))
                digit = 1;
     }

     if(upper && digit)
        printf("\nValid Password!");
     else
        printf("\nInvalid Password!");
}
