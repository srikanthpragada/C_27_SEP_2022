#include <stdio.h>

void main()
{
  int a[5][5];
  int i,j, found = 0, sn;

       srand(time(0)); // initialize random seed
       for(i = 0; i < 5; i ++)
       {
         for(j = 0 ; j < 5; j ++)
         {
          a[i][j] = rand() % 100;   // get random number, divide by 100  and take modulus
          printf("%5d", a[i][j]);
         }
         printf("\n");
       }

       printf("\nEnter search number :");
       scanf("%d",&sn);

       for(i = 0; i < 5 && found == 0; i ++)
       {
         for(j = 0 ; j < 5; j ++)
         {
           if(a[i][j] == sn)
           {
               printf("Found at %d, %d\n", i, j);
               found = 1;
               break;
           } // if
         } // inner for
       } // outer for

       if(found == 0)
         printf("Not found!");
}

