// Take month number and display no. of days
// Date : 07-OCT-2022

#include <stdio.h>

void main()
{

  int month, year, days;

     printf("Enter month number : ");
     scanf("%d",&month);

     switch(month)
     {
      case 2:
            printf("Enter year :");
            scanf("%d", &year);
            if (year % 4 == 0)
                days = 29;
            else
                days = 28;
            break;
      case 4:
      case 6:
      case 9:
      case 11:
            days = 30;
            break;
      default:
            days = 31;
    } // switch

    printf("No. of days = %d", days);
}
