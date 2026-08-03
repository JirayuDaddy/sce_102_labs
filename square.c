#include <stdio.h>
#include <stdlib.h>
int main() {
    float wid, len, area;
    int n;
    do{
        printf("Enter the width : ");
        scanf("%f", &wid);
        printf("Enter the length : ");
        scanf("%f", &len);
        if(wid <= 0 || len <= 0){
            printf("Width and length must be positive numbers.\n");
            continue;
        }
        area = wid * len;
        printf("The area of the rectangle is: %.2f\n", area);
    
    }while(n == 1);
    return 0;
}