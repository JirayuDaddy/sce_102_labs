#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    printf("Enter Number x: ");
    scanf("%d", &num);

    if (num < 0)
    {
        printf("Minus Number");
    }
    else if (num > 0)
    {
        printf("Plus Number");
    }
    else
    {
        printf("It's \"Zero\"");
    }
    return 0;
}