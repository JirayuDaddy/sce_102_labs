#include <stdio.h>
#include <stdlib.h>

int main()
{
    int code;
    char initial;
    float price;
    int quantity;
    printf("Enter product code: ");
    scanf("%d", &code);
    printf("Enter product initial(1character): ");
    scanf(" %c", &initial);
    printf("Enter product price: ");
    scanf("%f", &price);
    printf("Enter quantity: ");
    scanf("%d", &quantity);
    printf("\nCode  |Name  |Price  |Qty\n");
    printf("%-6d|%-6c|%-7.2f|%-8d\n", code, initial, price, quantity);
    return 0;
}