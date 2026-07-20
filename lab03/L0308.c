#include <stdio.h>
#include <math.h> )

#define PI 3.1416 

int main() {
    float r, area;

    printf("Enter r: ");
    scanf("%f", &r);

    area = PI * pow(r, 2);

  
    printf("\nCircle area = %.2f\n", area);

   
    printf("Big circle %d\n", area >= 100);

    return 0;
}