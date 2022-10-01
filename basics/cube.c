// Program to print square of a number
// Date : 01-OCT-2022

#include <stdio.h>

void main()
{
  int num, result;

     // input
     printf("Enter a number :");
     scanf("%d", &num);

     // Process
     result = num * num * num;

     // Output
     printf("Cube of %d is %d", num, result);

}
