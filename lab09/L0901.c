#include <stdio.h>
#include <stdlib.h>

int main() {

    int apple = 17;
    float meter = 22.38;
    char order = 'k';

    int *Apple = &apple;
    float *Meter = &meter;
    char *Order = &order;

    printf("apple is %d, stored at %p\n", *Apple,Apple);
    printf("meter is %.2f, stored at %p\n", *Meter,Meter);
    printf("order is %c, stored at %p\n", *Order,Order);

    return 0;
}