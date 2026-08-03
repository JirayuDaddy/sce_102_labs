#include <stdio.h>

int main()
{
    int i;
    printf("List of odd numbers:\n");
    for (i = 1; i <= 100; i++)
    {
        if (i % 2 != 0)
        {
            printf("%d ", i);
        }
    }
    printf("\n");
    printf("List of even numbers:\n");
    for (i = 1; i <= 100; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d ", i);
        }
    }
    return 0;
}