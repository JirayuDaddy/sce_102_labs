#include <stdio.h>
#include <stdlib.h>

int scores[5][3];
int student_score1;
int student_score2;
int student_score3;
int student_score4;
int student_score5;
int totalscore = 0;

void SummarizeStudentScore(int select,int *scores);
void ShowingStudentScore(int select);
void InputStudentScore();
void IncreasingStudentScore(int select,int *scores);

int main()
{
    int select;
    char choice;
    InputStudentScore(); // for each 5 student and 3 scores of them
    printf("Select the student : ");
    scanf("%d",&select);
    do{
        printf("Increase all scores by 5? (y/n) : ");
        scanf(" %c",&choice);
    }while(choice != 'y' && choice != 'n');
    if(choice == 'y')
        {
            for(int j = 0 ; j<=2 ; j++)
            {
            IncreasingStudentScore(select, &scores[select-1][j]);
            }
        }
    ShowingStudentScore(select);
    int sum =0;
    for(int j = 0 ; j<=2 ; j++)
    {
       SummarizeStudentScore(select,&scores[select-1][j]);
    }
    printf("Total Score :: %d\n",totalscore);
    if(totalscore >=150)
    {
        printf("Result :: PASS");
    }
    else
    {
        printf("Result ::FAILED");
    }
return 0;
}

void SummarizeStudentScore(int select,int *scores)
{
    totalscore += *scores;
}

void ShowingStudentScore(int select)
{
    printf("\nStudent %d\n",select);
    printf("---------------------\n");
    for(int j = 0 ; j<=2 ; j++)
    { 
    printf("Test %d :: ",j+1);
    printf("%d\n",scores[select-1][j]);
}
}

void InputStudentScore()
{   
    
    printf("Student Score System\n");
    for(int i = 0 ; i <=4 ; i++)
    {
    printf("\nStudent %d\n",i+1);
    printf("---------------------\n");
    for(int j = 0 ; j<=2 ; j++)
    { 
    printf("Test %d :: ",j+1);
    scanf("%d",&scores[i][j]);
    }
    }
}

void IncreasingStudentScore(int select,int *scores)
{
    *scores += 5;       
}