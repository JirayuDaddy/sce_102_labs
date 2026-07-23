#include <stdio.h>
#include <stdlib.h>

int main()
{
    int code,quantity;
    char character;
    float price;

    printf("Enter product code: ");
    scanf("%d",&code);
    printf("Enter product initial (1 character): ");
    scanf(" %c", &character);
    printf("Enter product price: ");
    scanf("%f", &price);
    printf("Enter quantity: ");
    scanf("%d", &quantity);

    printf("\nCode  |Name  |Price    |Qty\n");
    printf("  %d    %c      %.2f     %d\n\n",code,character,price,quantity);
    printf("Total price: %.2f baht",price*quantity);
    return 0;
}