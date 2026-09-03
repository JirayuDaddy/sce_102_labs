#include <stdio.h>

float averageHeight(float height[], int count)
{
    float sum = 0;

    for (int i = 0; i < count; i++)
    {
        sum += height[i];
    }

    return sum / count;
}

int main()
{
    float height[30];
    int count = 0;

    while (count < 30)
    {
        printf("Enter height for student #%d: ", count + 1);
        scanf("%f", &height[count]);

        if (height[count] <= 0)
        {
            break;
        }

        count++;
    }

    float average = averageHeight(height, count);

    printf("\nAverage height is %.2f\n", average);
    printf("Number of students is %d\n", count);

    return 0;
}

