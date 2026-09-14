#include <stdio.h>
#include <stdlib.h>

void addscores(int *scores,int exam,int bonus){
    for(int i=0;i<exam;i++){
        *(scores+i)+=bonus;
    }
}

int sum_scores(int *scores,int exam){
    int total = 0;
    for(int i=0;i<exam;i++){
        total += *(scores+i);
    }
    return total;
}

int main () {
    int student,scores[5][3],total;
    char S;
    for(int i=0;i<=4;i++){
        printf("Student %d\n",i+1);
        for(int j=0;j<=2;j++){
            printf("Test %d : ",j+1);
            scanf("%d",&scores[i][j]);
        }
    }
    printf("\n");
    for(int i=0;i<=4;i++){
        printf("Student %d score :",i+1);
        for(int j=0;j<=2;j++){
            printf(" %d",scores[i][j]);
        }
        printf("\n");
    }
    printf("\nSelect student : ");
    scanf("%d",&student);
    printf("\nIncrease all scores by 5? (y/n):");
    scanf(" %c",&S);
    if(S='y'){
        addscores(scores[student-1],3,5);
    }
    total = sum_scores(scores[5],3);
    printf("\nUpdate scores student %d :",student);
    for(int i=0;i<3;i++){
        printf(" %d",scores[student-1][i]);
    }
    printf("\n\n");
    if(total >= 150){
        printf("PASS");
    } else {
        printf("FAIL");
    }
}