#include <stdio.h>

int main()
{
    int x=0;
    printf("Enter x : ");
    scanf("%d",&x);


    // eq 1 ทำไม่ได้
    x -= 3/2;
    printf("x after eq1 = %d\n",x);
    // eq 1 ทำไม่ได้


    x *= 6;
    printf("x after eq2 = %d\n",x);

    x += 36 ;
    printf("x after eq3 = %d\n",x);

    x *= 140/3;
    printf("x after eq4 = %d\n",x);

    return 0;
}