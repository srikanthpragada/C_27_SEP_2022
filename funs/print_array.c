#include <stdio.h>

void init_array(int a[10], int range)
{
 int i;

    for(i = 0; i < 10; i ++)
       a[i] = rand() % range;

}

void print_array(int a[10])
{
 int i;

    for(i = 0; i < 10; i ++)
        printf("%d ", a[i]);

}

void main()
{
  int arr[10], arr2[10];

      srand(time(0));
      init_array(arr, 50);
      print_array(arr);
      //print_array(arr2);

}
