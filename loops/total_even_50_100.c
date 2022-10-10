// Display sum of even numbers between 50 and 100
// Date : 10-OCT-2022

#include <stdio.h>

void main()
{
  int i, total = 0;

     for(i = 50; i <= 100; i += 2)
     {
         total += i;
     }

     printf("Total = %d", total);
}
