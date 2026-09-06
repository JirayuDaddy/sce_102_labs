#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x = 0, s;
    int num[50];
    int temp;

    while (x <= 50)
    {
        printf("Enter number #%d : ", x + 1);
        scanf("%d", &s);

        if (s <= 0)
        {
            break;
        }
        num[x] = s;
        x++;
    }

    printf("\n");

    printf("Enter ::: ");
    for (int i = 0; i < x; i++)
    {
        printf("%d ", num[i]);
    }
    printf("\n\n");

    for (int i = 0; i < x - 1; i++)
    {
        for (int j = 0; j < x - i - 1; j++)
        {
            if (num[j] > num[j + 1])
            {
                temp = num[j];
                num[j] = num[j + 1];
                num[j + 1] = temp;
            }
        }
    }

    printf("Sorted ::: ");
    for (int i = 0; i < x; i++)
    {
        printf("%d ", num[i]);
    }
    printf("\n");

    return 0;
}