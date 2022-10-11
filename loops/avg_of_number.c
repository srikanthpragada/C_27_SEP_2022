// Take a numbers until 0 is given and display avg of positive numbers
// Date : 10-OCT-2022

#include <stdio.h>

void main()
{
  int num, total = 0, count = 0;

     while(1)
     {
         printf("Enter a number [0 to stop] :");
         scanf("%d", &num);

         if(num == 0)
            break;   // terminate loop

         if(num < 0) // if negative then ignore
            continue;

         total += num;
         count ++;
     }

     printf("Average = %d", total / count);
}
