#include <stdio.h>

int main() {
    float width, length, areaPerSection;
    int n;

    while (1) {
        printf("Enter width: ");
        scanf("%f", &width);
        printf("Enter length: ");
        scanf("%f", &length);
        printf("Enter number of areas (n): ");
        scanf("%d", &n);

        if (width <= 0 || length <= 0 || n <= 0) {
            printf("Error input\n");
        } else {
            break; 
        }
    }

    
    if (width > length) {
        float temp = width;
        width = length;
        length = temp;
    }

    areaPerSection = (width * length) / n;

    printf("\nWidth :: %.2f\n", width);
    printf("Length :: %.2f\n", length);
    printf("Area for each n :: %.2f\n", areaPerSection);

    return 0;
}
