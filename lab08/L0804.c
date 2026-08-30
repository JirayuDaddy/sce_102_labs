#include <stdio.h>

int main()
{
    int x[50];
    int i, j, k;
    int count = 0;
    for (i = 0; i < 50; i++)
    {
        printf("Enter number #%d: ", i + 1);
        scanf("%d", &x[i]);
        if (x[i] <= 0)
        {
            break;
        }
        count++;
    }

    printf("\nEntered ::: ");
    for (i = 0; i < count; i++)
    {
        printf("%d ", x[i]);
    }

    for (i = 0; i < count - 1; i++)
    {
        for (j = 0; j < count - i - 1; j++)
        {
            if (x[j] > x[j + 1])
            {
                k = x[j];
                x[j] = x[j + 1];
                x[j + 1] = k;
            }
        }
    }

    printf("\n\nSorted ::: ");
    for (i = 0; i < count; i++)
    {
        printf("%d ", x[i]);
    }
    printf("\n");
    return 0;
}