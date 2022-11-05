#include <stdio.h>

void main()
{
  FILE * fp;
  int i;
  char name[30];

     fp = fopen("names.txt","wt");

     for(i = 1; i <= 5; i ++)
     {
        printf("Enter name :");
        gets(name);

        fprintf(fp,"%s\n", name);
     }

     fclose(fp);
}
