#include <stdio.h>
#include <stdlib.h>

int main() {

    int apple = 17;
    int*ptr = &apple;
    printf("apple is %d, stored at %p\n", apple, ptr);

    float meter = 22.38;
    float*ptr2 = &meter;
    printf("meter is %f", meter);
    printf("stored at %p\n", ptr2);

    char order = 'k';
    char*ptr3 = &order;
    printf("order is %c", order);
    printf("stored at %p\n", ptr3);

    
    return 0;

}