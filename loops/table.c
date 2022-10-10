// Take a number and print table
// Date : 10-OCT-2022

#include <stdio.h>

void main()
{
  int i, num;

     printf("Enter a number :");
     scanf("%d", &num);

     for(i = 1; i <= 20; i ++)
     {
        printf("%3d * %3d = %4d\n", num, i, num * i);
     }
}
