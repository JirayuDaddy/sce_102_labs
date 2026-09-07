#include <stdio.h>

int main() {
    int enea1[12] = {4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
    int *ene2 = enea1;

    printf("original ::: ");
    for (int ene3 = 0; ene3 < 12; ene3++) {
        printf("%d ", *(ene2 + ene3));
    }
    printf("\n");

    printf("multiplied ::: ");
    for (int ene3 = 0; ene3 < 12; ene3++) {
        printf("%d ", *(ene2 + ene3) * 24);
    }
    printf("\n");

    return 0;
}