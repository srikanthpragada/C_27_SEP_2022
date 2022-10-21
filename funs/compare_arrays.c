#include <stdio.h>

int are_equal(int a[5], int b[5])
{
 int i;

    for(i = 0; i < 5; i ++)
    {
        if (a[i] != b[i])
            return 0;  // false as mismatch detected
    }

    return 1;  // True as all elements are same

}

void main()
{
  int a1[5] = {10,20,30,41,50}, a2[5] = {10,20,30,40,50};
  int result;


       result = are_equal(a1,a2);
       printf("%d" , result);
}
