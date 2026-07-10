#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ID;
    float price;
    char grade;

    printf("Enter Product ID : ");
    scanf("%d", &ID);
    printf("Enter Price      : ");
    scanf("%f", &price);
    printf("Enter Grade      : ");
    scanf(" %c", &grade);
    printf("\n========================\n        PRODUCT RECEIPT\n========================\n");
    printf("Product ID : |%08d|\n", ID);
    printf("Price      : |%10.2f|\n", price);
    printf("Grade      : |%c        |\n", grade);
    printf("========================");
return 0;
}