#include <stdio.h>
#include <math.h>

int main() {
    float r, area;
    const float pi = 3.1416;
    int big;

    printf("Enter r: ");
    scanf("%f", &r);

    area = pi * pow(r, 2);


    big = (area >= 100);

    printf("Circle area = %.2f\n", area);
    printf("Big circle %d\n", big);
    return 0;
}