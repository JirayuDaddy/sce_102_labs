#include <stdio.h>

int main(void)
{
    int numbers[12] = {4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
    int *ptr;
    int i;

    printf("original   :::");
    ptr = numbers;
    for (i = 0; i < 12; i++)
    {
        printf(" %d", *ptr);
        ptr++;
    }
    printf("\n");

    printf("multiplied :::");
    ptr = numbers;
    for (i = 0; i < 12; i++)
    {
        printf(" %d", *ptr * 24);
        ptr++;
    }
    printf("\n");

    return 0;
}