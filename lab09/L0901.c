#include <stdio.h>

int main() {
    int apple = 17;
    float meter = 22.38;
    char order = 'k';

    int *p_apple = &apple;
    float *p_meter = &meter;
    char *p_order = &order;

    printf("apple is %d, stored at %p\n", *p_apple, (void *)p_apple);
    printf("meter is %.2f, stored at %p\n", *p_meter, (void *)p_meter);
    printf("order is %c, stored at %p\n", *p_order, (void *)p_order);

    return 0;
}