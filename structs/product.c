typedef struct product PRODUCT; // create an alias for struct product

struct product
{
   // members
   char name[30];
   int price, qty;
};

void print(PRODUCT p)
{
    printf("Name   : %s\n", p.name);
    printf("Price  : %d\n", p.price);
    printf("Qty    : %d\n", p.qty);
}

struct product bigger(struct product p1, struct product p2)
{
    if(p1.price > p2.price)
        return p1;
    else
        return p2;
}

void main()
{
  struct product p1;
  struct product p2 = {"Product 2", 10000, 5};
  struct product products[5];

    products[0].price = 1000;
    strcpy(p1.name, "Product 1");
    p1.price = 1000;
    p1.qty = 10;
    print(p1);
    print(p2);
}
