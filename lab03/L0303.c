#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

    int n,x,y,z;

    printf("Enter n: ");
    scanf("%d",&n);

    x = 3 + 4 * n / 2 - 18 ;
    y = (3 + 4) * n / (18 * 2);
    z = 15 / 2 + 3 - (14 * n);

    printf("\nResulf x = %d \n",x);
    printf("Resulf y = %d \n",y);
    printf("Resulf z = %d \n",z);

    return 0 ;
}