#include <stdio.h>
#include <stdlib.h>

int main()
{
    int  width,length,family_members ;
    float x ;

    printf("\nBaan Sai Thong\n");

    printf("Enter land width : ");
    scanf("%d",&width);
    printf("Enter land length : ");
    scanf("%d",&length);
    printf("Enter number of family members : ");
    scanf("%d",&family_members);

    x = (width*length)/family_members ;

    printf("Each member will receive a %.4f sq.m. of land ",x);

    if(x<=0){
        printf("\nError inputs\n");
    }
    else if(x<50) {
        printf("\nNot optimal for family members\n");
    }
    else {
        printf("");
    }
    return 0;
}