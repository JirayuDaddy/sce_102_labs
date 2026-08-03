#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cat;
    float cat_price;
    char iname;
    printf("Pet shop\n\n");
    printf("Enter number of cat: ");
    scanf("%d", &cat);
    printf("Enter price per cat: ");
    scanf("%f", &cat_price);
    printf("Enter customer initial: ");
    scanf(" %c", &iname);
    printf("\nCat price %f, ordered %d\n", cat_price, cat);
    printf("Ordered by %c\n", iname);
    return 0;
}
