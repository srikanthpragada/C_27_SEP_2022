#include <stdio.h>

void main()
{
  FILE * fp;
  char filename[50];
  int ch;

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
         ch = fgetc(fp); // read a char from file
         if (ch == EOF)  // reached end of file
            break;

         putch(ch);
     }

     fclose(fp);
}
