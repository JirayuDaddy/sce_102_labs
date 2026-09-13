#include <stdio.h>
<<<<<<< HEAD
int main()
{
   int *apple;
   int a = 17;
   apple = &a;
   float *meter;
   float b = 22.38;
   meter = &b;
   char *order;
   char c = 'k';
   order = &c;
   printf("apple is %d, stored at %p\n", *apple, (void *)apple);
   printf("meter is %.2f, stored at %p\n", *meter, (void *)meter);
   printf("order is %c, stored at %p\n", *order, (void *)order);
   return 0;
=======

int main(){
    int apple = 17;
    float meter = 22.38;
    char order = 'k';

    int *x = &apple;
    float *y = &meter;
    char *z = &order;
    
    printf("apple is %d stored at %p\n",apple,*x);
    printf("meter is %.2f stored at %p\n",meter,*y);
    printf("order is %c stored at %p\n",order,*z);
    return 0;
>>>>>>> e96c5446dfea625192a6a2371622332869bb1cc4
}