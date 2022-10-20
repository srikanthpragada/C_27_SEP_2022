#include <stdio.h>

int iseven(int n)
{
    if(n % 2 == 0)
        return 1;
    else
        return 0;
}

void main()
{
 int result;

     if(iseven(10))
       printf("Even");
     else
       printf("Odd");
}
