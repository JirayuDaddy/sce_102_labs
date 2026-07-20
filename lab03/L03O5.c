#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int n, n_orig, x, y, z;
    
    printf("Enter n: ");
    scanf("%d", &n);
    
    n_orig = n;
    
    n = n_orig;
    x = 3 + 4 * ++n / 2 - 18;
    
    n = n_orig;
    y = (3 + 4) * n++ / (18 * 2);
    
    n = n_orig;
    z = 15 / 2 + 3 - (14 * --n);
    
    printf("Result x = %d\n", x);
    printf("Result y = %d\n", y);
    printf("Result z = %d\n", z);
    
    return 0;
}