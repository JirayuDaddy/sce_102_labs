#include <stdio.h>
#include <math.h>
int main(){
    float price[7] = {7.25,10.00,5.00,12.50,20.00,50.00,15.25};
    for (int  i = 0; i<7; i++){

        printf("product %d\t price\t %.2f\n", i + 1, price[i]);
    }
      return 0;
}