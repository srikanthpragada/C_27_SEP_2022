#include <stdio.h>

void main()
{
  char name[30];
  int i, count = 0;

     printf("Enter a string :");
     gets(name);

     for(i = 0; name[i] != '\0'; i ++)
     {
         if(isupper(name[i]))
              name[i] = tolower(name[i]);
         else
              name[i] = toupper(name[i]);
     }

     puts(name);
}
