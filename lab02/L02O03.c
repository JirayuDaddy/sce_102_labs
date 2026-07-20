#include <stdio.h>
#include <stdlib.h>
int main(){
    int int1;
    float float1;
    char char1;
    printf("Enter Product ID : ");
    scanf("%d",&int1);
    printf("Enter Price      : ");
    scanf("%f",&float1);
    printf("Enter Grade      : ");
    scanf(" %c",&char1);
    printf("===============================\n        PRODUCT RECEIPT\n===============================\n" );
    printf("Product ID : |%08d|\n",int1);
    printf("Price      : |%10.2f|\n",float1);
    printf("Grade      : |%-10c|\n",char1);
    return 0;
}