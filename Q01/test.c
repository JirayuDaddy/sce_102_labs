#include <stdio.h>
#include <stdlib.h>

int main()
{
    int product_id,total;
    float price,total_price;
    char name;

    printf("Enter Product ID : ");
    scanf("%d", &product_id);

    printf("Enter Name : ");
    scanf(" %c", &name);

    printf("Enter price : ");
    scanf("%f", &price);

    printf("Enter total : ");
    scanf("%d", &total);

    printf("Product ID | Name | Price | total ");
    printf("\n");
    printf("%6d%9c%10.2f%6d\n",product_id,name,price,total);

    total_price=price*total;

    printf("\n");
    printf("Total price : %.2f",total_price,price,total);

    return 0 ;
}
