#include <stdio.h>

/* NOTE: Array is NOT used in this file, per the lab requirement (-1 point penalty). */

int main(void) {
    int score;
    int studentNum = 1;
    int count = 0;
    double sum = 0;
    int highest = 0, highestStudent = 0;
    int lowest = 0, lowestStudent = 0;

    printf("Student score calculator\n");

    while (1) {
        printf("Enter score for student %d: ", studentNum);
        scanf("%d", &score);

        if (score < 0) {
            break;
        }

        if (count == 0 || score > highest) {
            highest = score;
            highestStudent = studentNum;
        }
        if (count == 0 || score < lowest) {
            lowest = score;
            lowestStudent = studentNum;
        }

        sum += score;
        count++;
        studentNum++;
    }

    double average = sum / count;

    printf("Average score :: %.2f\n", average);
    printf("Highest score :: %d, by student %d\n", highest, highestStudent);
    printf("Lowest score  :: %d, by student %d\n", lowest, lowestStudent);

    return 0;
}
