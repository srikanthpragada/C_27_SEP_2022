// Take a number and display whether it is prime
// Date : 12-OCT-2022

#include <stdio.h>

void main()
{
  int i, prime = 1, num;

     printf("1 2 ");

     for(num = 3; num < 100; num += 2)
     {
       prime = 1;
       for(i = 2; i <= num / 2; i ++)
       {
         if (num % i == 0)
         {
            prime = 0;
            break;
         }
       } // inner loop

       if(prime == 1)
         printf("%d ", num);
     } // outer loop

}
