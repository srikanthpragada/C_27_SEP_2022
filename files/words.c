#include <stdio.h>

void main(int argc, char * argv[])
{
  FILE * fp;
  int ch;

     if(argc < 2)
     {
         printf("Sorry! File is missing. Quitting.");
         exit(1);
     }

     fp = fopen(argv[1],"rt");

     if(fp == NULL) // if file cannot be opened
     {
         printf("Sorry! Could not open file : %s", argv[1]);
         return;
     }

     while(1)
     {
         ch = fgetc(fp); // read a char from file
         if (ch == EOF)  // reached end of file
            break;

         if(isspace(ch))
             putch('\n');
         else
             putch(ch);
     }

     fclose(fp);
}
