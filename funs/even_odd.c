#include <stdio.h>

// User-defined function
void even_odd(int num)
{
   if(num % 2 == 0)
      printf("Even");
   else
      printf("Odd");
}

void main()
{

   even_odd(10);
   even_odd(15);

}
