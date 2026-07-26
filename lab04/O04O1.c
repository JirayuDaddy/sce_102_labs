#include <stdio.h>
#include <stdlib.h>

int main() {

    int s1,s2,s3,s4,s5 ;
    float x ;

    printf("Enter s1 number : ");
    scanf("%d",&s1);
    printf("Enter s2 number : ");
    scanf("%d",&s2);
    printf("Enter s3 number : ");
    scanf("%d",&s3);
    printf("Enter s4 number : ");
    scanf("%d",&s4);
    printf("Enter s5 number : ");
    scanf("%d",&s5);

    x = (float)(s1+s2+s3+s4+s5)/5.00 ;

    printf("\nAverage score %.2f ",x);

    if(x > 80){
        printf("\nAverage grade is A");
    }
    else if(x >= 70 && x <= 79) {
        printf("\nAverage grade is B");
    }
    else if(x >= 60 && x <= 69) {
        printf("\nAverage grade is C");
    }
    else {
        printf("\nAverage grade is F");
    }
    return 0 ;
}