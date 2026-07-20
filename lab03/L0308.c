#include <stdio.h>
#include <math.h>

int main(void) {
    float r;
    const float pi = 3.1416f;
    float circleArea;
    int bigCircle;

    printf("Enter r: ");
    scanf("%f", &r);

    circleArea = pi * pow(r, 2);
    printf("\nCircle area = %.2f\n", circleArea);

    /* ห้ามใช้ if-else: นิพจน์เปรียบเทียบ (circleArea >= 100) ให้ผลเป็น 1 (true) หรือ 0 (false)
       อยู่แล้ว จึงพิมพ์ค่านั้นออกมาโดยตรงแทนการเช็คเงื่อนไขด้วย if-else */
    bigCircle = (circleArea >= 100);
    printf("Big circle %d\n", bigCircle);

    return 0;
}
