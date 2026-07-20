#include <stdio.h>

int main()
{
    int n,x,y,z;

    printf("Enter n : ");
    scanf("%d",&n);
    x = 3+(4*++n/2)-18;
    y = 7*n++/36;
    z = (15/2+3) - (14* --n);

    printf("Result x = %d\n",x);
    printf("Result y = %d\n",y);
    printf("Result z = %d\n",z);

    return 0;
}