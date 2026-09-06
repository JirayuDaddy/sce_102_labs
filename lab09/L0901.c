#include <stdio.h>

int main()
{
    int apple = 12;
    float meter = 22.38;
    char order = 'k';

    int *ptr_apple;
    float *ptr_meter;
    char *ptr_order;

    ptr_apple = &apple;
    ptr_meter = &meter;
    ptr_order = &order;

    printf("apple is %d, stored at %p\n", apple, ptr_apple);
    printf("meter is %.2f, stored at %p\n", meter , ptr_meter);
    printf("order is %c, stored at %p", order , ptr_order);
    return 0;
}