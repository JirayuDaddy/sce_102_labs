#include <stdio.h>
#include <math.h> 

#define PI 3.1416 

int main() {
    float r, h;
    float circle_area, sphere_volume, cylinder_volume;

    printf("Enter r: ");
    scanf("%f", &r);
    
    printf("Enter h: ");
    scanf("%f", &h);

    circle_area = PI * pow(r, 2);
  
    sphere_volume = (4.0 / 3.0) * PI * pow(r, 3);

    cylinder_volume = PI * pow(r, 2) * h;

    printf("\n");
    printf("Circle area = %.2f\n\n", circle_area);
    printf("Sphere volume = %.2f\n\n", sphere_volume);
    printf("Cylinder volume = %.2f\n", cylinder_volume);

    return 0;
}