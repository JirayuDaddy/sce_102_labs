#include <stdio.h>
#include <stdlib.h>

int main() {
int code, qty;
float price;
char name;
printf("Enter product code: ");
scanf("%d", &code);
printf("Enter product initial (1character): ");
scanf(" %c", &name);
printf("Enter product price: ");
scanf("%f", &price);
printf("Enter quantity: ");
scanf("%d", &qty);
printf("\n");
printf("Code |Name  |Price   |Qty\n");
printf("%4d %4c %10.2f %5d\n", code, name, price, qty);
printf("Total price: %.2f Baht\n", price * qty);
return 0;
}
