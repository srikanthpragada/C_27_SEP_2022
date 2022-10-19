#include <stdio.h>

// User-defined function
void line()
{
  int i;

   for(i = 1; i <= 30; i ++)
      putch('*');
}

void main()
{

   line();  // call function
   printf("\nSrikanth Technologies\n");
   line();

}
