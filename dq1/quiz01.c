#include <stdio.h> 
#include <stdlib.h> 
 
int main() 
{
    int code, qty; 
    char name;
    float price, total;
    printf("Enter product code: "); 
    scanf("%d", &code); 
    printf("Enter product initial (1 character): "); 
    scanf(" %c", &name);
    printf("Enter product price: "); 
    scanf("%f", &price);
    printf("Enter quantity: "); 
    scanf("%d", &qty);
    printf("Code |Name |Price |Qty\n");
    printf("%6d | %-5c | %10.2f | %6d\n", code, name, price, qty);
    printf("\nTotal price: %.2f THB\n", price*qty);

    return 0;
    
}