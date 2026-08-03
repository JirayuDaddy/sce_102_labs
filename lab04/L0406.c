#include <stdio.h>

int main() {
    double width, length;
    int heirs;
    
    printf("Baan Sai Thong\n\n");

    printf("Enter land width: ");
    scanf("%lf", &width);

    printf("Enter land length: ");
    scanf("%lf", &length);

    printf("Enter number of family members: ");
    scanf("%d", &heirs);

    printf("\n");
    if (width <= 0 || length <= 0 || heirs <= 0) {
        printf("Error inputs\n");
        return 0; 
    }
    double total_area = width * length;
    double area_per_person = total_area / heirs;
    
    printf("Each member will receive a %.4f sq.m. of land\n", area_per_person);
    
    if (area_per_person < 50) {
        printf("Not optimal for family members.\n");
    }

    return 0;
}