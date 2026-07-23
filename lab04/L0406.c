#include <stdio.h>

int main()
{
    int width=0;
    int length=0;
    int member=0;
    float area_each;
    printf("Baan Sai Thong");
    printf("Enter land width : ");
    scanf("%d",&width);
    printf("Enter land length : ");
    scanf("%d",&length);
    printf("Enter number of family member : ");
    scanf("%d",&member);

    area_each = (width * length)/member;
    if (area_each <=0)
    {
        printf("Error inputs");
    }
    else if (area_each < 50)
    {
        printf("Each member will receive a %.4f sq.m. of land\n",area_each);
        printf("Not optimal for family members.");
    }
    else if (area_each >=50)
    {
        printf("Each member will receive a %.4f sq.m. of land",area_each);
    }
    return 0;
}