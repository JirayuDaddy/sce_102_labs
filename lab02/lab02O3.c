#include <stdio.h>
#include <stdlib.h>
int main()
{
    int ProductID;
    float ProductPrice;
    char Grade;
    printf("Enter Product ID: ");
    scanf("%d", &ProductID);
    printf("Enter Price: ");
    scanf("%f", &ProductPrice);
    printf("Enter Grade: ");
    scanf(" %c", &Grade);
    printf("===========================\n");
    printf("PRODUCT RECEIPT\n");
    printf("===========================\n");
    printf("Product ID:|%5d|\n", ProductID);
    printf("Price     :|%.2f|\n", ProductPrice);
    printf("Grade     :|%-5c|\n", Grade);
    printf("===========================\n");

    return 0;
}