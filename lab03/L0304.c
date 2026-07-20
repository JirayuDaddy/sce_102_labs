#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int x;
    printf("Enter x: ");
    scanf("%d", &x);
    x -= 3/2 ;
    printf("\nx after eq1 = %d", x);
    x *= (3 + 4 - 1) ;
    printf("\nx after eq2 = %d", x);
    x += 12 * 3 ;
    printf("\nx after eq3 = %d", x);
    x *= 14 * (7 * 2 - 4) / 3 ;
    printf("\nx after eq4 = %d", x);
    
    return 0;
}
