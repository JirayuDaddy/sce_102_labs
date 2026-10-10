#include <stdio.h>
int i;
int main()
{
    float product[7] = {7.25, 10.00, 5.00, 12.50, 20.00, 50.00, 15.25};
    for (i = 0; i < 7; i++)
    {
        printf("product %-7d price %3.2f\n", i+1,product[i]);
    }
    return 0;
}