#include <stdio.h>
float calculateAverage(float heights[] , int count){
    if (count == 0) return 0;
    float sum = 0.0;
    for (int i = 0; i < count; i++)
    {
        sum += heights[i];
    }
    return sum / count
}
int main(){
    float heights[30];
    int count = 0;
    float tempH;

    for (int i = 0; i < 30; i++)
    {
        printf("Enter height for student #%d:", i + 1);
        scanf("%f",&tempH);

        if (tempH <= 0)
        {
            break;
        }
        heights[count] = tempH;
        count++;
    }
    float avg = calculateAverage(heights,count);
    printf("\nAverage height is %.2f\n",avg);
    printf("Number of student is %d\n",count);
    return 0;
}