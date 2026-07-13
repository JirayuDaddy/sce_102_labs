#include <stdio.h>
#include <stdlib.h>

int main()
{
    
    int order = 5;
    float price = 55555555;
    char iname = 'D';


    printf("order: %d\n", order);
    printf("order (hex): %x\n", order);
    printf("order (hex-upper): %X\n", order);
    printf("price: %f\n", price);
    printf("iname: %c\n", iname);

    return 0;
}