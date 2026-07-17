#include <stdio.h>
#include <stdlib.h>

int main()
{
    int product_id;
    float price;
    char grade;

    printf("Enter Product ID : ");
    scanf("%d", &product_id);
    
    printf("Enter Price      : ");
    scanf("%f", &price);
    
    printf("Enter Grade      : ");
    scanf(" %c", &grade); 

    printf("\n========================================\n");
    printf("            PRODUCT RECEIPT\n");
    printf("========================================\n");
    
    printf("Product ID : |%08d|\n", product_id);
    printf("Price      : |%10.2f|\n", price);
    printf("Grade      : |%-10c|\n", grade);
    
    printf("========================================\n");

    return 0;
}