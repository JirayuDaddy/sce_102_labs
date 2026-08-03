#include <stdio.h>
#include <stdlib.h>

int main(){
    float width,length,area;
    int n;
    do{
    printf("Enter width: ");
    scanf("%f",&width);
    printf("Enter length:: ");
    scanf("%f",&length);
    printf("Enter number of areas (n): ");
    scanf("%d",&n);
    if(wid<=0||length<=0||n<=0){
        printf("Error input\n\n");
    }
    
    }while(wid<=0||length<=0||n<=0);
        if(width>length){
            float s=lenght;
            lenght=width;
            width=s;
        }
        area=(wid*len)/n;
        printf("\nWidth :: %.2f\n", width);
        printf("Length :: %.2f\n", length);
        printf("Area for each n :: %.2f\n", area);
        return 0;
    }