#include <stdio.h>

int main(void)
{
    int apple = 17;
    float meter = 22.38f;
    char order = 'k';

    int *apple_ptr = &apple;
    float *meter_ptr = &meter;
    char *order_ptr = &order;

    printf("apple is %d, stored at %p\n", *apple_ptr, (void *)apple_ptr);
    printf("meter is %.2f, stored at %p\n", *meter_ptr, (void *)meter_ptr);
    printf("order is %c, stored at %p\n", *order_ptr, (void *)order_ptr);

    return 0;
}
