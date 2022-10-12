// Take a number and display whether it is prime
// Date : 12-OCT-2022

#include <stdio.h>

void main()
{
  int i, count = 0, num;

     printf("Enter a number :");
     scanf("%d", &num);

     for(i = 2; i <= num / 2; i ++)
     {
         if (num % i == 0)
              count ++;
     }

     if(count > 0)
         printf("Not a prime");
     else
         printf("Prime number");
}
