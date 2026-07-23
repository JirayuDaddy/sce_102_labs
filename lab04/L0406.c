#include <stdio.h>

int main() {
    double width, length;
    int members;

    printf("Baan Sai Thong\n\n");


    printf("Enter land width: ");
    scanf("%lf", &width);


    printf("Enter land length: ");
    scanf("%lf", &length);


    printf("Enter number of family members: ");
    scanf("%d", &members);


    printf("\n");

    
    if (width <= 0 || length <= 0 || members <= 0) {
        printf("Error inputs\n");
    } else {
       
        double area_per_member = (width * length) / members;
        

        printf("Each member will receive a %.4f sq.m. of land\n", area_per_member);
        

        if (area_per_member < 50) {
        
            printf("Not optimal for family members.\n");
       
        }
    }

    return 0;
}