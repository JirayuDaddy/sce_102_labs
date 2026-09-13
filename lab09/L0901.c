#include <stdio.h>

int main()
{
    int apple = 17;
    double meter = 22.38;
    char order = 'k';

    int *pA = &apple;
    double *pM = &meter;
    char *pO = &order;

    printf("apple is %d, stored at %p\n", *pA, (void *)pA);
    printf("meter is %.2f, stored at %p\n", *pM, (void *)pM);
    printf("order is %c, stored at %p\n", *pO, (void *)pO);

    return 0;
}
