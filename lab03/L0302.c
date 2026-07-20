#include <stdio.h>

int main(void) {
    int n1, n2;
    float f1;
    float r1;

    printf("Enter n1: ");
    scanf("%d", &n1);
    printf("Enter n2: ");
    scanf("%d", &n2);
    printf("Enter f1: ");
    scanf("%f", &f1);

    printf("\nResults\n");

    r1 = n1 / n2;                /* int / int -> เป็นจำนวนเต็ม เศษถูกตัดทิ้ง */
    printf("%d / %d = %.2f\n", n1, n2, r1);

    r1 = n1 / f1;                /* int / float -> คอมไพเลอร์เลื่อนขั้น n1 เป็น float ก่อนคำนวณ */
    printf("%d / %.2f = %.2f\n", n1, f1, r1);

    return 0;
}
