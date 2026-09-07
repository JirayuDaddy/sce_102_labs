#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[12] = {4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
    int *ptr;
    int i;

    ptr = arr;
    printf("original ::: ");
    for (i = 0; i < 12; i++)
    {
        printf("%d ", *ptr);
        ptr++;
    }
    ptr = arr;
    printf("\nmultiplied ::: ");
    for (i = 0; i < 12; i++)
    {
        printf("%d ", (*ptr) * 24);
        ptr++;
    }
    printf("\n");

    return 0;
}