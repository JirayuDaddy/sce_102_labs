#include <stdio.h>

int main()
{
    int code,quantity;
    float price,total;
    char initial;

    printf("Enter the product code : ");
    scanf("%d",&code);
    printf("Enter the product initial (1 character) : ");
    scanf(" %c",&initial);
    printf("Enter the product price : ");
    scanf("%f",&price);
    printf("Enter quantity : ");
    scanf("%d",&quantity);

    printf("Code   | Name  | Price    | Qty\n ");
    printf("%6d %-5c %10.2f     %d",code,initial,price,quantity);

    total = price*quantity;

    printf("\nTotal price : %.2f บาท ",total);
    return 0;
    
}