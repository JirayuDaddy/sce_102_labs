#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int width, length, members;
    float family;
    printf("Baan Sai Thong\n");
    printf("\nEnter land width: ");
    scanf("%d", &width);
    printf("Enter land length: ");
    scanf("%d", &length);
    printf("Enter number of family members: ");
    scanf("%d", &members);
    family = (float)(width * length) / members;
    if(family <= 0){
        printf("Error inputs");
    }
    else if (family <50){
        printf("\nEach member will receive a %.4f sq.m. of land",family);
        printf("\nNot optimal for family members.");
    }
    else {
        printf("\nEach member will receive a %.4f sq.m. of land",family);
    }
    return 0;
}
