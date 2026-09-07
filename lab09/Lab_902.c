#include <stdio.h>
#include <stdlib.h>

int main() {

    int melon = 21;
    int banana = 14;
    int*ptr1 = &melon;
    int*ptr2 = &melon;
    printf("\nStep1\npointer1 has %d in its stored address\n", *ptr1);
    printf("pointer2 has %d in its stored address\n", *ptr2);

    melon = 77;
    printf("\nStep2\npointer1 has %d in its stored address\n", *ptr1);
    printf("pointer2 has %d in its stored address\n", *ptr2);

    ptr2 = &banana;
    printf("\nStep3\npointer1 has %d in its stored address\n", *ptr1);
    printf("pointer2 has %d in its stored address\n", *ptr2);

    *ptr2 = 21;
    printf("\nStep4\npointer1 has %d in its stored address\n", *ptr1);
    printf("pointer2 has %d in its stored address\n", *ptr2);

    return 0;
}