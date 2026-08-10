#include <stdio.h>
#include <stdlib.h> 
#include <math.h>

int main() {
    
    int y ;
    float eq_1,eq_2 ;

    printf("Enter the number for y :");
    scanf("%d",&y);

    printf("\nResults");

    eq_1 = sqrt(pow(y,2)+45) ;
    eq_2 = pow(y,2)+(3*y)+1 ;

    printf("\nx from eq.1 = %.2f ",eq_1);
    printf("\nx from eq.2 = %.2f ",eq_2);

    return 0 ;
}