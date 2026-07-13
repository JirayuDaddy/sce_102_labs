#include <stdio.h>
#include <stdlib.h>

int main()
{
    int order;
    float price;
    char iname;
    printf ("Snack shop\n\n");
    printf("Enter number of order: ");
    scanf("%d", &order);
    printf("Enter price per order: ");
    scanf("%f", &price);
    printf("Enter customer initial: ");
    scanf(" %c", &iname);
    printf("\n\nSnack price %f, order %d\n", price, order);
    printf("ordered by %c\n", iname);
    return 0;
}