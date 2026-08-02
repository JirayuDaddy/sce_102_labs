#include <stdio.h>
#include <stdlib.h>

int main() {
    int width;
    int length;
    int members;

    printf("Baan Sai Thong\n\n");
    printf("Enter land width: ");
    scanf("%d", &width);
    printf("Enter land length: ");
    scanf("%d", &length);
    printf("Enter number of family members: ");
    scanf("%d", &members);

    if (width > 0 && length > 0 && members > 0) {
        int area = width * length;
        float area_per_person = (float) area / members;    
        printf("\nEach member will receive a %.4f sq.m. of land", area_per_person);
        if (area_per_person < 50) {
            printf("\nNot optimal for family members");
        }
    } else {
        printf("\nError inputs");
    }
    
    return 0;
}
