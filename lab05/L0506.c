#include <stdio.h>

int main() {
    int num;
    long long factorial = 1;

    printf("Enter the number for factorial: ");
    scanf("%d", &num);

    for (int i = num; i >= 1; i--) {
        factorial *= i; 
        
        printf("%d", i);
        
       
        if (i > 1) {
            printf(" * ");
        }
    }

 
    printf(" = %lld\n", factorial);

    return 0;
}
