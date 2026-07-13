#include <stdio.h>
#include <stdlib.h>

int main(){
    int number;
    int a=1 , b=2 , c=3 , d=4 , e=5 , f=6;
    printf("Enter number: ");
    scanf("%d", &number);
    printf("%d x 1 = %d", number, number* a);
    printf("\n%d x 2 = %d", number, number* b);
    printf("\n%d x 3 = %d", number, number* c);
    printf("\n%d x 4 = %d", number, number* d);
    printf("\n%d x 5 = %d", number, number* e);
    printf("\n%d x 6 = %d", number, number* f);
    return 0 ;
    
}