#include <stdio.h>

int main() {
    
    int x;


    printf("Enter number x: ");
    scanf("%d", &x);

    
    if (x < 0) {
        printf("Minus Number\n");
    } 
    else if (x == 0) {
        printf("It's \"Zero\"\n");
    } 
    else {
      
        printf("Plus Number\n");
        
       
        if (x >= 1000) {
            printf("\"Very Large Number\"\n");
        } 
        else if (x >= 100) {
            printf("\"Large Number\"\n");
        } 
        else {
            printf("\"Nominal Range\"\n");
        }
    }

    return 0;
}
