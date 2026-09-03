#include <stdio.h>

int main()
{
    int apple = 17;
    float meter = 22.38;
    char order = 'k';
    int *ptr_apple ;
    ptr_apple = &apple;
    float *ptr_meter ;
    ptr_meter = &meter;
    char *ptr_order;
    ptr_order = &order;
    printf("apple is %d, stored at %p\n",apple,ptr_apple);
    printf("meter is %f, stored at %p\n",meter,ptr_meter);
    printf("order is %c, stored at %p\n",order,ptr_order);
    return 0;
}