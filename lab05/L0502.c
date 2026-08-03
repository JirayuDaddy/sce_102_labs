#include <stdio.h>
#include <stdlib.h>
int main()
{
    int num = 0;

    do
    {
        printf("Enter a number: ");
        scanf("%d", &num);
        if (num < 0)
        {
            printf("Data Receiving ended\n");
        }
    } while (num >= 0);
    return 0;
}