// Take 5 numbers and display sum of digits
// Date : 12-OCT-2022

#include <stdio.h>

void main()
{
  int i,total = 0, digit, num;

     for(i = 1; i <= 5; i ++)
     {
         printf("Enter a number :");
         scanf("%d", &num);

         while(num > 0)
         {
             digit  = num % 10;
             total += digit;
             num /= 10;
         }
     }

     printf("Total = %d", total);
}
