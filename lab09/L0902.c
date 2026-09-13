#include <stdio.h>
<<<<<<< HEAD
int main()
{
   int melon = 21;
   int banana = 14;
   int *pointer1;
   int *pointer2;
   pointer1 = &melon;
   pointer2 = pointer1;
   printf("step 1\n");
   printf("pointer1 has %d in its stored address\n", *pointer1);
   printf("pointer2 has %d in its stored address\n", *pointer2);
   *pointer1 = 77;
   printf("\nstep 2\n");
   printf("pointer1 has %d in its stored address\n", *pointer1);
   printf("pointer2 has %d in its stored address\n", *pointer2);
   pointer2 = &banana;
   printf("\nstep 3\n");
   printf("pointer1 has %d in its stored address\n", *pointer1);
   printf("pointer2 has %d in its stored address\n", *pointer2);
   *pointer2 = 21;
   printf("\nstep 4\n");
   printf("pointer1 has %d in its stored address\n", *pointer1);
   printf("pointer2 has %d in its stored address\n", *pointer2);
   return 0;
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
>>>>>>> e96c5446dfea625192a6a2371622332869bb1cc4
}