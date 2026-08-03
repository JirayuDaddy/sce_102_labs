#include <stdio.h>
#include <stdlib.h>
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num < 0)
    {
        printf("Negative number.\n");
    }
    else if (num == 0)
    {
        printf("Zero.\n");
    }
    else
    {
        printf("Positive number.\n");
        if (num > 1000)
        {
            printf("Very Large Number.\n");
        }
        else if (num >= 100)
        {
            printf("Large Number.\n");
        }
        else
        {
            printf("Nominal Range.\n");
        }
    }

    return 0;
}