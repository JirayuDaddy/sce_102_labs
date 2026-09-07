#include <stdio.h>
#include <stdlib.h>

int main() {
    int x[7] = {1,4,7,11,16};
    float y[] = {13.2,1.4,3.8,2.75};
    char z[25] = {'E', 'r', 'i', 'c', 's', 'o', 'n'};
    printf("%d %.2f %c\n",x[3],y[1],z[4]);
    return  0;
}