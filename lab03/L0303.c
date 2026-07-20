#include <stdio.h>

int main(void) {
    int n;
    int x, y, z;
    int step1, step2, step3;

    printf("Enter n: ");
    scanf("%d", &n);
    printf("\n");

    /* ---------- x = 3 + 4 * n / 2 - 18 ---------- */
    printf("x = 3 + 4 * n / 2 - 18\n");
    step1 = 4 * n;
    printf("  = 3 + %d / 2 - 18        (4 * %d)\n", step1, n);
    step2 = step1 / 2;
    printf("  = 3 + %d - 18           (%d / 2)\n", step2, step1);
    step3 = 3 + step2;
    printf("  = %d - 18               (3 + %d)\n", step3, step2);
    x = step3 - 18;
    printf("Result x = %d\n\n", x);

    /* ---------- y = (3 + 4) * n / (18 * 2) ---------- */
    printf("y = (3 + 4) * n / (18 * 2)\n");
    int a = 3 + 4;
    int b = 18 * 2;
    printf("  = %d * %d / %d          ((3+4)=%d, (18*2)=%d)\n", a, n, b, a, b);
    int c = a * n;
    printf("  = %d / %d\n", c, b);
    y = c / b;
    printf("Result y = %d\n\n", y);

    /* ---------- z = 15 / 2 + 3 - (14 * n) ---------- */
    printf("z = 15 / 2 + 3 - (14 * n)\n");
    int d = 15 / 2;
    int f = 14 * n;
    printf("  = %d + 3 - %d          (15/2=%d, 14*%d=%d)\n", d, f, d, n, f);
    int e = d + 3;
    printf("  = %d - %d\n", e, f);
    z = e - f;
    printf("Result z = %d\n", z);

    return 0;
}
