#include <stdio.h>
#include <stdlib.h> 
int main() {
    int productID;
    float price;
    char grade;
    printf("Enter Product ID : ");
    scanf("%d", &productID);
    printf("Enter Price      : ");
    scanf("%f", &price);
    printf("Enter Grade      : ");
    scanf(" %c", &grade);
    printf("\n");
    printf("==============================\n");
    printf("       PRODUCT RECEIPT\n");
    printf("==============================\n");
    printf("Product ID : |%08d|\n", productID);
    printf("Price      : |%8.2f|\n", price);
    printf("Grade      : |%-8c|\n", grade);
    printf("==============================\n");
    return 0;
}