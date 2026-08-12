#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
    int x1;



    printf("Enter x:  ");
    scanf("%d", &x1);
    
    printf("x After eq1 = %d\n", x1 - 3/2);
    printf("x After eq2 = %d\n", 3*x1 + 4*x1 - x1);
    printf("x After eq3 = %d\n", 12*3 + x1);
    printf("x After eq4 = %d\n", 14 *(7*2-4)/3*x1);    
    return 0;
}