#include <stdio.h>
#include <math.h>
int main(){
    int x [7] = {1,4,7,11,16};
    float y [] = {13.2,1.4,3.8,2.75};
    char z  [25] = {'E','r','i','c','s','o','n'};

    int a = x[2];
    float b = y[0];
    char c = z[3];
    printf("%d,%.2f,%c", a, b, c);
    return 0;
}