#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    int x = 3 + 4 * ++n / 2 - 18;
    int y = (3 + 4) * n++ / (18 * 2);
    int z = 15 / 2 + 3 - (14 * --n);

    printf("\nResult x = %d", x);
    printf("\nResult y = %d", y);
    printf("\nResult z = %d", z);

    return 0;
}