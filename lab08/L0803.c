#include <stdio.h>

float avg(float a[], int n)
{
    int i;
    float sum = 0;
    for (i = 0; i < n; i++)
    {
        sum += a[i];
    }
    float result = sum / n;
    printf("\nAverage height is %.2f\n", result);
}

int main()
{
    float x[30];
    int i;
    for (i = 0; i < 30; i++)
    {
        printf("Enter height for student #%d: ", i + 1);
        scanf("%f", &x[i]);
        if (x[i] <= 0)
        {
            break;
        }
    }
    float sum = avg(x, i);
    printf("Number of students is %d", i);
    return 0;
}