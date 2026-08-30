#include <stdio.h>

int i;
int x[10];
int main()
{
    for (i = 0; i < 10; i++)
        do
        {
            printf("Enter age for person #%d: ", i + 1);
            scanf("%d", &x[i]);
            if (x[i] <= 0)
            {
                printf("ERROR!\n");
            }
        } while (x[i] <= 0);
    printf("\n--------\n");
    for (i = 9; i >= 0; i--)
    {
        printf("Person #%d age %d\n", i + 1, x[i]);
    }
    return 0;
}