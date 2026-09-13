#include <stdio.h>

int main()
{
    int numbers[12] = {4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
    int *p;
    int i;

    printf("original ::: ");
    for (p = numbers, i = 0; i < 12; p++, i++)
    {
        printf("%d ", *p);
    }
    printf("\n");

    printf("multiplied ::: ");
    for (p = numbers, i = 0; i < 12; p++, i++)
    {
        printf("%d ", *p * 24);
    }
    printf("\n");

    return 0;
}
