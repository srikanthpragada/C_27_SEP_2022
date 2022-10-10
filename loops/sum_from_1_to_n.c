// Take a number and display sum of numbers from 1 to that number
// Date : 10-OCT-2022

#include <stdio.h>

void main()
{
  int i, num, total = 0;

     printf("Enter a number :");
     scanf("%d", &num);

     for(i = 1; i <= num; i ++)
     {
         total += i;
     }

     printf("Total = %d", total);
}
