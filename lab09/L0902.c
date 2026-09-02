#include <stdio.h>

int main()
{
    int melon = 21;
    int banana = 14;

    int *p1 = &melon;
    int *p2 = p1;

    printf("step 1\n");
    printf("pointer1 has %d in its stored address\n", *p1);
    printf("pointer2 has %d in its stored address\n", *p2);

    printf("\nstep 2\n");
    *p1 = 77;
    printf("pointer1 has %d in its stored address\n", *p1);
    printf("pointer2 has %d in its stored address\n", *p2);

    printf("\nstep 3\n");
    p2 = &banana;
    printf("pointer1 has %d in its stored address\n", *p1);
    printf("pointer2 has %d in its stored address\n", *p2);

    printf("\nstep 4\n");
    *p2 = 21;
    printf("pointer1 has %d in its stored address\n", *p1);
    printf("pointer2 has %d in its stored address\n", *p2);

    return 0;
}
