#include <stdio.h>

void main()
{
  int a[10];
  int i;

       srand(time(0)); // initialize random seed

       for(i = 0; i < 10; i ++)
       {
          a[i] = rand() % 100;   // get random number, divide by 100  and take modulus
          printf("%d\n", a[i]);
       }

}
