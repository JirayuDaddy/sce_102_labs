#include <stdio.h>
#include <stdlib.h>

int main(){
     
    int product_code;
    char initial;
    float product_price;
    int quantity;

    printf("Enter product code: ");
    scanf("%d", &product_code);

    printf("Enter product initial: ");
    scanf(" %c", &initial);

    printf("Enter product price: ");
    scanf("%f", &product_price);

    printf("Enter quatity: ");
    scanf("%d", &quantity);

    printf("\nCode  |Name  |Price    |Qty\n");
    printf("%6d%-5c %10.2f %6d", product_code,initial,product_price,quantity);

    printf("\nTotal price: %.2f bath",product_price * quantity);
       


    return 0;
}