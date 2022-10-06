// Calculate wage based on week and hours
// Date : 06-OCT-2022

#include <stdio.h>

void main()
{
    int week, hours, rate;

     printf("Enter week and hours worked :");
     scanf("%d%d",&week,&hours);

     switch(week)
     {
         case 1 : rate = 100;
                  break;
         case 2 :
         case 3 : rate = 120;
                  break;
         case 4 :
         case 5 : rate = 150;
                  break;
         default: rate = 200;
     }

     printf("Wage = %d", hours * rate);

}
