#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    const double PI=4.0*atan(1.0);
    int r=0,big=0;
    printf("Enter r: ");
    scanf("%d",&r);
    printf("\nCircle area = %.2f",PI*pow(r,2));
    big = (PI*pow(r,2)>=100);
    printf("\nBig circle %d",big);
    return 0;
}