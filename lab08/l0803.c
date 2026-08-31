#include <stdio.h>

#define MAX_STUDENTS 30

double calculateAverage(const double heights[], int count)
{
    double total = 0.0;

    for (int i = 0; i < count; i++) {
        total += heights[i];
    }

    if (count == 0) {
        return 0.0;
    }

    return total / count;
}

int main(void)
{
    double heights[MAX_STUDENTS];
    int count = 0;

    for (int i = 0; i < MAX_STUDENTS; i++) {
        double height;

        printf("Enter height for student #%d: ", i + 1);
        scanf("%lf", &height);

        if (height <= 0) {
            break;
        }

        heights[count] = height;
        count++;
    }

    printf("\nAverage height is %.2f\n", calculateAverage(heights, count));
    printf("Number of students is %d\n", count);

    return 0;
}