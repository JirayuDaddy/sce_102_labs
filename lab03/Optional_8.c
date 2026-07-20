#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Enter Radius of Circle: ");
    float radius;
    scanf("%f", &radius);

    #define PI 3.14

    float area;
    area = PI * radius * radius;
    printf("Area of Circle: %.2f\n", area);
    while (area < 100)
    {
        printf("Small Circle 0 \n");
        break;
    }

    while (area > 100)
    {
        printf("Big Circle 1 \n");
        break;
    }

    return 0;
}