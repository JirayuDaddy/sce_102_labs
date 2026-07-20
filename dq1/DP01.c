#include <stdio.h>
#include <stdlib.h>

int main()
{
    int code1,qty;
    float price;
    char name1;
    printf("Enter product code:");
    scanf("%d", &code1);
    printf("Enter product initial(1 character):");
    scanf(" %c", &name1);
    printf("Enter product price:");
    scanf("%f", &price);
    printf("Enter quantity:");
    scanf("%d", &qty);
    printf("Code   |Name   |Price       |Qty\n");
    printf("%6d | %-5c | %10.2f | %6d\n", code1, name1, price, qty);
    printf("\nTotal price: %.2f bath", price*qty);
    return 0;
}