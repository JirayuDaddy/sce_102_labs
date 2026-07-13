#include <stdio.h>
#include <stdlib.h>

int main()
{
    int order;
    float price;
    char iname;
    printf("Before\n");
    printf("order: %d\n", order);
    printf("price: %f\n", price);
    printf("iname: %c\n", iname);
    order = 80;
    price = 9999;
    iname = 'S';
    printf("\nAfter\n");
    printf("order: %d\n", order);
    printf("price: %f\n", price);
    printf("iname: %c\n", iname);
    return 0;
}