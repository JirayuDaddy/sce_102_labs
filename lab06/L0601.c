#include <stdio.h>
#include <math.h>
int main()
{ float Y , X1 , X2;
    printf("EnterNumberFor Y: ");
    scanf("%f", &Y);

    X1= sqrt(pow(Y, 2)+45);

    X2= pow(Y,2)+(3*Y)+1;

    printf("\nResults\n");
    printf("x from eq.1 = %.2f\n", X1);
    printf("x from eq.2 = %.2f\n", X2);
    return 0;
}