#include <stdio.h>
#include <string.h>
void increase_all_score(int (*scores)[3] , int select_student)
{
    for(int d = 0 ; d < 3 ; d++)
    {
    scores[select_student][d] += 5;
    }
}
int total_score(int (*scores)[3] , int select_student)
{
    int sum = 0;
    for(int d = 0 ; d < 3 ; d++)
    {
    sum += scores[select_student][d];
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
        for(int d = 0 ; d < 3 ; d++)
        {
            printf("Test %d :: ", d + 1);
            scanf("%d", &scores[i][d]);
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
            printf("error \n\n");
        }
    }
    while(choice != 'y' && choice != 'n');
    
    printf("Student %d\n", select_student + 1);
    printf("\n---------------\n\n");
    if(choice == 'y')
    {
        increase_all_score(scores , select_student);
    }
    for(int d = 0 ; d < 3 ; d++)
        {
            printf("Test %d :: ", d + 1 );
            printf("%d\n", scores[select_student][d]);
        }
    
    printf("\nTotal SCore :: %d", total_score(scores , select_student));
    printf("\n\nResult ::");
    if(total_score(scores , select_student) >= 150)
    {
        printf("Pass");
    }
    else
    {
        printf("Fail");
    }

    return 0;
}