#include <stdio.h>

int main()
{
    double price[7] = {7.25,10.00,5.00,12.50,20.00,50.00,15.25};
    int order[7] = {1,2,3,4,5,6,7};

    for(int i=0;i<=6;i++)
    {
        printf("product %d      price %.2f\n",order[i],price[i]);
    }
    return 0;
}