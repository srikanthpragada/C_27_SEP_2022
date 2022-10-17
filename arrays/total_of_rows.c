#include <stdio.h>

void main()
{
  int a[5][5];
  int i,j, total = 0;

       srand(time(0)); // initialize random seed
       for(i = 0; i < 5; i ++)
       {
         total = 0;
         for(j = 0 ; j < 5; j ++)
         {
          a[i][j] = rand() % 100;   // get random number, divide by 100  and take modulus
          printf("%5d", a[i][j]);
          total += a[i][j];
         }
         printf("%5d\n", total);
       }
}
