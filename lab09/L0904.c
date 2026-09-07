#include <stdio.h>

int main(){
    int num [12] = {5 ,6 ,7 ,8 ,9 ,10 ,11 ,12 ,13 ,14 ,15};
    int *p = num;
    printf("original :::");
    for(int i = 0;i < 12,i++){
        printf("%d",*(p+i));
    }
    printf("\nmultiplied :::");
    for(int i = 0;i < 12,i++){
        printf("%d",*(p+i)*24);
    }
    return 0;
}