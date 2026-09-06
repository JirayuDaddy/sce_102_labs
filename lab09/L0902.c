#include <stdio.h>
#include <stdlib.h>

int main() {

    int melon = 21;
    int banana = 14;

    int *pointer1 = &melon ; 
    int *pointer2 = &melon ;
    printf("step 1");
    printf("\npointer1 has %d in its stored address",*pointer1);
    printf("\npointer2 has %d in its stored address",*pointer2);

    printf("\n");

    *pointer1 = 77 ;
    printf("\nstep 2");
    printf("\npointer1 has %d in its stored address",*pointer1);
    printf("\npointer2 has %d in its stored address",*pointer2);

    printf("\n");

    pointer2 = &banana ; 
    printf("\nstep 3");
    printf("\npointer1 has %d in its stored address",*pointer1);
    printf("\npointer2 has %d in its stored address",*pointer2);

    printf("\n");

    *pointer2 = 21 ;
    printf("\nstep 3");
    printf("\npointer1 has %d in its stored address",*pointer1);
    printf("\npointer2 has %d in its stored address",*pointer2);

    return 0 ;

}
    