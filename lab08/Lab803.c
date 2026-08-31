#include <stdio.h>

float average(float height[], int count) {
    float sum = 0;

    for (int i = 0; i < count; i++) {
        sum += height[i];
    }

    return sum / count;
}

int main() {
    float height[30];
    int count = 0;

    for (int i = 0; i < 30; i++) {
        printf("Enter height for student #%d: ", i + 1);
        scanf("%f", &height[i]);

        if (height[i] <= 0) {
            break;
        }

        count++;
    }

    if (count > 0) {
        printf("\nAverage height = %.2f\n", average(height, count));
        printf("Number of students = %d\n", count);
    } else {
        printf("\nNo student data.\n");
    }

    return 0;
}