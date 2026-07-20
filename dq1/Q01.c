#include <stdio.h>
#include <stdlib.h>
int main() {
    int code,quantity;
    float price,total;
    char Name;
    printf("Enter product code: ");
    scanf("%d",&code);
    printf("Enter product initial(1 character): ");
    scanf(" %c",&Name);
    printf("Enter product price: ");
    scanf("%f",&price);
    printf("Enter product quantity: ");
    scanf("%d",&quantity);
    total = price * quantity;
    printf("|Code  |Name   |Price   |Quantity|\n");
    printf("|%6d|%5c|%10.2f|%6d|\n", code, Name, price, quantity);
    printf("Total price: %.2f THB\n", total);
    return 0;
}