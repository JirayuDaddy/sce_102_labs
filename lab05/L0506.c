#include <stdio.h>
int main() {
    int n;
    long long factorial = 1;

    printf("Enter the number for factorial: ");
    scanf("%d", &n);

    for (int i = n; i >= 1; i--) {
        factorial *= i;
        printf("%d", i);
        if (i > 1) {
            printf(" * ");
        }
    }
    printf(" = %lld\n", factorial);

    return 0;
}