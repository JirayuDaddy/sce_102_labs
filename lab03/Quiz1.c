#include <stdio.h>

int main()
{
    int Product_code;
    char Product_initial;
    float Product_price;
    int quantity;

    printf("Enter Product code : ");
    scanf("%d",&Product_code);

    printf("Enter Product initial : ");
    scanf(" %c",&Product_initial);

    printf("Enter Product price : ");
    scanf("%f",&Product_price);

    printf("Enter Quantity : ");
    scanf("%d",&quantity);

    printf("Code  |Name |Price   |Qty\n");
    printf("%6d %-5c %10.2f %d \n",Product_code,Product_initial,Product_price,quantity);
    printf("Total_Price: %.2f bath",Product_price*quantity);

    return 0;





}