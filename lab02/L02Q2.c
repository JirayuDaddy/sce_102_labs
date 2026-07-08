#include <stdio.h>
#include <stdlib.h>
int main() {
    float cm;
    double INTCH_RATE = 2.54;
    float MILLI_RATE = 10;
    float METER_RATE = 100;
    printf("Enter length of centimaters: ");
    scanf("%f", &cm);
    printf("%f cm is %.2f millimeters = %.2f meters = %.2f and inches \n", cm, cm * MILLI_RATE, cm / INTCH_RATE, cm / METER_RATE);
    return 0;
}