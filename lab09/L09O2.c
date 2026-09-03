#include <stdio.h>
#include <time.h>

void rollDice(int *dice )
{
    srand(time(NULL));
    *dice = rand()%6 + 1;
}

int main()
{
    int remains = 1; //  จุดเริ่มต้น
    int dice; 
    int *ptr_dice;
    ptr_dice = &dice;
    int i,j;
    char choice[1];
    int arr[5][5] = {{1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15},{16,17,18,19,20},{21,22,23,24,25}};
    printf("Snake and Ladder");
    do{
    printf("\n\nBoard :: ");
    for(int i = 0 ; i <=4 ; i++)
    {
        for(int j = 0 ; j<=4 ; j++)
        {
            if (remains == arr[i][j])
            {
            printf("(%d) ",arr[i][j]);
            }
            else if (remains >= 25 && arr[i][j] == 25)
            {
                printf("(%d)",arr[i][j]);
            }
            else if (arr[i][j] % 10 == 4 )
            {
                printf("_%d_ ",arr[i][j]);
            }
            else 
            {
                printf("%d ",arr[i][j]);
            }
        }
    }
    do {
        printf("\nRoll dice? (y) : ");
        scanf(" %c",&choice);
        if(choice != 'y')
        {
            printf("Error input");
        }
    }while(choice!= 'y');
    rollDice(ptr_dice);
    if (remains >= 25 )
    {
        printf("(%d)",arr[4][4]);
    }
    printf("you got %d",*ptr_dice);
    remains += dice;
    if(remains % 10 == 4)
    {
        printf("ตกบันได");
        remains -= 3 ;
    }
    printf("\nBoard :: ");
    for(int i = 0 ; i <=4 ; i++)
    {
        for(int j = 0 ; j<=4 ; j++)
        {
            if (remains == arr[i][j])
            {
            printf("(%d) ",arr[i][j]);
            }
            else if (remains >= 25 && arr[i][j] == 25)
            {
                printf("(%d)",arr[i][j]);
            }
            else if (arr[i][j] % 10 == 4 )
            {
                printf("_%d_ ",arr[i][j]);
            }
            else 
            {
                printf("%d ",arr[i][j]);
            }
        }
    }
}while(remains < 25);
printf("\nFINISH!!");
}
