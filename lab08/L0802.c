#include <stdio.h>
#include <stdlib.h>

int main () {
    int num = 1;
    int x;
    int age[10]={} ; 


    while (num <= 10) {
        do {
            printf("Enter age for person #%d: ", num);
            scanf("%d", &x);
            if (x <= 0) {
            printf("ERROR!\n");
            }
        } while (x <= 0);
        
        age[num - 1] = x;
        num++;
    }

    printf("\n-------------");

    for (int num = 10; num >= 1; num--) {
        printf("Person #%d age %d",num,age[num - 1]);
    }
    return 0 ;
}