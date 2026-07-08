#include <stdio.h>
#include <stdlib.h>

int main(){
    int id;
    float price;
    char grade;

    printf("Enter Product ID : ");
    scanf("%d",&id);

    printf("Enter Price      : ");
    scanf("%f",&price);

    printf("Enter Grade      : ");
    getchar(); // to consume the newline character
    scanf("%c",&grade);

    printf("===============================\n");
    printf("\tPRODUCT RECEIPT\n");
    printf("===============================\n");

    printf("Product ID : |%08d|\n",id);
    printf("Price      : |%8.2f|\n",price);
    printf("Grade      : |%-8c|\n",grade);

    printf("===============================\n");

    return 0;
}