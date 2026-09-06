#include <stdio.h>
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
}