#include <stdio.h>
#include <stdlib.h>

int inputHeight(float height[]);
float findAverage(float height[], int count);

int main()
{
    float height[30];
    int count;
    float average;
    count = inputHeight(height);
    average = findAverage(height, count);
    printf("\nAverage height is %.2f\n", average);
    printf("Number of students is %d\n", count);

    return 0;
}

int inputHeight(float height[])
{
    int i = 0;

    while (i < 30)
    {
        printf("Enter height for student #%d: ", i + 1);
        scanf("%f", &height[i]);
        if (height[i] < 0){
            break;
        }

        i++;
    }

    return i;
}

float findAverage(float height[], int count)
{
    float sum = 0;
    int i;

    for (i = 0; i < count; i++){
        sum = sum + height[i];
    }
    if (count == 0){
        return 0;
    }

    return sum / count;
}