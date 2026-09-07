#include <stdio.h>

int main() {
    int apple = 17;
    float meter = 22.38;
    char order = 'k';

    int *enea1 = &apple;
    float *ene2 = &meter;
    char *ene3 = &order;

    printf("apple is %d, stored at %p\n",*enea1, (void*)enea1);
    printf("meter is %.2f, stored at %p\n",*ene2, (void*)ene2);
    printf("order is %c, stored at %p\n",*ene3, (void*)ene3);

    return 0;
}