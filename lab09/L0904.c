#include <stdio.h>

int main() {
    int arr[12] = {4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
    int *ptr = arr;

    printf("original ::: ");
    for (int i = 0; i < 12; i++) {
        printf("%d ", *(ptr + i));
    }
    printf("\n");

    printf("multiplied ::: ");
    for (int i = 0; i < 12; i++) {
        printf("%d ", *(ptr + i) * 24);
    }
    printf("\n");

    return 0;
}
