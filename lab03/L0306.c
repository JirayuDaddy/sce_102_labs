#include <stdio.h>
#include <math.h>

int main() {
    float r, h, area;
    const float pi = 3.1416;

    printf("Enter r: ");
    scanf("%f", &r);
    printf("Enter h:");
    scanf("%f", &h);
    area = pi * pow(r, 2);
    printf("Circle area = %.2f\n", area);
    printf("Sphere volume = %.2f\n", 4/3.0 * pi * pow(r, 3));
    printf("cylinder volume = %.2f\n", pi * pow(r,2) * h);

    return 0;
}