#include <stdio.h>

int main() {
    int melon = 21;
    int banana = 14;

   
    int *enea1 = &melon;
    int *ene2 = enea1; 

    printf("step 1\n");
    printf("pointer1 has %d in its stored address\n", *enea1);
    printf("pointer2 has %d in its stored address\n\n", *ene2);

    
    *enea1 = 77;
    printf("step 2\n");
    printf("pointer1 has %d in its stored address\n", *enea1);
    printf("pointer2 has %d in its stored address\n\n", *ene2);

    ene2 = &banana;
    printf("step 3\n");
    printf("pointer1 has %d in its stored address\n", *enea1);
    printf("pointer2 has %d in its stored address\n\n", *ene2);


    *ene2 = 21;
    printf("step 4\n");
    printf("pointer1 has %d in its stored address\n", *enea1);
    printf("pointer2 has %d in its stored address\n", *ene2);

    return 0;
}