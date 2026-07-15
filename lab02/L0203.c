#include <stdio.h>
#include <stdlib.h>

int main(){
    int prod_ID;
    float price;
    char grade;

    printf("Enter Product ID : ");
    scanf("%d",&prod_ID);

    printf("Enter Price      : ");
    scanf("%f",&price);

    printf("Enter Grade      : ");
    scanf(" %c",&grade);

    printf("===============================\n");
    printf("\tPRODUCT RECEIPT\n");
    printf("===============================\n");

    printf("Product ID : |%08d|\n",prod_ID);
    printf("Price      : |%8.2f|\n",price);
    printf("Grade      : |%-8c|\n",grade);

    printf("===============================\n");

    return 0;
}