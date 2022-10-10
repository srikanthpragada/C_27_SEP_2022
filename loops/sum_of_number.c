// Take a numbers until 0 is given and display total of numbers
// Date : 10-OCT-2022

#include <stdio.h>

void main()
{
  int num, total = 0;


     while(1)
     {
         printf("Enter a number [0 to stop] :");
         scanf("%d", &num);

         if(num == 0)
            break;

         total += num;
     }

     printf("Total = %d", total);
}
