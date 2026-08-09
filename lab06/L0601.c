#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int y_number = 0;

double eq1(double result_x1, int y_number){

    result_x1 = sqrt( pow(y_number, 2) + 45);
    return result_x1;
}
double eq2(double result_x2, int y_number){

    result_x2 = pow(y_number, 2) + (3 * y_number) + 1;
    return result_x2;
}

int main(){
    printf("Enter the number for y: ");
    scanf("%d", &y_number);

    double result_x1, result_x2;
    result_x1 = eq1(result_x1, y_number);
    result_x2 = eq2(result_x2, y_number);
    printf("\nResults\n");
    printf("x from eq.1 = %.2f\n", result_x1);
    printf("x from eq.2 = %.2f\n", result_x2);
    return 0;
}