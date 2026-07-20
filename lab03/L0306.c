#include <stdio.h>

int main()
{
    float radius,height,circle_area,sphere_volume,cylinder_volume;

    printf("Enter r : ");
    scanf("%f",&radius);
    printf("Enter h : ");
    scanf("%f",&height);

    circle_area = 3.1416 *radius*radius;
    sphere_volume = 1.3333 * 3.1416 * radius*radius*radius;
    cylinder_volume = 3.1416 * radius *radius * height;
    
    printf("\nCircle area = %.2f\n",circle_area);
    printf("\nSphere volume = %.2f\n",sphere_volume);
    printf("\nCylinder volume = %.2f\n",cylinder_volume);

    return 0;
}