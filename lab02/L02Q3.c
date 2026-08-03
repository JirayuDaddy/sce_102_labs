#include <stdio.h>
#include <stdlib.h>

int main (){

int a = 1;
int b = 2;
int c = 3;
int d = 4;
int e = 5;
int f = 6;
int enter_number;

printf("Enter number: ");
scanf("%d", &enter_number);
printf("%d x 1 = %d", enter_number, enter_number * a);
printf("\n%d x 2 = %d", enter_number, enter_number * b);
printf("\n%d x 3 = %d", enter_number, enter_number * c);
printf("\n%d x 4 = %d", enter_number, enter_number * d);
printf("\n%d x 5 = %d", enter_number, enter_number * e);
printf("\n%d x 6 = %d\n\n", enter_number, enter_number * f);

}