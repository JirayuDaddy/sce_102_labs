#include <stdio.h>
#include <stdlib.h> 

int main() {
    float width, length, area, temp;
    int n;

    printf("Enter width: ");
    scanf("%f", &width);
    printf("Enter length: ");
    scanf("%f", &length);
    printf("Enter number of areas (n): ");
    scanf("%d", &n);

    while (width <= 0 || length <= 0 || n <= 0) {
        printf("Error input\n\n");
        printf("Enter width: ");
        scanf("%f", &width);
        printf("Enter length: ");
        scanf("%f", &length);
        printf("Enter number of areas (n): ");
        scanf("%d", &n);
    }
    if (width > length) {
        temp = width;
        width = length;
        length = temp;
    }

    area = (width * length) / n;

    printf("\nWidth :: %.2f\n", width);
    printf("Length :: %.2f\n", length);
    printf("Area for each n :: %.2f\n", area);

    return 0;
}