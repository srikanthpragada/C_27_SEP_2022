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
     if(price > 1000)
         discount = price  * 20 / 100;
     else
         discount = price  * 10 / 100;

     net_price = price - discount;
     printf("Net Price = %d",net_price);
}
