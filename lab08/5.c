#include <stdio.h>

int main()
{
    int number[50];
    int count = 0;
    int i, j, temp;

    while (count < 50)
    {
        printf("Enter number #%d: ", count + 1);
        scanf("%d", &number[count]);

        if (number[count] <= 0)
        {
            break;
        }

        count++;
    }

    printf("\nEntered ::: ");

    for (i = 0; i < count; i++)
    {
        printf("%d ", number[i]);
    }

    for (i = 0; i < count - 1; i++)
    {
        for (j = 0; j < count - 1 - i; j++)
        {
            if (number[j] > number[j + 1])
            {
                temp = number[j];
                number[j] = number[j + 1];
                number[j + 1] = temp;
            }
        }
    }

    printf("\n\nSorted ::: ");

    for (i = 0; i < count; i++)
    {
        printf("%d ", number[i]);
    }

    return 0;
}