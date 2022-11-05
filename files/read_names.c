#include <stdio.h>

void main()
{
  FILE * fp;
  int ch;

     fp = fopen("names.txt","rt");

     while(1)
     {
         ch = fgetc(fp); // read a char from file
         if (ch == EOF)  // reached end of file
            break;

         putch(ch);
     }

     fclose(fp);
}
