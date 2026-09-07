#include <stdio.h>


int main()
{
    int melon = 21;
    int banana = 14;

    int *ptr1;
    int *ptr2;

    ptr1 = &melon;

    ptr2 = ptr1;

    printf("step1\n");
    printf("pointer1 has %d in its stored address\n",*ptr1);
    printf("pointer2 has %d in its stored address\n",*ptr2);

    *ptr1 = 77;
    printf("step 2\n");
    printf("pointer1 has %d in its stored address\n", *ptr1);
    printf("pointer2 has %d in its stored address\n", *ptr2);

    ptr2 = &banana;
    printf("step 3\n");
    printf("pointer1 has %d in its stored address\n", *ptr1);
    printf("pointer2 has %d in its stored address\n", *ptr2);

    *ptr2 = 21;
    printf("step 4\n");
    printf("pointer1 has %d in its stored address\n", *ptr1);
    printf("pointer2 has %d in its stored address\n", *ptr2);


    return 0;


}