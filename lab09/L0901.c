#include <stdio.h>

int main()
{
    int apple = 17;
    float meter = 22.38;
    char order = 'k';

    int *pointerapple = &apple;
    float *pointermeter = &meter;
    char *pointerorder = &order;

    printf("apple is %d, stored at %p\n", *pointerapple, pointerapple);
    printf("meter is %.2f, stored at %p\n", *pointermeter, pointermeter);
    printf("order is %c, stored at %p\n", *pointerorder, pointerorder);

    return 0;
}