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
    return 0;
}