#include <stdio.h>

int main ()
{
    int melon = 21;
    int banana = 14;

    int *ptr_one , *ptr_two ;

    ptr_one = &melon;
    ptr_two = ptr_one;
    
    
    printf("step 1\n");
    printf("pointer 1 has %d in its stored address\n", *ptr_one);
    printf("pointer 2 has %d in its stored address\n\n", *ptr_two);
    
    melon = 77;
    ptr_one = &melon;
    ptr_two = ptr_one;

    printf("step 2\n");
    printf("pointer 1 has %d in its stored address\n", *ptr_one);
    printf("pointer 2 has %d in its stored address\n\n", *ptr_two);

    ptr_two = &banana;

    printf("step 3\n");
    printf("pointer 1 has %d in its stored address\n", *ptr_one);
    printf("pointer 2 has %d in its stored address\n\n", *ptr_two);

    *ptr_two = 21;

    printf("step 4\n");
    printf("pointer 1 has %d in its stored address\n", *ptr_one);
    printf("pointer 2 has %d in its stored address", *ptr_two);
    return 0;
}