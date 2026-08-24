#include <stdio.h>
#include <stdlib.h>

int main(){
    float width=0,length=0,member=0,divided=0;
    printf("Baan Sai Thong");
    printf("\nEnter land width: ");
    scanf("%f",&width);
    printf("Enter land length: ");
    scanf("%f",&length);
    printf("Enter number of family members: ");
    scanf("%f",&member);
    if(width&&length&&member>0){
        divided = (width*length)/member;
        printf("\nEach member will recive a %.4f aq.m. of land",divided);
        if(divided<50){
            printf("\nNot optimal for family members");
        }
    }
    else{
        printf("\nError inputs");
    }
    return 0;
}