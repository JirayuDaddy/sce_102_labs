#include <stdio.h>

int main() {
    printf("List of odd number :: ");
    for (int i = 1; i <= 100; i += 2) {
        printf("%d ", i);
    }
    printf("\n\n");

    printf("List of even number :: ");
    for (int i = 2; i <= 100; i += 2) {
        printf("%d ", i);
    }
    printf("\n");

    return 0;
}