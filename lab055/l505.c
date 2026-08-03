#include <stdio.h>

int main() {
    int score;
    int student = 1;
    int count = 0;
    int sum = 0;
    int max, min;
    int maxStudent, minStudent;
    float average;

    printf("Student score calculator\n\n");

    while (1) {
        printf("Enter score for student %d: ", student);
        scanf("%d", &score);

        if (score < 0)
            break;

        if (count == 0) {
            max = min = score;
            maxStudent = minStudent = student;
        } else {
            if (score > max) {
                max = score;
                maxStudent = student;
            }

            if (score < min) {
                min = score;
                minStudent = student;
            }
        }

        sum += score;
        count++;
        student++;
    }

    if (count > 0) {
        average = (float)sum / count;

        printf("\nAverage score :: %.2f\n", average);
        printf("Highest score :: %d, by student %d\n", max, maxStudent);
        printf("Lowest score  :: %d, by student %d\n", min, minStudent);
    } else {
        printf("\nNo score entered.\n");
    }

    return 0;
}