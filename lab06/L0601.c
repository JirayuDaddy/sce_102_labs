#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float equation1(float num) {
    return sqrt((pow(num, 2) + 45));
}

float equation2(float num) {
    return (pow(num, 2) + 3 * num + 1);
}

int main() {
    float num;

    printf("Enter the number for y: ");
    scanf("%f", &num);

    float x = equation1(num);
    float x2 = equation2(num);

    printf("Results/n");
    printf("from eq. 1: %.2f\n", x);
    printf("from eq. 2: %.2f\n", x2);

    return 0;
}