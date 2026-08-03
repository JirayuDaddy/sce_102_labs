#include <stdio.h>

int main(void) {
    double width, length;
    int members;

    printf("Baan Sai Thong\n");

    printf("Enter land width: ");
    scanf("%lf", &width);
    printf("Enter land length: ");
    scanf("%lf", &length);
    printf("Enter number of family members: ");
    scanf("%d", &members);

    if (width <= 0 || length <= 0 || members <= 0) {
        printf("Error inputs\n");
        return 0;
    }

    double area = width * length;
    double eachShare = area / members;

    printf("Each member will receive a %.4f sq.m. of land\n", eachShare);

    if (eachShare < 50) {
        printf("Not optimal for family members.\n");
    }

    return 0;
}
