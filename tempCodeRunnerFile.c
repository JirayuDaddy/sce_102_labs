#include <stdio.h>

float avgheight(float height[], int i)
{
    float sum = 0;
    for(int number = 0 ; number < i ; number++)
    {
        sum += height[number];
    }
    return sum / i;
}

int main()
{
    float height[30];
    int i = 0;

    for(i = 0 ; i < 30 ; i++)
    {
        printf("Enter height for students #%d: ", i + 1);
        scanf("%f", &height[i]);
        
        if(height[i] <= 0 )
        {
            i--;
            break;
        }
    }
    float avg = avg_height(height , i)
    printf("Average height is %.2f", avg);
    printf("Number of students is %d", i);
    return 0;
}