#include <stdio.h>

int main(void) {
    printf("List of odd number :: ");
    for (int i = 1; i <= 100; i++) {
        if (i % 2 != 0) {
            printf("%d ", i);
        }
    }
    printf("\n");

    printf("List of even number :: ");
    for (int i = 2; i <= 100; i++) {
        if (i % 2 == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}
