// Take 5 numbers and print sum
// Date : 08-OCT-2022

#include <stdio.h>

void main()
{
  int i, num, total = 0;

     for(i = 1; i <= 5; i ++)
     {
         printf("Enter number :");
         scanf("%d",&num);

         total = total + num;
     }

     printf("Total = %d", total);
}
