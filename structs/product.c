
struct product
{
   // members
   char name[30];
   int price, qty;
};


void main()
{
  struct product p1;

    strcpy(p1.name, "Product 1");
    p1.price = 1000;
    p1.qty = 10;
}
