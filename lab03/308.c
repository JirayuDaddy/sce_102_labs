#include <stdio.h>

int main() {
    int r;
    float area;
    const float pi = 3.1416;

    printf("Enter r: ");
    scanf("%d", &r);

    area = pi * r * r;

    printf("Circle area = %.2f\n", area);

    if (area < 100)
        printf("Big circle 0\n");
    else
        printf("Big circle 1\n");

    return 0;
}