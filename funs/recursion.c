#include <stdio.h>

void reverse_with_loop(int num)
{
   while(num > 0)
   {
       printf("%d", num % 10);
       num /= 10;
   }
}

void reverse(int num)
{
  if(num > 0 )
  {
     printf("%d", num % 10);
     reverse(num / 10);
  }
}

void main()
{
    reverse(123);
}
