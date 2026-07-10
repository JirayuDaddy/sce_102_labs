#include <stdio.h>
#include <stdlib.h>

int main()
{
    int order;
    float price;
    char iname;
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
