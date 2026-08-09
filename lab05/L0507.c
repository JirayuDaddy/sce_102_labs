#include <stdio.h>
#include <stdlib.h>

int main(){
    int number, i, j;
    int total_sum = 0;
    printf("Enter the number for factorial: ");
    scanf("%d", &number);
    printf("Factorial results\n");
    for(j=1; j<=number; j++){
    int res = 1;
    printf("%d! = ", j);
    for (i=j; i>=1; i--){S
    res *= i;
    printf("%d",i);
    if(i>1){
        printf("*");
    }
}
printf("=%d\n",res);
total_sum += res;
    }
    for(j=1; j<= number; j++){
    int res = 1;
    for(i=j; i>=1; i--){
    res *= i;
    }
    printf("%d",res);
    if(j < number){
    printf(" + ");
    }
}
printf("= %d\n", total_sum);
    return 0;
}