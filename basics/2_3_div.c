// Print whether number is divisible by 2 and 3
// Date : 08-OCT-2022

#include <stdio.h>

void main()
{
  int num = 11;

     if(num % 2 == 0 && num % 3 == 0)
          printf("By 2 and 3");
     else
        if(num % 2 == 0)
          printf("By 2");
        else
            if(num % 3 == 0)
                printf("By 3");
            else
                printf("By None");
}
