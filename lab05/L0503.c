#include <stdio.h>
#include <stdlib.h>

int main(){
    int i;
    printf("List of odd number :: ");
<<<<<<< HEAD
    for(i=1;i<=100;++i){
=======
    for(i=1;i,<=100;++i){
>>>>>>> b49dcfd2d22634d610dba96f1da2ad43d5909583
        if(i%2!=0){
            printf("%d",i);
        }
    }
<<<<<<< HEAD
    printf("\n\nList of odd number :: ");
    for(i=1;i<=100;++i){
=======
    printf("List of odd number :: ");
    for(i=1;i,<=100;++i){
>>>>>>> b49dcfd2d22634d610dba96f1da2ad43d5909583
        if(i%2==0){
            printf("%d",i);
        }
    }
    printf("\n");
    return 0;
}