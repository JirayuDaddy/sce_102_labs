#include <stdio.h>
#include <stdlib.h>
int main()
{
    int width, length, family_members;
    float land_per_member;

    printf("Baan Sai Thong\n\n");

    printf("Enter land width: ");
    scanf("%d", &width);
    printf("Enter land length: ");
    scanf("%d", &length);
    printf("Enter number of family members: ");
    scanf("%d", &family_members);
    printf("\n");

    if (width <= 0 || length <= 0 || family_members <= 0)
    {
        printf("Error inputs\n");
        return 0;
    }

    land_per_member = (float)(width * length) / family_members;
    printf("Each member will receive a %.4f sq.m. of land\n", land_per_member);

    if (land_per_member < 50)
    {
        printf("Not optimal for family members.\n");
    }

    return 0;
}
