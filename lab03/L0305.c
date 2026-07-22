#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){

    int n;

    printf("Enter n: ");
    scanf("%d", &n);


    printf("\nResult x = %d\n",  3 + 4 * ++n / 2 - 18 );   
    printf("Result y = %d\n", (3 + 4) * n++ / (18 * 2));    
    printf("Result z = %d", 15 / 2 + 3 - (14 * --n));


    return 0;
}