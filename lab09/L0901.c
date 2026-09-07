#include <stdio.h>

int main() {
    
    int apple = 17;
    float meter = 22.38;
    char order = 'k';

    int *ptr_apple = &apple;
    float *ptr_meter = &meter;
    char *ptr_order = &order;

    
    printf("apple is %d, stored at %p\n", *ptr_apple, (void *)ptr_apple);
    printf("meter is %.2f, stored at %p\n", *ptr_meter, (void *)ptr_meter);
    printf("order is %c, stored at %p\n", *ptr_order, (void *)ptr_order);

    return 0;
}