#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    float num;
    printf("Enter a number for Y: ");
    scanf("%f", &num);


    float equation1 = sqrt((num*num)+45);
    printf("The result of the first equation is: %.2f\n", equation1);

    float equation2 = (num*num)+(num*3)+(1);
    printf("The result of the second equation is: %.2f\n", equation2);

    

    return 0;
}