// Largest of 3 numbers
// Date : 07-OCT-2022

#include <stdio.h>

void main()
{
  int a = 50, b = 20,c = 15, max;

    if (a > b  && a > c)
        max = a;
    else
        if (b > c)
           max = b;
        else
           max = c;

    printf("%d", max);
}
