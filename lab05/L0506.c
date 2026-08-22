#include <stdio.h>
#include <stdlib.h>

int main(){
    int number, i, res=1;
    printf("Enter the number for factorial: ");
    scanf("%d", &number);
    for(i=number;i>=1;i--){
        res*=i;
        printf("%d",i);
        if(i>1){
            printf("* ");
        }
    }
    printf("= %d\n" , res);
    return 0;
}