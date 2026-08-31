#include <stdio.h>

int main()
{
    int age[10];
    int i;

    for (i = 0; i < 10; i++)
    {
        printf("Enter age for person #%d: ", i + 1);
        scanf("%d", &age[i]);

        while (age[i] < 0)
        {
            printf("ERROR!\n");
            printf("Enter age for person #%d: ", i + 1);
            scanf("%d", &age[i]);
        }
    }

    printf("\n--------\n");
    for (i = 9; i >= 0; i--)
    {
        printf("Person #%d age %d\n", i + 1, age[i]);
    }

    return 0;
}