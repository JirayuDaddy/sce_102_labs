#include <stdio.h>

int main()
{
    float f1,r1;
    int n1,n2;
    printf("Enter n1 : ");
    scanf("%d",&n1);
    printf("Enter n2 : ");
    scanf("%d",&n2);
    printf("Enter f1 : ");
    scanf("%f",&f1);

    r1 = n1 / n2 ;

    printf("Results\n");
    printf("%d / %d = %.2f\n",n1,n2,r1);

    r1 = n1 / f1 ;
    printf("%d / %.2f = %.2f",n1,f1,r1);

    return 0; 
}