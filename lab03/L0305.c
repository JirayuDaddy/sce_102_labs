#include <stdio.h>
#include <stdlib.h>

int main(){
    int n=0;
    printf("Enter n: ");
    scanf("%d",&n);
    printf("\nResult x = %d",3+4*++n/2-18);
    printf("\nResult y = %d",(3+4)*n++/(18*2));
    printf("\nResult z = %d",15/2+3-(14*--n));
    return 0;
}