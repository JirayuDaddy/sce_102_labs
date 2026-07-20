#include <stdio.h>

int main(void) {
    int n;
    int x, y, z;

    printf("Enter n: ");
    scanf("%d", &n);
    printf("\n");

    /* ---------- x = 3 + 4 * ++n / 2 - 18 ---------- */
    printf("x = 3 + 4 * ++n / 2 - 18\n");
    int n1 = ++n;                          /* pre-increment: เพิ่มค่า n ก่อนนำไปใช้ */
    printf("  ++n -> n = %d\n", n1);
    int step1 = 4 * n1;
    int step2 = step1 / 2;
    int step3 = 3 + step2;
    x = step3 - 18;
    printf("  = 3 + %d / 2 - 18 = 3 + %d - 18 = %d - 18\n", step1, step2, step3);
    printf("Result x = %d   (n = %d)\n\n", x, n);

    /* ---------- y = (3 + 4) * n++ / (18 * 2) ---------- */
    printf("y = (3 + 4) * n++ / (18 * 2)\n");
    int n_used = n;                        /* post-increment: ใช้ค่าเดิมของ n ก่อน */
    n++;                                   /* แล้วค่อยเพิ่ม n ทีหลัง */
    printf("  n++ ->  n = %d  n = %d\n", n_used, n);
    int a = 3 + 4;
    int b = 18 * 2;
    int c = a * n_used;
    y = c / b;
    printf("  = %d * %d / %d = %d / %d\n", a, n_used, b, c, b);
    printf("Result y = %d\n\n", y);

    /* ---------- z = 15 / 2 + 3 - (14 * --n) ---------- */
    printf("z = 15 / 2 + 3 - (14 * --n)\n");
    int n2 = --n;                          /* pre-decrement: ลดค่า n ก่อนนำไปใช้ */
    printf("  --n -> n = %d\n", n2);
    int d = 15 / 2;
    int e = d + 3;
    int f = 14 * n2;
    z = e - f;
    printf("  = %d + 3 - %d = %d - %d\n", d, f, e, f);
    printf("Result z = %d\n", z);

    return 0;
}
