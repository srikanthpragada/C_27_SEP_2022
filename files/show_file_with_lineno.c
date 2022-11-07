#include <stdio.h>

void main()
{
  FILE * fp;
  char filename[50], line[200], *p;
  int lineno = 1;

     printf("Enter filename :");
     gets(filename);

     fp = fopen(filename,"rt");

     if(fp == NULL) // if file cannot be opened
     {
         printf("Sorry! Could not open file : %s", filename);
         return;
     }

     while(1)
     {
        p = fgets(line, 200, fp);
        if (p == NULL)  // EOF
           break;

        printf("%3d:%s", lineno, line);
        lineno ++;
     }

     fclose(fp);
}
