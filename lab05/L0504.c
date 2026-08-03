#include <stdio.h>
#include <math.h>

int main(void) {
    double width, length;
    int n;

    do {
        printf("Enter width: ");
        scanf("%lf", &width);
        printf("Enter length: ");
        scanf("%lf", &length);
        printf("Enter number of areas (n): ");
        scanf("%d", &n);

        if (width <= 0 || length <= 0 || n <= 0) {
            printf("Error input\n");
        }
    } while (width <= 0 || length <= 0 || n <= 0);

    if (width > length) {
        double temp = width;
        width = length;
        length = temp;
    }

    double areaEach = (width * length) / n;

    /* round() rounds halves away from zero, matching normal rounding rules
       (printf's %.2f alone uses round-half-to-even, e.g. 33.125 -> 33.12) */
    width = round(width * 100) / 100;
    length = round(length * 100) / 100;
    areaEach = round(areaEach * 100) / 100;

    printf("Width :: %.2f\n", width);
    printf("Length :: %.2f\n", length);
    printf("Area for each n :: %.2f\n", areaEach);

    return 0;
}
