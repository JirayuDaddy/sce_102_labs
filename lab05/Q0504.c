#include <stdio.h>

int main(void){
    double width, length;
    int number_of_areas;
    do{
        printf("Enter width: ");
        scanf("%lf", &width);
        printf("Enter length: ");
        scanf("%lf", &length);
        printf("Enter number of areas (n): ");
        scanf("%d", &number_of_areas);
        if(width <= 0 || length <= 0 || number_of_areas <= 0){
            printf("Error input\n\n");}
    }while(width <= 0 || length <= 0 || number_of_areas <= 0);
    if(width > length){
        double temporary = width;
        width = length;
        length = temporary;}
    printf("\nWidth :: %.2f\n", width);
    printf("Length :: %.2f\n", length);
    printf("Area for each n :: %.2f\n", width * length / number_of_areas);
    return 0;
}