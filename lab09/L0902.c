#include <stdio.h>
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
}