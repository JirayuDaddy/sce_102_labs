#include <stdio.h>
#include <stdlib.h>
int main()
{
    int product;
    float price;
    char grade;
    printf("Enter Product ID: ");
    scanf("%d", &product);
    printf("Enter Price: ");
    scanf("%f", &price);
    printf("Enter Grade: ");
    scanf(" %c", &grade);
    printf("===============================\n");
    printf("        PRODUCT RECEIPT\n");
    printf("===============================\n");
    printf("\nProduct ID : |%8d|", product;
    printf("\nPrice      : |%10.2f|", price);
    printf("\nGrade      : |%-10c|", grade);
    return 0;
}