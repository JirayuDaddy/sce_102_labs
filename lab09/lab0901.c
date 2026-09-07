#include <stdio.h>
#include <stdlib.h>
int main() {
    int apple = 17;
    float meter = 22.38;
    char order = 'k';
     
    int*ptr_apple = &apple;
    float*ptr_meter = &meter;
    char*ptr_order = &order;

    printf("apple is 17, stored at %p\n", ptr_apple);
    printf("meter is 22.38, stored at %p\n", ptr_meter);
    printf("order is k, stored at %p\n", ptr_order);

    return 0;
}