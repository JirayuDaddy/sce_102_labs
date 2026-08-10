#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.1416


float circlearea(float radius) {
    return PI * radius * radius;
}

float cylindervolume(float radius, float height) {
    return circlearea(radius) * height;
}


int main() {
    float radius, height;
    float area, volume;
    
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    area = circlearea(radius);
    printf("The area of the circle is: %.2f\n", area);

    printf("Enter the height of the cylinder: ");
    scanf("%f", &height);

    volume = cylindervolume(radius, height);
    printf("The volume of the cylinder is: %.2f\n", volume);

    return 0;
}