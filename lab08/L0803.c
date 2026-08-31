#include <stdio.h>
#include <stdlib.h>

float average_height(float height[], int count)
{
    float sum = 0;
    int i;
    for(i = 0; i < count; i++)
    {
        sum += height[i];
    }
    return sum / count;
}
int main(){
    float height[30];
    int count = 0;
    float input;
    int i;
    for(i = 0; i < 30; i++)
    {
        printf("Enter height for student #%d: ", i+1);
        scanf("%If",&input);
        if(input <=0)
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