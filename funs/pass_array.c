
void print_array(int arr[], int len)
{
  int i;

     for(i = 0; i < len; i ++)
         printf("%d ", arr[i]);
}

void main()
{
  int a[5] = {10, 20, 30, 40, 50};
  int b[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

     print_array(a, 5);
     print_array(b, 10);
}
