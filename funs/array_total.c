#include <stdio.h>

int array_total(int a[5])
{
 int i, total = 0;

    for(i = 0; i < 5; i ++)
        total += a[i];

    return total;
}

void main()
{
  int arr[5] = {10,20,30,40,50}, total;

     total = array_total(arr);
     printf("%d", total);
}
