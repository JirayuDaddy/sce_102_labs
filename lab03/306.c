#include <stdio.h>

int main() {
    
    const double PI = 3.1416;
    double r, h;

    printf("Enter r: ");
    scanf("%lf", &r);
    printf("Enter h: ");
    scanf("%lf", &h);

    double circle_area = PI * r * r;
    double sphere_volume = (4.0 / 3.0) * PI * r * r * r; 
    double cylinder_volume = PI * r * r * h;

    printf("\nCircle area = %.2f\n", circle_area);
    printf("Sphere volume = %.2f\n", sphere_volume);
    printf("Cylinder volume = %.2f\n", cylinder_volume);

    return 0;
}