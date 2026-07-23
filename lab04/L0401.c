#include <stdio.h>

int main() {
    int x;
    

    printf("Enter number x: ");
    scanf("%d", &x);
   
    if (x < 0) {
        printf("Minus Number\n");
    }
    
    return 0;
}