struct time
{
   int h,m,s;
};

#define SIZE 5

void print_time(struct time t)
{
   printf("%02d:%02d:%02d\n", t.h, t.m, t.s);
}

int total_seconds(struct time t)
{
  return t.h * 3600 + t.m * 60 + t.s;
}

void main()
{
  struct time times[SIZE];
  int i, pos = 0, lsecs = 0, seconds;

       srand(time(0));
       for(i = 0; i < SIZE; i ++)
       {
          times[i].h = rand() % 24;
          times[i].m = rand() % 60;
          times[i].s = rand() % 60;
          print_time(times[i]);

          seconds = total_seconds(times[i]);
          if (seconds > lsecs)
          {
              lsecs = seconds;
              pos = i;
          }
       }

       printf("\nLargest Time : ");
       print_time(times[pos]);


}
