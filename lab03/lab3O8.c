#include <stdio.h>
#include <stdlib.h>
int main() {
    #define PI 3.1416 
    float r, area;
    printf("Enter r: ");
    scanf("%f", &r);
    area = PI * r * r;
    printf("Circle area = %.2f\n", area);
    while (area > 100.0) {
        printf("Big circle 1\n");
        break;
    }
    while (area <= 100.0) {
        printf("Big circle 0\n");
        break;
    }
    return 0;
}