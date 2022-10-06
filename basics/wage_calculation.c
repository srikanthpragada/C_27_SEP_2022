// Calculate wage based on week and hours
// Date : 06-OCT-2022

#include <stdio.h>

void main()
{
    int week, hours, rate;

     printf("Enter week and hours worked :");
     scanf("%d%d",&week,&hours);

     if(week == 1)
         rate = 100;
     else
        if(week == 2 || week == 3)
            rate = 120;
        else
            if(week == 4 || week == 5)
               rate = 150;
            else
               rate = 200;

     printf("Wage = %d", hours * rate);

}
