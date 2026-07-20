#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
    int n1;



    printf("Enter n:  ");
    scanf("%d", &n1);
    
    printf("Result x = %d\n", 3 + 4 * n1/2 - 18);
    printf("Result y = %d\n", (3 + 4) * n1/(18 - 2));
    printf("Result z = %d\n", 15/2 + 3 -(14 * n1));
    return 0;
}