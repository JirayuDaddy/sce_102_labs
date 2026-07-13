#include <stdio.h>
#include <stdlib.h>

int main()
{
    int order = 10;
    float price = 10;
    char iname= 'S';
    printf("Snack shop\n\n");
    printf("Enter number of order: ");
    scanf("%d", &order);
    printf("Enter price per order: ");
    scanf("%f", &price);
    printf("Enter customer initial: ");
    scanf(" %c", &iname);
    printf("\nSnack price %f, ordered %d\n", price, order);
    printf("Ordered by %c\n", iname);
    return 0;
}

