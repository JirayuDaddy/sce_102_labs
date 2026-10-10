#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int scores[5][3];
int Test1,Test2,Test3;



int score(int *Test1, int *Test2, int *Test3)
{
    int Total_score;
    Total_score = *Test1 + *Test2 + *Test3 ;
    return Total_score;
}
int main()
{
    int x;
    int student;
    char choice;

    for(student=0; student < 5;++student){
    printf("Student Score System\n");
    printf("\nStudent %d\n----------\n", student +1);
    printf("Test 1 :: ");
    scanf("%d");
    printf("Test 2 :: ");
    scanf("%d");
    printf("Test 3 :: ");
    scanf("%d");
    }
    printf("Select student:");
    scanf(" %d", &x);
    printf("\nStudent %d\n",x);
    do
    {
        printf("Increase all score by 5? (y/n): ");
        scanf(" %c", &choice);
        if (choice != 'y' && choice != 'n')
        {
            printf("Error input\n\n");
        };
    } while (choice != 'y' && choice != 'n');
    int Total_score = score(&Test1, &Test2, &Test3);
    printf("Total Score :: %d",Total_score);

    return 0;
}