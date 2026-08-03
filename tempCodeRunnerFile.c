<<<<<<< HEAD
#include <stdio.h>
#include <stdlib.h>

int main(){

    float MILLI_RATE = 10;
    float enter_centi;

    float Millennimeters = enter_centi * MILLI_RATE;
    scanf("%f", &enter_centi);
    printf("%f", Millennimeters);
=======

#include <stdio.h>

int main() {
    int num;

    printf("Enter number x: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Minus Number\n");
    }
    else if (num == 0) {
        printf("It's \"Zero\"\n");
    }
    else {
        printf("Plus Number\n");

        if (num > 1000) {
            printf("\"Very Large Number\"\n");
        }
        else if (num > 100) {
            printf("\"Large Number\"\n");
        }
        else {
            printf("\"Nominal Range\"\n");
        }
    }

>>>>>>> 09107e79d54aec3975cd4e8e5a66d9cfd92088c3
    return 0;
}