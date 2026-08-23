#include <stdio.h>
#include <stdlib.h>

int main() {
    float width, length, area, swap, total;
    printf("Enter width: ");
    scanf("%f", &width);
    printf("Enter length: ");
    scanf("%f", &length);
    printf("Enter number of areas (n): ");
    scanf("%f", &area);
    while(width <= 0 || length <= 0 || area <= 0)
    {
        printf("Error input\n");
        printf("\nEnter width: ");
        scanf("%f", &width);
        printf("Enter length: ");
        scanf("%f", &length);
        printf("Enter number of areas (n): ");
        scanf("%f", &area);
        if(width > 0 || length > 0 || area > 0)
        {
            break;
        }
    }

    if (width > length)
    {
        swap = width;
        width = length;
        length = swap;
    }
    printf("\nWidth :: %.2f", width);
    printf("\nLength :: %.2f", length);
    total = (width * length) / area;
    printf("\nArea for each n :: %.2f", total);
    return 0;
}