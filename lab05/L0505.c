#include <stdio.h>
#include <stdlib.h>

int main()
{
    int score, count = 0, sum = 0;
    int highest = 0, lowest = 0, highestStudent = 0, lowestStudent = 0;

    printf("Student score calculator\n\n");

    while (1)
    {
        printf("Enter score for student %d: ", count + 1);
        scanf("%d", &score);

        if (score < 0)
        {
            break;
        }

        count = count + 1;
        sum += score;

        if (count == 1 || score > highest)
        {
            highest = score;
            highestStudent = count;
        }
        if (count == 1 || score < lowest)
        {
            lowest = score;
            lowestStudent = count;
        }
    }

    printf("\n");
    printf("Average score :: %.2f\n", (float)sum / count);
    printf("Highest score :: %d, by student %d\n", highest, highestStudent);
    printf("Lowest score  :: %d, by student %d\n", lowest, lowestStudent);

    return 0;
}
