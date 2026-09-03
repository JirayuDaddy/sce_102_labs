#include <stdio.h>

int main(void) {
    int x[7] = {1, 4, 7, 11, 16};
    float y[] = {13.2f, 1.4f, 3.8f, 2.75f};
    char z[25] = {'E', 'r', 'i', 'c', 's', 'o', 'n'};

    printf("%d %.2f %c\n", x[2], y[0], z[3]);

    return 0;
}