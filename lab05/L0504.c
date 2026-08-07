#include <stdio.h>
#include <stdlib.h>

int main (){

    float width,length,area_each,width2;
    int area_num;
 
    do
    {
        printf("Enter width: ");
        scanf("%f", &width);
        printf("Enter length: ");
        scanf("%f", &length);
        printf("Enter number of areas (n): ");
        scanf("%d", &area_num);
    
        if (area_num <= 0 || width <= 0 || length <= 0)
        {
            printf("Error input\n\n");
        }
        if (width > length)
        {
            width2 = width;
            width = length;
            length = width2;
        }    
    } 
    while (area_num <= 0 || width <= 0  || length <= 0);
         
    printf("\nWidth :: %.2f", width);
    printf("\nLength :: %.2f\n", length);
    area_each = (width * length) / area_num;
    printf("Area for each n :: %.2f\n",area_each);

    return 0;
}