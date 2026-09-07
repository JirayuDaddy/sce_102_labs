#include <stdio.h>
#include <stdlib.h>

int main() {
    float price[7] = {7.25, 10.00, 5.00, 12.50, 20.00, 50.00, 15.25};
    int i;
    for(i=0;i<7;++i){
        printf("product %d  price  %.2f\n",i+1,price[i]);
    }
    return 0;
}