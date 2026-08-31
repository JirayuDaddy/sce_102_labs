#include <stdio.h>

int main() {
    
    int x[7] = {1, 4, 7, 11, 16};
    float y[4] = {13.2, 1.4, 3.8, 2.75};
    char z[25] = {'E', 'r', 'i', 'c', 's', 'o', 'n'};

    printf("x[2] = %d\n", x[2]);
    printf("y[0] = %.2f\n", y[0]);
    printf("z[3] = %c\n", z[3]);

    return 0;
}