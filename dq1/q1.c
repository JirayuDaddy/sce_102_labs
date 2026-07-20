#include <stdio.h>
#include <stdlib.h>

int main ()
{
    printf("Enter product code: ");
    int product_code;
    scanf ("%d", &product_code);
    
    printf("Enter product initial (1 character): ");
    char product_initial;
    scanf(" %c", &product_initial);

    printf("Enter product price: ");
    float product_price;
    scanf("%f", &product_price);

    printf("Enter product quantity: ");
    int product_quantity;
    scanf("%d", &product_quantity );

    printf(" Code  | Name | Price | Quantity\n");
    printf("%5d %5c %10.2f %5d\n", product_code, product_initial, product_price, product_quantity);

    printf("Total price: %.2f\n", product_price * product_quantity);

    return 0;

}