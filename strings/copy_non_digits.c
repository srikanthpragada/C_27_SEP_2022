#include <stdio.h>

void main()
{
  char s1[30], s2[30];
  int i, j;

     printf("Enter a string :");
     gets(s1);

     for(i = 0, j = 0; s1[i] != '\0'; i ++)
     {
         if(!isdigit(s1[i]))
         {
             s2[j] = s1[i];
             j ++;
         }
     }
     s2[j]= '\0';
     puts(s2);
}
