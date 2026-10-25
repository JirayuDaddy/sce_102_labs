#include <stdio.h>
int main(){
    float prices[7] = {7.25, 10.00, 5.00, 12.50, 20.00, 50.00,15.25};
    for (int i = 0; i < 7; i++)
    {
        printf("product %d\tprice\t.2f\n", i + 1, prices[i]);
    }
    return 0;
}