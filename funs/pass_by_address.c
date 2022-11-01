// Pass by address or reference

void zero(int * n) // pointer takes address of actual parameter
{
   *n = 0;  // change actual parameter through address of actual parameter
}

void main()
{
  int a = 100;

    zero(&a); // pass address of actual parameter
    printf("%d", a);
}
