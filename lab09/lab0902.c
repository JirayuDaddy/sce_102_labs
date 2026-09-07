#include <stdio.h>
#include <stdlib.h>
int main() {
    int melon = 21, banana = 14;
    int*ptr_1 = &melon;
    int*ptr_2 = &melon;
    printf("Step 1 \n pointer 1 has %d in its stored address \n pointer 2 has %d in its stored address\n", *ptr_1, *ptr_2);
    melon = 77;
    printf("Step 2 \n pointer 1 has %d in its stored address \n pointer 2 has %d in its stored address\n", *ptr_1, *ptr_2);
    ptr_2 = &banana;    
    printf("Step 3 \n pointer 1 has %d in its stored address \n pointer 2 has %d in its stored address\n", *ptr_1, *ptr_2);
    banana = 21;
    printf("Step 4 \n pointer 1 has %d in its stored address \n pointer 2 has %d in its stored address\n", *ptr_1, *ptr_2);
    return 0;
}