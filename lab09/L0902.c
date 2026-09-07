#include <stdio.h>

<<<<<<< HEAD
int main(void)
{
    int melon = 21;
    int banana = 14;
    int *pointer1 = &melon;
    int *pointer2 = pointer1;

    printf("step 1\n");
    printf("pointer1 has %d in its stored address\n", *pointer1);
    printf("pointer2 has %d in its stored address\n", *pointer2);

    *pointer1 = 77;
    printf("step 2\n");
    printf("pointer1 has %d in its stored address\n", *pointer1);
    printf("pointer2 has %d in its stored address\n", *pointer2);

    pointer2 = &banana;
    printf("step 3\n");
    printf("pointer1 has %d in its stored address\n", *pointer1);
    printf("pointer2 has %d in its stored address\n", *pointer2);

    *pointer2 = 21;
    printf("step 4\n");
    printf("pointer1 has %d in its stored address\n", *pointer1);
    printf("pointer2 has %d in its stored address\n", *pointer2);

    return 0;
}
=======
int main(){
    int melon = 21;
    int banana = 14;

    int *p1 = &melon;
    int *p2 = p1;

    printf("Step 1\n");
    printf("pointer1 has %d in its stored address\n",*p1);
    printf("pointer2 has %d in its stored address\n",*p2);

    printf("\nStep 2\n");
    p1 = 77;
    printf("pointer1 has %d in its stored address\n",*p1);
    printf("pointer2 has %d in its stored address\n",*p2);

    printf("\nStep 3\n");
    p2 = &banana;
    printf("pointer1 has %d in its stored address\n",*p1);
    printf("pointer2 has %d in its stored address\n",*p2);

    printf("Step 4\n");
    *p2 = 21;
    printf("pointer1 has %d in its stored address\n",*p1);
    printf("pointer2 has %d in its stored address\n",*p2);
    return 0;
}
>>>>>>> ac860e7 (lab09 submission)
