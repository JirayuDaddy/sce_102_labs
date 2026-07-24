#include <stdio.h>

int main() {
    int code, qty;
    char name;
    float price, total;

    printf("Enter product code: ");
    scanf("%d", &code);

    printf("Enter product initial: ");
    scanf(" %c", &name);

    printf("Enter product price: ");
    scanf("%f", &price);

    printf("Enter quantity: ");
    scanf("%d", &qty);

    total = price * qty;

    printf("\n");
    printf("%6s | %-5s | %10s | %6s\n", "Code", "Name", "Price", "Qty");
    printf("%6d | %-5c | %10.2f | %6d\n", code, name, price, qty);

    printf("\nTotal price: %.2f baht\n", total);

    return 0;
}