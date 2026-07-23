#include <stdio.h>

int main() {
    int x;

    printf("Enter number x: ");
    scanf("%d", &x);

    
    if (x < 0) {
        printf("Minus Number\n");
    } 
    else if (x > 0) {
        printf("Plus Number\n");
    } 
    else {
      
        printf("It's \"Zero\"\n");
    }

    return 0;
}