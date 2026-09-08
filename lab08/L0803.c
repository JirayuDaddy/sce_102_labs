#include <stdio.h>

#define MAX_STUDENTS 30

float calculateAverage(float height[], int count);

int main(void) {
    float height[MAX_STUDENTS];
    int count = 0;
    float h;

    for (count = 0; count < MAX_STUDENTS; count++) {
        printf("Enter height for student #%d: ", count + 1);
        scanf("%f", &h);

        if (h <= 0) {
            break;
        }

        height[count] = h;
    }

    float avg = calculateAverage(height, count);

    printf("\nAverage height is %.2f\n", avg);
    printf("Number of students is %d\n", count);

    return 0;
}

float calculateAverage(float height[], int count) {
    float sum = 0;
    int i;

    for (i = 0; i < count; i++) {
        sum += height[i];
    }

    if (count == 0) {
        return 0;
    }

    return sum / count;
}