#include <stdio.h>

int search(int a[10], int sn)
{
 int i;

    for(i = 0; i < 10; i ++)
    {
         if (a[i] == sn)
            return i;   // found so return position
    }

    return -1; // indicates not found
}

void main()
{
 int a[] = {10,22,33,44,54,33,22,11,98,78};
 int pos;

     pos = search(a, 11);
     printf("%d ", pos);
}
