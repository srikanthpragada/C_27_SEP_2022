// Take month number and display no. of days
// Date : 07-OCT-2022

#include <stdio.h>

void main()
{

  int month, year, days;

     printf("Enter month number : ");
     scanf("%d",&month);

     if(month == 2)
     {
        printf("Enter year :");
        scanf("%d", &year);
        if (year % 4 == 0)
            days = 29;
        else
            days = 28;
     }
     else
        if (month == 4 || month == 6 || month == 9 || month == 11)
            days = 30;
        else
            days = 31;

     printf("No. of days = %d", days);
}
