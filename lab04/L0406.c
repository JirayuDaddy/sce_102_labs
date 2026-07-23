#include <stdio.h>
#include <stdlib.h>

int main()
{
    int width, length, member;
    float total;
    printf("Baan Sai Thong\n");

    printf("\nEnter land width: ");
    scanf("%d", &width);
    printf("Enter land length: ");
    scanf("%d", &length);
    printf("Enter number of family members: ");
    scanf("%d", &member);

    if (width && length && member > 0)
    {
        total = (width * length) / member;
        printf("\nEach member will receive a %.4f sq.m. of land", total);
        if (total < 50)
        {
            printf("\nNot optimal for family members.");
        }
    }
    else
    {
        printf("\nError inputs");
    }
    return 0;
}
