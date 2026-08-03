#include <stdio.h>

int main() {
    float width, length;
    int n;

    // วนลูปรับค่าจนกว่าข้อมูลทั้ง 3 ค่าจะถูกต้อง (มากกว่า 0)
    while (1) {
        printf("Enter width: ");
        scanf("%f", &width);
        printf("Enter length: ");
        scanf("%f", &length);
        printf("Enter number of areas (n): ");
        scanf("%d", &n);

        if (width > 0 && length > 0 && n > 0) {
            break; // ค่าถูกต้อง ออกจากลูปการรับค่า
        }
        printf("Error input\n\n");
    }

    // สลับค่าหากความกว้างมากกว่าความยาว
    if (width > length) {
        float temp = width;
        width = length;
        length = temp;
    }

    float area_each = (width * length) / n;

    printf("\nWidth :: %.2f\n", width);
    printf("Length :: %.2f\n", length);
    printf("Area for each n :: %.2f\n", area_each);

    return 0;
}