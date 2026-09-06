#include <stdio.h>

int main()
{
    int number[12] = {4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
    int *pointer;

    printf("original ::: ");
    pointer = number;

    for (int i = 0; i < 12; i++)
    {
        printf("%d ", *pointer);
        pointer++;
    }

    printf("\nmultiplied ::: ");
    pointer = number;

    for (int i = 0; i < 12; i++)
    {
        printf("%d ", (*pointer) * 24);
        pointer++;
    }
    return 0;
}