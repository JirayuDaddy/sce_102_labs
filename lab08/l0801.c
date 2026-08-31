#include <stdio.h>

int main(void)
{
    float prices[] = {7.25f, 10.00f, 5.00f, 12.50f, 20.00f, 50.00f, 15.25f};
    int count = sizeof(prices) / sizeof(prices[0]);

    for (int i = 0; i < count; i++) {
        printf("product %d       price   %.2f\n", i + 1, prices[i]);
    }

    return 0;
}