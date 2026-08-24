#include <stdio.h>
#include <stdlib.h>

int main(){
    int n1=0,n2=0;
    float f1=0,r1=0;
    printf("Enter n1: ");
    scanf("%d",&n1);
    printf("Enter n2: ");
    scanf("%d",&n2);
    printf("Enter f1: ");
    scanf("%f",&f1);
    r1 = (float)n1/f1;
    printf("\nResults\n%d / %d = %.2f\n%d / %.2f = %.2f",n1,n2,(float)n1/n2,n1,f1,r1);
    return 0;
}