// Take a number and print its factors
// Date : 10-OCT-2022

#include <stdio.h>

void main()
{
  int i, num;

     printf("Enter a number :");
     scanf("%d", &num);

     for(i = 2; i <= num / 2; i ++)
     {
         if (num % i == 0)
              printf("%d ", i);
     }
}
