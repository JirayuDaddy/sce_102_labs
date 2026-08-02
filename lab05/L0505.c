#include <stdio.h>
#include <stdlib.h> 

int main() {
        int number,n=1;
        float average;

        printf("Student scrore calculator\n");
        do { 
        printf("Enter scrore for student %d : ",n,n+1);
        n++ ;
        scanf("%d",&number);
        }
        while (number > 0) ;
        printf("\n");

        average = number/n
        printf("Average score :: %.2f ",average);

        

    return 0 ;
}