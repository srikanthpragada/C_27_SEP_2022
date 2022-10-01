// Program to take price and display net price
// Date : 01-OCT-2022

#include <stdio.h>

void main()
{
  int price, discount, net_price;

     // input
     printf("Enter price :");
     scanf("%d", &price);

     // Process
     discount = price  * 15 / 100;
     net_price = price - discount;

     // Output
     printf("Net Price = %d",net_price);

}
