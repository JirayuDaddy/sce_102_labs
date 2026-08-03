#include <stdio.h>
int main() {
    float width, length;
    int n;
    while (1) {
        printf("Enter width: ");
        scanf("%f", &width);
        printf("Enter length: ");
        scanf("%f", &length);
        printf("Enter number of areas (n): ");
        scanf("%d", &n);

        if (width > 0 && length > 0 && n > 0) {
            break;
        }
        printf("Error input\n");
    }
    if (width > length) {
        float temp = width;
        width = length;
        length = temp;
    }
    float area = (width * length) / n;

    printf("Width :: %.2f\n", width);
    printf("Length :: %.2f\n", length);
    printf("Area for each n :: %.2f\n", area);

    return 0;
}