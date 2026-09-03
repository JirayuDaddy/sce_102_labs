#include <stdio.h>

int main(void) {
    float prices[7] = {7.25f, 10.00f, 5.00f, 12.50f, 20.00f, 50.00f, 15.25f};
    for (int index = 0; index < 7; index++) {
        printf("product %d      ", index + 1);
        printf("price   %.2f\n", prices[index]);
    }
    return 0;
}