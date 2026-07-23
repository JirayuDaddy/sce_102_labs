#include <stdio.h>
#include <stdlib.h>

int main(){
    int code, quantity;
    char initial;
    float price, sum;

    printf("Enter product code: ");
    scanf("%d", &code);
    printf("Enter product initial (1 character): ");
    scanf(" %c", &initial);
    printf("Enter product price: ");
    scanf("%f", &price);
    printf("Enter quantity: ");
    scanf("%d", &quantity);

    printf("\nCode  |Name |Price     |Qty   ");
    printf("\n%6d %-5c %10.2f %6d", code, initial, price, quantity);

    sum = price * quantity ;
    printf("\n\nTotal price: %.2f Baht", sum);
    return 0;

}