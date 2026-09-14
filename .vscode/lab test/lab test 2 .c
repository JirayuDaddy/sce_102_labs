#include <stdio.h>

int mainscore(int*Scorene,int rowsne,int colsne, int studentindex, int increment ){
    for(int ena = 0;ena < colsne ; ena++ ){
    *(Scorene + studentindex * colsne + ena )+= increment;
    }
 return 0;
}
int CalculatorScore(int * Scorene, int rowne ,int colsne, int studentindex){
    int total=0;
    for(int ena = 0;ena < colsne ; ena ++ ){
    total += *(Scorene + studentindex * colsne + ena);
}
    printf("\n-----Student %d -----\n",studentindex +1);
    printf("\n---Total Score ::%d ", total);
 if (total >= 150) {
        printf("Result :: Pass\n");
    } else { 
        printf("Result :: Fail\n");
    }
return 0;
}
int main (){
    int scores [5][3] ;
    int studentindex ;
    char choice ;
    int incremet = 5;
    printf("Student Score System \n\n");
   for (int i = 0; i < 5; i++) {
        printf("Student %d\n", i +1);
        printf("-----------------\n");
        for (int j = 0; j < 3; j++) {
            printf("Test %d :: ", j +1);
            scanf("%d", &scores[i][j]);
        }
        printf("\n");
    }
    printf("select student (1-5): ");
    scanf("%d",&studentindex);
    int index = studentindex -1;
    printf ("incearse all scores by 5?(y/n): ");
    scanf(" %c",&choice);
    if (choice == 'y' || choice =='Y')
    {mainscore((int*)scores,5,3,index,incremet);
    }
    CalculatorScore((int*)scores,5,3,index);

    return 0;
}