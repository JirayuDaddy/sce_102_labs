#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    printf("Enter number x: ");
    scanf("%d", &num);

    if (num < 0)
    {
        printf("Minus Number");
    }
    else if (num > 0)
    {
        printf("Plus Number");
        if (num >= 1000)
        {
            printf("\n\"Very Large Number\"");
        }
        else if (num >= 100)
        {
            printf("\n\"Large Number\"");
        }
        else
        {
            printf("\n\"Nominal Range\"");
        }
    }
    else
    {
        printf("It's \"Zero\"");
    }
    return 0;
}