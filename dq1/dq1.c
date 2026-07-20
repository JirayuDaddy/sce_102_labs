#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    float t_price, pro_price;
    int pro_code, h_many;
    char sht_name;

    printf("Enter product code: ");
    scanf("%d", &pro_code);
    printf("Enter product initial (1 Character): ");
    scanf(" %c", &sht_name);
    printf("Enter product price: ");
    scanf("%f", &pro_price);
    printf("Enter quantity: ");
    scanf("%d", &h_many);

    t_price = pro_price * h_many;

    printf("\n Code  |Name |  Price   |   Qty\n");
    printf("%6d %-5c %10.2f %6d\n", pro_code, sht_name, pro_price, h_many);
    printf("\nTotal price : %.2f", t_price);

    return 0;
}