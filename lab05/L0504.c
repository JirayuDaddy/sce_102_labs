#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number_areas;
    float width,length,area_each,width2;

    do{
        printf("Enter width : ");
        scanf("%f", &width);
        printf("Enter length : ");
        scanf("%f", &length);
        printf("Enter number of areas (n) :: ");
        scanf("%d", &number_areas);

        if(number_areas <= 0 || width <= 0 || length <= 0)
        {
            printf("Eror input\n\n");
        }
        if(width > length)
        {
            width2 = width;
            width = length;
            length = width2;
        }
    }
    while(number_areas <= 0 || width <= 0 || length <= 0);

    printf("\nWidth :: %.2f", width);
    printf("\nLength :: %.2f", length);
    area_each = (width * length) / number_areas;
    printf("\nArea for each n :: %.2f\n",area_each);

    return 0;
}