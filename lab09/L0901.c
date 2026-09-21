#include <stdlib.h>
#include <stdio.h>

int main()
{
    int apple = 17;
    float meter = 22.38;
    char order = 'k';
    int *p;
    float *m;
    char *o;
    p = &apple;
    m = &meter;
    o = &order;



    printf("apple is %d, stored at %p\n",apple,p);
    printf("meter is %.2f, stored at %p\n",meter,m);
    printf("order is %c, stored at %p\n",order,o);

    return 0;

}