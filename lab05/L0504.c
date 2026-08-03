#include <stdio.h>
#include <stdlib.h>

int main()
{
    float width, length, temp;
    int n;

    do
    {
        printf("Enter width: ");
        scanf("%f", &width);
        printf("Enter length: ");
        scanf("%f", &length);
        printf("Enter number of areas (n): ");
        scanf("%d", &n);

        if (width <= 0 || length <= 0 || n <= 0)
        {
            printf("Error input\n\n");
        }
    } while (width <= 0 || length <= 0 || n <= 0);

    if (width > length)
    {
        temp = width;
        width = length;
        length = temp;
    }

    printf("\n");
    printf("Width :: %.2f\n", width);
    printf("Length :: %.2f\n", length);
    printf("Area for each n :: %.2f\n", width * length / n);

    return 0;
}
