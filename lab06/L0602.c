#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
   int games,random;
   srand(time(NULL));
   printf("Rock - Scissors - paper\n\n");
   printf("Rules\n");
   printf("---------------\n");
   printf("Rock > Scissors\n");
   printf("Scissors > Paper\n");
   printf("Paper > Rock\n\n");

   while(1){
       games =0;
   while(games<=0||games>=4){
       printf("Enter 1.Rock 2.Scissors 3.Paper : ");
       scanf("%d",&games);
       if(games==1){
           printf("User :: Rock\n");
       }
       else if(games==2){
           printf("User :: Scissors\n");
       }
       else if(games==3){
           printf("User :: Paper\n");
       }
   }

       random= rand()%3+1;
       if(random==1){
           printf("CPU :: Rock");
       }
       else if(random==2){
           printf("CPU :: Scissors");
       }
       else if(random==3){
           printf("CPU :: Paper");
       }
       if(games==random){
           printf("\n\nIt's a tie!\n\n");
       }
       else if((games==1&&random==2) || (games==2&&random==3) || (games==3&&random==1)){
           printf("\n\nPlayer wins!");
           break;
       }
       else if ((games==1&&random==3) || (games==2&&random==1) || (games==3&&random==2)){
           printf("\n\nPlayer lose!\n\n");
       }
   }

   return 0;
}
