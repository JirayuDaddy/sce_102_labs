#include <stdio.h>

int main() {
    int score;
    int count = 0;
    int sum = 0;
    int highest = 0, lowest = 0;
    int highestStudent = 0, lowestStudent = 0;

    printf("Student score calculator\n\n");

    while (1) {
        printf("Enter score for student %d: ", count + 1);
        scanf("%d", &score);

        if (score < 0) {
            break;
        }

        count++;
        sum += score;

   
        if (count == 1) {
            highest = score;
            lowest = score;
            highestStudent = count;
            lowestStudent = count;
        } else {
            if (score > highest) {
                highest = score;
                highestStudent = count;
            }

            if (score < lowest) {
                lowest = score;
                lowestStudent = count;
            }
        }
    }

   
    if (count == 0) {
        printf("\nNo score entered.\n");
    } else {
        printf("\nAverage score  :: %.2f\n", (float)sum / count);
        printf("Highest score  :: %d, by student %d\n",
               highest, highestStudent);
        printf("Lowest score   :: %d, by student %d\n",
               lowest, lowestStudent);
    }

    return 0;
}