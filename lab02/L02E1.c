#include <stdio.h>
#include <stdlib.h>

int main (){

    int burger;
    float High;
    char initial;

    printf("Before\n");
    printf("burger: %d\n", burger);
    printf("High: %f\n", High);
    printf("initial: %c\n", initial);
    burger = 70;
    High = 67.5;
    initial = 'a';
    printf("\nAfter\n");
    printf("burger: %d\n", burger);
    printf("High: %f\n", High);
    printf("initial: %c\n", initial);
    return 0;
}