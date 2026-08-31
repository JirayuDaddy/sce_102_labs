#include <stdio.h>

double average_height(double height[], int count)
{
    double sum = 0;
    int i;

    for (i = 0; i < count; i++)
    {
        sum += height[i];
    }

    return sum / count;
}

int main()
{
    double height[30];
    int count = 0;
    double input;
    int i;

    for (i = 0; i < 30; i++)
    {
        printf("Enter height for student #%d: ", i + 1);
        scanf("%lf", &input);

        if (input <= 0)
        {
            break;
        }

        height[count] = input;
        count++;
    }

    printf("\nAverage height is %.2f\n", average_height(height, count));
    printf("Number of students is %d\n", count);

    return 0;
}