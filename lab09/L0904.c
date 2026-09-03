#include <stdio.h>
int main(void) {
    int numbers[12] = {4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
    int *numberPtr = numbers;
    printf("original :::");
    for (int index = 0; index < 12; index++) {
        printf(" %d", *(numberPtr + index));
    }
    printf("\n");
    printf("multiplied :::");
    for (int index = 0; index < 12; index++) {
        printf(" %d", *(numberPtr + index) * 24);
    }
    printf("\n");
    return 0;
}