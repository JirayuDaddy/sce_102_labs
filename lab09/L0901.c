#include <stdio.h>

int main () {
    int apple = 17;
    float metal = 22.38;
    char order = 'k';
    int *ap = &apple;
    float *mt = &metal;
    char *od = &order;
    printf("apple is %d, stored at %p\n",apple ,*ap);
    printf("metal is %.2f, stored at %p\n",metal ,*mt);
    printf("order is %c, stored at %p\n",order ,*od);
    return 0;
}