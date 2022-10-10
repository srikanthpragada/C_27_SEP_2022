// Take a number and display it in reverse order
// Date : 10-OCT-2022

#include <stdio.h>

void main()
{
  int digit, num;

     printf("Enter a number :");
     scanf("%d", &num);

     while(num > 0)
     {
       digit = num % 10;
       printf("%d", digit);
       num = num / 10;
     }
}
