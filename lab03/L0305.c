#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int n, x, y, z;
    printf("Enter n: ");
    scanf("%d", &n);
    x = 3 + 4 * ++n / 2 - 18;
    printf("\nResult x = %d", x);
    y = (3 + 4) * n++ / (18 * 2);
    printf("\nResult y = %d", y);
    z = 15 / 2 + 3 - (14 * --n);
    printf("\nResult z = %d", z);

    return 0;
}