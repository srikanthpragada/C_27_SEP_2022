// Program to take price and display net price after discount and tax
// Date : 03-OCT-2022

#include <stdio.h>

void main()
{
  int price, discount, discounted_price, tax, net_price;

     // input
     printf("Enter price :");
     scanf("%d", &price);

     // Process
     discount = price  * 15 / 100;
     discounted_price = price - discount;
     tax = discounted_price * 12 / 100;
     net_price = discounted_price + tax;

     // Output
     printf("Price           %5d\n", price);
     printf("- Discount      %5d\n", discount);
     printf("+ Tax           %5d\n", tax);
     printf("Net Price       %5d\n", net_price);

}
