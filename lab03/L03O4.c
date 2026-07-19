#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

    int x,ep1,ep2,ep3,ep4;

    printf("Enter x: ");
    scanf("%d",&x);

    ep1 = x - 3/2; 
    ep2 = (3*x)+(4*x)-x;
    ep3 = 12 * 3 + x ;
    ep4 = 14 * (7 * 2-4) / 3 * x ;

    printf("x after eq1 = %d\n",ep1);
    printf("x after eq2 = %d\n",ep2);
    printf("x after eq3 = %d\n",ep3);
    printf("x after eq4 = %d\n",ep4);

    return 0 ;
}