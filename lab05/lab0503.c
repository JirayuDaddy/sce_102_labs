#include <stdio.h>
#include <stdlib.h>
int main() {
    int i;
    printf("List of odd number :: ");
    for (i = 1; i <= 100; i++) {
        if (i % 2 != 0) {
            printf("%d ", i);
        }
    }
    printf("\n\n");
    printf("List of even number :: ");
    for (i = 1; i <= 100; i++) {
        if (i % 2 == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}