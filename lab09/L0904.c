#include <stdio.h>

int main(void)
{
    int numbers[12] = {4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
    int *number_ptr = numbers;
    int i;

    printf("original :\n::");
    for (i = 0; i < 12; i++) {
        printf(" %d", *(number_ptr + i));
    }
    printf("\n");

    printf("multiplied :\n::");
    for (i = 0; i < 12; i++) {
        printf(" %d", *(number_ptr + i) * 24);
    }
    printf("\n");

    return 0;
}
