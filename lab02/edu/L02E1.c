#include <stdio.h>
#include <stdlib.h>
int main() {
    int order;
    float price;
    char iname;
    printf("Before\n");
    printf("Order: %d\n", order);
    printf("Price: %f\n", price);
    printf("Item Name: %c\n", iname);
    order = 43;
    price = 83.40;
    iname = 'S';

    printf("After\n");
    printf("Order: %d\n", order);
    printf("Price: %f\n", price);
    printf("Item Name: %c\n", iname);
    
return 0;
}