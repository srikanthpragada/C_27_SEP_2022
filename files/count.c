#include <stdio.h>

void main(int argc, char * argv[])
{
  FILE * fp;
  int ch, alpha = 0, digit = 0, other = 0;

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

         if(isalpha(ch))
              alpha ++;
         else
            if(isdigit(ch))
                digit ++;
            else
                other ++;
     }

     fclose(fp);

     printf("Alphas = %d, Digits = %d, Others = %d", alpha, digit, other);
}
