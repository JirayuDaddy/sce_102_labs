#include <stdio.h>
float averageHeight(float heights[], int count);
int main(void) {
    float heights[30];
    int count = 0;
    while (count < 30) {
        float height;
        printf("Enter height for student #%d: ", count + 1);
        scanf("%f", &height);
        if (height <= 0) {
            break;
        }
        heights[count] = height;
        count++;
    }
    printf("\nAverage height is %.2f\n", averageHeight(heights, count));
    printf("Number of students is %d\n", count);
    return 0;
}
float averageHeight(float heights[], int count) {
    float total = 0.0f;
    for (int index = 0; index < count; index++) {
        total += heights[index];
    }
    if (count == 0) {
        return 0.0f;
    }
    return total / count;
}