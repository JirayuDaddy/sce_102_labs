#include <stdio.h>

int main()
{
    int ID;
    float price;
    char grade;

    printf("Enter Product ID : ");
    scanf("%d",&ID);
    printf("Enter Price : ");
    scanf("%f",&price);
    printf("Enter Grade : ");
    scanf(" %c",&grade);

    printf("===============================\n");
    printf("          PRODUCT RECEIPT          \n");
    printf("===============================\n");
    printf("Product ID  : |%08d|\n",ID);
    printf("Price       : |%10.2f|\n",price);
    printf("Grade       : |%-10c|\n",grade);
    printf("===============================\n");


    return 0;

}