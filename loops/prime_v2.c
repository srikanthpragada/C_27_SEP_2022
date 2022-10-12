// Take a number and display whether it is prime
// Date : 12-OCT-2022

#include <stdio.h>

void main()
{
  int i, prime = 1, num;

     printf("Enter a number :");
     scanf("%d", &num);

     for(i = 2; i <= num / 2; i ++)
     {
         if (num % i == 0)
         {
               prime = 0;
               break;
         }
     }

     if(prime == 0)
         printf("Not a prime");
     else
         printf("Prime number");
}
