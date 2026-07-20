#include <stdio.h>

int main(void) {
    int x;

    printf("Enter x: ");
    scanf("%d", &x);

    /* eq1: x = x - 3/2  ->  x อยู่ฝั่งซ้ายตัวเดียว แปลงได้ตรง ๆ */
    x -= 3 / 2;
    printf("x after eq1 = %d\n", x);

    /* eq2: x = 3x + 4x - x = (3+4-1)*x = 6x
       ต้องยุบพจน์ x ทั้งสามให้เหลือค่าสัมประสิทธิ์เดียวก่อน จึงจะใช้ shorthand ได้ */
    x *= (3 + 4 - 1);
    printf("x after eq2 = %d\n", x);

    /* eq3: x = 12*3 + x  ->  การบวกสลับที่ได้ (x + 12*3) จึงแปลงเป็น += ได้ */
    x += 12 * 3;
    printf("x after eq3 = %d\n", x);

    /* eq4: x = 14*(7*2-4)/3 * x  ->  การคูณสลับที่ได้ (x * ผลลัพธ์คงที่) จึงแปลงเป็น *= ได้ */
    x *= 14 * (7 * 2 - 4) / 3;
    printf("x after eq4 = %d\n", x);

    return 0;
}
