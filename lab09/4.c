#include <stdio.h>

int main() {
    int number[12] = {
        4, 5, 6, 7, 8, 9,
        10, 11, 12, 13, 14, 15
    };

    int *ptr = number;

    printf("original ::: ");

    for (int i = 0; i < 12; i++) {
        printf("%d", *(ptr + i));

        if (i < 11) {
            printf(" ");
        }
    }

    printf("\n");

    printf("multiplied ::: ");

    for (int i = 0; i < 12; i++) {
        printf("%d", *(ptr + i) * 24);

        if (i < 11) {
            printf(" ");
        }
    }

    printf("\n");

    return 0;
}