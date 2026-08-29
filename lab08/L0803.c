#include <stdio.h>

float avg_height(float height[],int number)
{
    float sum = 0;
    for(int i = 0 ; i < number ; i++)
    {
        sum += height[i];
    }
    return sum / number;
}

int main()
{
    float height[30];
    float h;
    int number;

    for(number = 0 ; number < 30 ; number++)
    {
    printf("Enter height for student #%d: ", number + 1);
    scanf("%f", &h);
    
    if (h <= 0)
    {
        break;
    }
    
    height[number] = h;

    }

    float avg = avg_height(height, number);
    printf("\nAverage height: %.2f\n", avg);
    printf("Number of students is %d", number);
    return 0;
}