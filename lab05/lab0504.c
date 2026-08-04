#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    float wid, len, area;
    int n;
    do{
        printf("Enter width: ");
        scanf("%f", &wid);
        printf("Enter length: ");
        scanf("%f", &len);
        printf("Enter number of areas: ");
        scanf("%d", &n);
        if(wid <= 0 || len <= 0 || n <= 0){
            printf("Error input\n\n");
        }
    }while(wid <= 0 || len <= 0 || n <= 0);
    if(wid>len){
        float s=len;
        len=wid;
        wid=s;
    }
    area=(wid*len)/n;
    printf("Width:: %.2f\n",wid);
    printf("Length:: %.2f\n",len);
    printf("Area of each n:: %.2f\n",area);
    return 0;
}