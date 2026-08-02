#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number,width,length,member;
    float ans;
    printf("Baan Sai Thong\n");
    printf("Enter land width: ");
    scanf("%d",&width);
    printf("Enter land length: ");
    scanf("%d",&length);
    printf("Enter number of family members: ");
    scanf("%d",&member);
    
    if(width<=0||length<=0||member<=0)
    {
        printf("Eror inputs");
    }
    else if(ans<50)
    {
        ans=(width * length)/member;
        printf("Each member will receive a %.4f sq.m. of land",ans);
        printf("Not optimal for family members.");
    } 
    else
    {
        printf("Each member will receive a %.4f sq.m. of land",ans);
    }
    
    return 0;
}