#include <stdio.h>
#include <stdlib.h>

int main (){

    int product_id;
    float price;
    char grade;

    printf("Enter Product ID : ");
    scanf("%d", &product_id);
    
    printf("Enter Price : ");
    scanf("%f", &price);

    printf("Enter Grade : ");
    scanf(" %c", &grade);

    printf("\n===============================");
    printf("\n        PRODUCT RECEIPT        ");
    printf("\n===============================");
    printf("\nProduct ID : |%08d|", product_id);
    printf("\nPrice      : |%10.2f|", price);
    printf("\nGrade      : |%-10c|", grade);
    printf("\n===============================\n\n");


    return 0;
}