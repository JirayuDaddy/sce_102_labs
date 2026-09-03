#include <stdio.h>

int main(void) {
    int apple = 17;
    float meter = 22.38f;
    char order = 'k';

    int *applePtr = &apple;
    float *meterPtr = &meter;
    char *orderPtr = &order;

    printf("apple is %d, stored at %p\n", *applePtr, (void *)applePtr);
    printf("meter is %.2f, stored at %p\n", *meterPtr, (void *)meterPtr);
    printf("order is %c, stored at %p\n", *orderPtr, (void *)orderPtr);

    return 0;
}