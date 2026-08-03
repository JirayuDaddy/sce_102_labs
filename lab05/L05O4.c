#include <stdio.h>
#include <stdlib.h>

int main()
{
    float w,l,a;
    int n;
    do{
        printf("Enter width: ");
        scanf("%f", &w);
        printf("Enter length: ");
        scanf("%f", &l);
        printf("Enter number of areas (n): ");
        scanf("%d", &n);
        if(w<=0||l<=0||a<=0){
            printf("Error input\n\n");
        }
    }while(w<=0||l<=0||n<=0);
    if(w>l){
        float s=l;
        l=w;
        w=s;
    }
    a=(w*l);
    printf("\nWidth :: %.2f\n",w);
    printf("Lenght :: %.2f\n",l);
    printf("Area for each n :: %.2f\n",a);
    return 0;
}