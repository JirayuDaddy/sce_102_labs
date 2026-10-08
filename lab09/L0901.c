#include <stdio.h>

int main(){
    int apple = 17;
    float meter = 22.38;
    char order = 'k';

    int *x = &apple;
    float *y = &meter;
    char *z = &order;
    
    printf("apple is %d stored at %p\n",apple,*x);
    printf("meter is %.2f stored at %p\n",meter,*y);
    printf("order is %c stored at %p\n",order,*z);
    return 0;
}