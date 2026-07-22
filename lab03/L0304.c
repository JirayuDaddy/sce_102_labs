#include <stdio.h>
#include <stdlib.h>
#include <math.h>

    int main(){

        int x;

        printf("Enter a number: ");
        scanf("%d", &x);

        x-=3/2;
        printf("\nx after eq1 = %d\n", x);
        x*=6;
        printf("x after eq2 = %d\n", x);
        x+=36;
        printf("x after eq3 = %d\n", x);
        x*=46.666666666666666666666666666667;
        printf("x after eq4 = %d", x);



        return 0;
    }