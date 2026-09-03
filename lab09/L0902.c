        #include <stdio.h>

        int main()
        {
            int melon = 21 , banana = 14 ;
            int *ptr_melon;
            int *ptr_banana;
            printf("step 1 ");
            ptr_banana = &melon;
            ptr_melon = ptr_banana;
            printf("\npointer 1 has %d in its stored address",*ptr_melon);
            printf("\npointer 2 has %d in its stored address",*ptr_banana);
            printf("\nstep 2 ");
            melon = 77;
            printf("\npointer 1 has %d in its stored address",*ptr_melon);
            printf("\npointer 2 has %d in its stored address",*ptr_banana);
            printf("\nstep 3 ");
            ptr_banana = &banana;
            printf("\npointer 1 has %d in its stored address",*ptr_melon);
            printf("\npointer 2 has %d in its stored address",*ptr_banana);
            printf("\nstep 4 ");
            *ptr_banana = 21;
            printf("\npointer 1 has %d in its stored address",*ptr_melon);
            printf("\npointer 2 has %d in its stored address",*ptr_banana);
            return 0;
        }