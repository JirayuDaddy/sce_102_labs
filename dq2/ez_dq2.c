#include <stdio.h>
#include <string.h>
void increase_all_score(int (*scores)[3] , int select_student)
{
    for(int j = 0 ; j < 3 ; j++)
    {
    scores[select_student][j] += 5;
    }
}
int total_score(int (*scores)[3] , int select_student)
{
    int sum = 0;
    for(int j = 0 ; j < 3 ; j++)
    {
    sum += scores[select_student][j];
    }
    return sum;
}
int main()
{
    int scores[5][3];
    int select_student = 0;
    char choice;
    printf("Student Score System\n");
    
    for(int i = 0 ; i < 5 ; i++)
    {
        
        printf("\nStudent %d\n", i + 1);
        printf("\n---------------\n\n");
        for(int j = 0 ; j < 3 ; j++)
        {
            printf("Test %d :: ", j + 1);
            scanf("%d", &scores[i][j]);
        }
    }
    printf("\nSclect student: ");
    scanf("%d", &select_student - 1);
    printf("\n\nIncrease all score by 5? (y/n): ");
    scanf(" %c", &choice);
    do
    {
    if(choice != 'y' && choice != 'n')
        {
            printf("ERROR input\n\n");
        }
    }
    while(choice != 'y' && choice != 'n');
    
    printf("Student %d\n", select_student + 1);
    printf("\n---------------\n\n");
    if(choice == 'y')
    {
        increase_all_score(scores , select_student);
    }
    for(int j = 0 ; j < 3 ; j++)
        {
            printf("Test %d :: ", j + 1 );
            printf("%d\n", scores[select_student][j]);
        }
    
    printf("\nTotal SCore :: %d", total_score(scores , select_student));
    printf("\n\nResult ::");
    if(total_score(scores , select_student) >= 150)
    {
        printf("PASS");
    }
    else
    {
        printf("FALL");
    }

    return 0;
}