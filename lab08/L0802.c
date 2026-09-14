#include <stdio.h>

#define N 10

int main(void) {
    int age[N];
    int i;

    for (i = 0; i < N; i++) {
        int value;
        int valid = 0;

        while (!valid) {
            printf("Enter age for person #%d: ", i + 1);
            scanf("%d", &value);

            if (value < 0) {
                printf("ERROR!\n");
            } else {
                valid = 1;
            }
        }

        age[i] = value;
    }

    printf("\n--------\n");
    for (i = N - 1; i >= 0; i--) {
        printf("Person #%d age %d\n", i + 1, age[i]);
    }

    return 0;
}