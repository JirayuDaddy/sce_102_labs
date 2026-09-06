#include <stdio.h>

int main()
{
    int melon = 21;
    int banana = 14;
    int *pointer1, *pointer2;

    pointer1 = &melon;
    pointer2 = pointer1;

    printf("step 1\n");
    printf("pointer1 has %d in its stored address\n", *pointer1);
    printf("pointer2 has %d in its stored address\n\n", *pointer2);

    *pointer1 = 77;
    printf("step 2\n");
    printf("pointer1 has %d in its stored address\n", *pointer1);
    printf("pointer2 has %d in its stored address\n\n", *pointer2);

    pointer2 = &banana;
    printf("step 3\n");
    printf("pointer1 has %d in its stored address\n", *pointer1);
    printf("pointer2 has %d in its stored address\n\n", *pointer2);

    *pointer2 = 21;
    printf("step 4\n");
    printf("pointer1 has %d in its stored address\n", *pointer1);
    printf("pointer2 has %d in its stored address", *pointer2);

    return 0;
}