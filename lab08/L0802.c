#include <stdio.h>
#include <stdlib.h>

int m ;
int age [10];
int main(){
    for (m = 0; m < 10; m++)
        do{
            printf("Enter age person #%d : ",m + 1);
            scanf("%d",&age[m]);
            if (age[m]<= 0){
                printf("ERROR!\n");
            }


        }while(age[m] <= 0);
    printf("\n--------\n");
    for (m = 9; m >= 0; m--)
    {
        printf("Person #%d age %d\n", m + 1, age[m]);
    }
    return 0;
}