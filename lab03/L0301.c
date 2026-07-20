#include <stdio.h>
#include <stdlib.h>

int main(){
    int n1=0,n2=0;
    float f1=0,f2=0;
    printf("Enter n1: ");
    scanf("%d",&n1);
    printf("Enter n2: ");
    scanf("%d",&n2);
    printf("Enter f1: ");
    scanf("%f",&f1);
    printf("Enter f2: ");
    scanf("%f",&f2);
    printf("\nResults\n%d + %d = %.2f\n%d - %d = %.2f\n%d * %d = %.2f\n%d / %d = %.2f\n%d %% %d = %.2f",n1,n2,(float)n1+n2,n1,n2,(float)n1-n2,n1,n2,(float)n1*n2,n1,n2,(float)n1/n2,n1,n2,n1%n2);
    printf("\n\n%.2f + %.2f = %.2f\n%.2f - %.2f = %.2f\n%.2f * %.2f = %.2f\n%.2f / %.2f = %.2f",f1,f2,f1+f2,f1,f2,f1-f2,f1,f2,f1*f2,f1,f2,f1/f2);
    return 0;
}