#include <stdio.h>

int main()
{
    int number;

    do
    {
        printf("Enter number: ");
        scanf("%d", &number);
    }
    while (number >= 0);

    printf("Data receiving ended\n");

    return 0;
}