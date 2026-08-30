#include <stdio.h>

int x[7] = {1, 4, 7, 11, 16};
float y[] = {13.2, 1.4, 3.8, 2.75};
char z[25] = {'E', 'r', 'i', 'c', 's', 'o', 'n'};
int main()
{
    printf("%d %.2f %c", x[3 - 1], y[1 - 1], z[4 - 1]);
    return 0;
}