#include <stdio.h> 
#include <stdlib.h> 
int main()
{
    int number =0;
    int x,y,z;
    printf("Enter n: ");
    scanf("%d",&number);
    printf("\n");
    x=3+4 * ++number / 2-18;
    y=(3 + 4) * number++ / (18 * 2);
    z=15 / 2 + 3 - (14 * --number);
    printf("Results x = %d\n",x);
    printf("Results x = %d\n",y);
    printf("Results x = %d",z);
    return 0;
}